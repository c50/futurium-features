<?php

/**
 * The original doesn't take into account directional relations.
 */
function _relation_get_available_types($entity_type, $bundle, $endpoint = 'source') {
  $bundle_key = $entity_type . ':' . $bundle;
  $all_bundle_key = $entity_type . ':*';
  $relation_types = relation_get_types();

  foreach ($relation_types as $type => $relation_type) {
    $available = FALSE;
    if ($endpoint == 'source' || $endpoint == 'both') {
      if (in_array($bundle_key, $relation_type->source_bundles) || in_array($all_bundle_key, $relation_type->source_bundles)) {
        $available = TRUE;
      }
    }
    if ($endpoint == 'target' || $endpoint == 'both') {
      if ($relation_type->directional) {
        if (in_array($bundle_key, $relation_type->target_bundles) || in_array($all_bundle_key, $relation_type->target_bundles)) {
          $available = TRUE;
        }
      }
      else {
        if ((in_array($bundle_key, $relation_type->source_bundles) || in_array($all_bundle_key, $relation_type->source_bundles)) && !$relation_type->directional) {
          $available = TRUE;
        }
      }
    }
    if (!$available) {
      unset($relation_types[$type]);
    }
  }
  return $relation_types;
}

/**
 * Helper function to create the relation.
 */
function _futurium_links_link_nodes($nid1, $nid2, $relation_type = NULL, $type = 'insert') {

  if ($nid1 == $nid2) {
    return array(
      'message' => t('Creating relation failed. Cannot link entity with itself.'),
      'type' => 'error',
      'fade' => TRUE,
    );
  }
  $origin_nid = $nid1;
  $target_nid = $nid2;

  $o_n = node_load($origin_nid);
  $t_n = node_load($target_nid);

  $relation = relation_type_load($relation_type);
  $reverse = _futurium_links_is_relation_reversed($origin_nid, $relation_type);

  $endpoints = array(
    array('entity_type' => 'node', 'entity_id' => $o_n->nid),
    array('entity_type' => 'node', 'entity_id' => $t_n->nid),
  );

  if ($reverse) {
    $endpoints = array_reverse($endpoints);
  }

  $results = relation_relation_exists($endpoints, $relation_type);
  if (empty($results)) {
    $new_relation = relation_create($relation_type, $endpoints);
    $rid = relation_save($new_relation);

    if ($relation->directional) {
      $relation_label = relation_get_type_label($relation, $reverse);
    }
    else {
      $relation_label = $relation->label;
    }

    if ($rid) {
      $vars = array(
        '@origin_node' => $o_n->title,
        '@origin_type' => $o_n->type,
        '@target_node' => $t_n->title,
        '@target_type' => $o_n->type,
        '@relation_label' => strtolower($relation_label),
      );

      $message = t('Relation created: @origin_node is <em>@relation_label</em> @target_node', $vars);
      $message_type = 'status';
      $fade = TRUE;
    }
    else {
      $message = t('Creating relationship failed.');
      $message_type = 'error';
      $fade = FALSE;
    }
  }
  else {
    $message = t('Relationship already exists.');
    $message_type = 'warning';
    $fade = TRUE;
  }

  if ($type == 'insert') {
    drupal_set_message($message, $message_type);
  }
  else {
    return array(
      'message' => $message,
      'type' => $message_type,
      'fade' => $fade,
    );
  }
}

/**
 * Helper function to extract selected node from autocomplete field.
 */
function _futurium_links_parse_result($value) {
  $result = preg_match('/\[([0-9]+)\]/', $value, $matches);
  if ($result > 0) {
    $result = $matches[0];
    $result = str_replace('[', '', $result);
    $result = str_replace(']', '', $result);
    return $result;
  }
  return FALSE;
}

/**
 * Helper function to extract selected relation from autocomplete field.
 */
function _futurium_links_parse_relation($value) {
  $result = preg_match('/{(.*?)}/', $value, $matches);
  if ($result > 0) {
    $result = $matches[0];
    $result = str_replace('{', '', $result);
    $result = str_replace('}', '', $result);
    return $result;
  }
  return FALSE;
}

/**
 * Helper to show list of relations.
 */
function _futurium_links_get_related_items($entities, $relation_type, $settings = NULL) {

  $render_array = array();

  $header = array(
    'title' => array('data' => ''),
    'delete' => array('data' => ''),
  );

  $display_as = $settings['list_type'];
  $delete_string = $settings['delete_link_text'];
  $per_page = $settings['items_per_page'];
  $pager_type = $settings['pager_type'];

  $id = array_keys($entities);

  foreach ($entities as $id => $entity) {
    $relation_types = array($relation_type);
    $entity_type = "node";
    $query = relation_query($entity_type, $id)->range(0, 50);
    if ($relation_types) {
      $query->entityCondition('bundle', $relation_types, 'IN');
    }
    $relation_ids = array_keys($query->execute());
  }

  foreach (entity_load('relation', $relation_ids) as $relation) {
    $items[$id][] = (array) $relation;
  }

  $rows = array();

  if (!empty($items[$id])) {
    foreach ($items[$id] as $delta => $item) {
      $links = array();
      $relation = (object) $item;
      foreach (array_filter($relation->endpoints[LANGUAGE_NONE]) as $endpoint) {
        $related_entities = entity_load($endpoint['entity_type'], array($endpoint['entity_id']));
        $related_entity = reset($related_entities);
        if (!($endpoint['entity_type'] == $entity_type && $endpoint['entity_id'] == $id)) {
          $link = entity_uri($endpoint['entity_type'], $related_entity);
          $link['href'] = $link['path'];
          $link['title'] = entity_label($endpoint['entity_type'], $related_entity);
          $links[] = $link;
        }
      }

      $element[$delta] = array(
        '#theme' => 'link',
        'path' => $links[0]['href'],
        'text' => $links[0]['title'],
        'options' => array(
          'attributes' => array(),
          'html' => FALSE,
        ),
      );

      $delete_link_opts = array(
        'attributes' => array(
          'title' => t("Delete relation"),
          'class' => 'relation-delete-link',
        ),
        'query' => array(
          'destination' => $_GET['q'],
        ),
      );

      $delete_link = l(
        $delete_string,
        'relation/' . $relation->rid . '/delete',
        $delete_link_opts
      );

      switch ($display_as) {
        case 'table':
          $rows[$delta] = array(
            'title' => theme_link($element[$delta]),
            'delete' => $delete_link,
          );
          break;

        case 'item-list':
          $rows[$delta] = theme_link($element[$delta]) . ' ' . $delete_link;
          break;
      }
    }

    if ($per_page) {
      $current_page = pager_default_initialize(count($rows), $per_page);
      $chunks = array_chunk($rows, $per_page, TRUE);
      $rows = $chunks[$current_page];
    }
    else {
      $pager_type = 'none';
    }

    switch ($display_as) {
      case 'table':
        $render_array['table'] = array(
          '#theme' => 'table',
          '#rows' => $rows,
          '#empty' => t('Empty List - No Entries'),
          '#header' => $header,
        );
        break;

      case 'item-list':
        $render_array['table'] = array(
          '#theme' => 'item_list',
          '#items' => $rows,
          '#header' => $header,
          '#attributes' => array(
            'class' => 'existing-relation-list',
          ),
        );
        break;
    }

    switch ($pager_type) {
      case 'mini':
        $render_array['pager'] = array(
          '#theme' => 'views_mini_pager',
          '#limit' => $per_page,
          '#quantity' => count($rows),
        );
        break;

      case 'full':
        $render_array['pager'] = array(
          '#theme' => 'pager',
          '#quantity' => count($rows),
        );
        break;

      default:
    }

  }

  return $render_array;
}

/**
 * Callback for autocomplete box.
 */
function _futurium_links_node_autocomplete($relation_name, $nid, $string) {

  $matches = array();
  if ($relation_name == 'all') {
    $relations = relation_get_types();
    foreach ($relations as $key => $relation) {
      $search_bundles[] = _futurium_links_get_related_content_types($nid, $relation->relation_type);
    }
    $search_bundles = array_filter($search_bundles);
    $bundles = implode('+', $search_bundles);
  }
  else {
    $bundles = _futurium_links_get_related_content_types($nid, $relation_name);
  }

  if ($string && !empty($bundles)) {

    $bundles = explode('+', $bundles);

    $query = db_select('node', 'n');
    $query->fields('n', array('title', 'nid', 'type'));

    $query
      ->condition('n.title', '%' . db_like($string) . '%', 'LIKE')
      ->condition('n.type', $bundles, 'IN');

    $query->distinct();
    $query->groupBy('n.nid');
    $query->range(0, 15);

    drupal_alter('futurium_links_query', $query);

    $result = $query->execute();

    while ($row = $result->fetchAssoc()) {
      if ($relation_name == 'all') {
        $n = node_load($row['nid']);
        $classes = array('autocomplete-suggestion');

        $possible_relations = _futurium_links_get_possible_relations($nid, $n->nid);

        drupal_alter('futurium_linker_possible_relations', $possible_relations);

        foreach ($possible_relations as $key => $value) {
          $relation = relation_type_load($value);
          $relations[] = $relation;
          $reverse = _futurium_links_is_relation_reversed($nid, $value);

          $rel_label = relation_get_type_label($relation, $reverse);

          $array_key = $row['title'] . " {" . $relation->relation_type . "}" . " [" . $row['nid'] . "]";

          $label = '<span';

          $classes[] = 'node-type-' . $n->type;
          $classes[] = 'relation-type-' . $value;
          drupal_alter('futurium_linker_autocomplete_label_classes', $classes);

          // TODO: Move to hook.
          if (isset($n->workbench_moderation['current']->state)) {
            $classes[] = $n->workbench_moderation['current']->state;
          }

          $label .= ' class="' . implode($classes, ' ') . '">';

          $label .= t("@relation_label", array('@relation_label' => $rel_label));
          $label .= ' ' . check_plain($row['title']);
          $label .= '</span>';

          $matches[$array_key] = $label;

        }
      }
      else {
        $key = $row['title'] . " [" . $row['nid'] . "]";
        $matches[$key] = array(
          'label' => $row['title'],
          'class' => "autocomplete existing " . $row['type'],
        );
      }
    }
  }

  drupal_alter('futurium_links_autocomplete_matches', $matches);

  if ($relation_name == 'all') {
    foreach ($relations as $key => $relation) {
      $matches += _futurium_links_create_links($nid, $relation->relation_type);
    }
  }
  else {
    $matches += _futurium_links_create_links($nid, $relation_name);
  }
  drupal_json_output($matches);
}

/**
 * Return links to create content that can be related to a node.
 *
 * To add to autocomplete matches.
 */
function _futurium_links_create_links($nid, $relation_name) {
  $content_types[$relation_name] = _futurium_links_get_related_content_types($nid, $relation_name);

  foreach ($content_types as $relation_type => $possible_content_types) {
    $p_content_types = explode('+', $possible_content_types);
    foreach ($p_content_types as $key => $value) {
      $relation = relation_type_load($relation_type);
      $content_type_name = node_type_get_name($value);
      $path = 'node/add/' . str_replace("_", "-", $value);
      $path .= '?related_to=' . $nid . '&relation_type=' . $relation_type;

      $reverse = !_futurium_links_is_relation_reversed($nid, $relation_type);
      $relation_label = relation_get_type_label($relation, $reverse);
      $full_label = "+ Create new $content_type_name $relation_label this";

      drupal_alter('futurium_links_autocomplete_label', $full_label);

      $links[$path] = array('label' => $full_label, 'class' => "autocomplete new $value");
    }
  }
  return $links;
}

/**
 * Returns content types that can be related to a node.
 */
function _futurium_links_get_related_content_types($nid, $relation_type) {
  $relation = relation_type_load($relation_type);
  $node = node_load($nid);

  $bundles = array();
  $source_bundles = $relation->source_bundles;
  $target_bundles = $relation->target_bundles;
  $current_bundle = 'node:' . $node->type;

  if ($relation->directional) {
    if (in_array($current_bundle, $source_bundles, TRUE)) {
      // Current is source for this relation, use target bundles.
      $bundles = implode('+', $target_bundles);
    }

    if (in_array($current_bundle, $target_bundles, TRUE)) {
      // Current is target for this relation, use source bundles.
      $bundles = implode('+', $source_bundles);
    }
  }
  else {
    // The relation is not directional, in that case use sources as well.
    $bundles = implode('+', $source_bundles);
  }
  $bundles = str_replace('node:', '', $bundles);
  return $bundles;
}

/**
 * Return all possible relation types a node can be involved in.
 */
function _futurium_links_get_node_possible_relations($nid1) {
  $o_n = node_load($nid1);

  $as = array_keys(_relation_get_available_types('node', $o_n->type));
  $at = array_keys(_relation_get_available_types('node', $o_n->type, 'target'));

  $a_all = array_unique(array_merge($as, $at));

  return $a_all;
}

/**
 * Return all possible relation types between two nodes.
 */
function _futurium_links_get_possible_relations($nid1, $nid2) {

  $o_n = node_load($nid1);
  $t_n = node_load($nid2);

  $as = array_keys(_relation_get_available_types('node', $o_n->type, 'source'));
  $at = array_keys(_relation_get_available_types('node', $o_n->type, 'target'));

  $bs = array_keys(_relation_get_available_types('node', $t_n->type, 'source'));
  $bt = array_keys(_relation_get_available_types('node', $t_n->type, 'target'));

  $a_all = array_intersect($as, $bt);
  $b_all = array_intersect($bs, $at);

  $all = array_unique(array_merge($a_all, $b_all));

  return $all;
}

/**
 * Helper function: check if a relation is reversed in a node context.
 */
function _futurium_links_is_relation_reversed($nid1, $relation_type) {
  $o_n = node_load($nid1);
  $relation = relation_type_load($relation_type);
  // Directional relation.
  if ($relation->directional) {
    if (in_array('node:' . $o_n->type, $relation->target_bundles, TRUE)) {
      return TRUE;
    }
  }
  return FALSE;
}
