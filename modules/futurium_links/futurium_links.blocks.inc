<?php
/**
 * @file
 * futurium_links.blocks.inc
 */

/**
 * Implements hook_block_info().
 */
function futurium_links_block_info() {
  $blocks['futurium_links'] = array(
    'info' => t('Futurium Links'),
    'cache' => DRUPAL_NO_CACHE ,
    'mb_enabled' => TRUE,
  );
  $blocks['futurium_links_relations'] = array(
    'info' => t('Futurium Relations List'),
    'cache' => DRUPAL_NO_CACHE ,
    'mb_enabled' => TRUE,
  );
  return $blocks;
}

/**
 * Implements hook_block_configure().
 */
function futurium_links_block_configure($delta = '', $edit = NULL) {
  $form = array();

  $settings = futurium_links_block_default_settings($delta, $edit);
  $mb = isset($edit['multiblock_delta'])
    ? $delta . '_' . $edit['multiblock_delta']['#value']
    : $delta;

  $form[$mb] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );

  if ($delta == 'futurium_links') {

    $form[$mb]['block_type'] = array(
      '#type' => 'select',
      '#title' => t('Block type'),
      '#default_value' => $settings['block_type'],
      '#options' => array(
        'single' => t('Single textfield (one for all relation types)'),
        'single_radios' => t('Single textfield with radios to select relation'),
        'multiple' => t('Multiple textfields (one per relation type)'),
      ),
      '#required' => TRUE,
    );

    $entity_info = entity_get_info('node');
    $vm_options = array();
    foreach ($entity_info['view modes'] as $k => $view_mode) {
      $vm_options[$k] = $view_mode['label'];
    }

    $form[$mb]['preview_view_mode'] = array(
      '#type' => 'select',
      '#title' => t('Preview view mode'),
      '#default_value' => $settings['preview_view_mode'],
      '#options' => $vm_options,
      '#description' => t('The view mode to use for the preview.'),
      '#required' => TRUE,
    );

    $form[$mb]['show_add_links'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add create content links'),
      '#default_value' => $settings['show_add_links'],
      '#description' => t('Check to show links to create content on the widget.'),
    );

  }

  if ($delta == 'futurium_links_relations') {

    $form[$mb]['relations'] = array(
      '#title' => t("Relation types to show"),
      '#type' => 'checkboxes',
      '#options' => relation_get_types_options(),
      '#default_value' => $settings['relations'],
      '#description' => t('Leave empty to select all relations.'),
    );

    $form[$mb]['list_type'] = array(
      '#type' => 'select',
      '#title' => t('List type'),
      '#default_value' => $settings['list_type'],
      '#options' => array(
        'table' => t('Table'),
        'item-list' => t('Item list'),
      ),
    );

    $form[$mb]['items_per_page'] = array(
      '#type' => 'textfield',
      '#title' => t('Items per page'),
      '#description' => t('Enter 0 to show all items.'),
      '#default_value' => $settings['items_per_page'],
      '#size' => 2,
      '#maxlength' => 2,
    );

    $form[$mb]['pager_type'] = array(
      '#type' => 'select',
      '#title' => t('Pager type'),
      '#default_value' => $settings['pager_type'],
      '#options' => array(
        'no_pager' => t('No pager'),
        'mini' => t('Mini pager'),
        'full' => t('Full pager'),
      ),
      '#states' => array(
        'visible' => array(
          ':input[name*="items_per_page"]' => array('!value' => 0),
        ),
        'required' => array(
          ':input[name*="items_per_page"]' => array('!value' => 0),
        ),
      ),
      '#required' => TRUE,
    );

    $form[$mb]['delete_link_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Delete link text'),
      '#default_value' => $settings['delete_link_text'],
      '#size' => 25,
      '#maxlength' => 25,
    );
  }

  return $form;
}

/**
 * Implements hook_block_save().
 */
function futurium_links_block_save($delta = '', $edit = array()) {

  $mb = isset($edit['multiblock_delta'])
    ? $delta . '_' . $edit['multiblock_delta']['#value']
    : $delta;

  $settings = $edit[$mb];

  variable_set($mb . '_settings', $settings);
}

/**
 * Implements hook_block_view().
 */
function futurium_links_block_view($delta = '', $edit = NULL) {
  $block = array();
  $node = menu_get_object();

  if (isset($node)) {

    $settings = futurium_links_block_default_settings($delta, $edit);

    switch ($delta) {
      case 'futurium_links':
        if (user_access('use futurium links')) {
          $block['subject'] = t("Create relation");

          $block_type = $settings['block_type'];
          switch ($block_type) {

            case 'multiple':
              $form = drupal_get_form('futurium_links_multiple_boxes_form', $node, $settings);
              break;

            case 'single':
              $form = drupal_get_form('futurium_links_single_box_form', $node, $settings);
              break;

            case 'single_radios':
              $form = drupal_get_form('futurium_links_radio_choice_form', $node, $settings);
              break;

          }
          $block['content']['#markup'] = drupal_render($form);
        }
        break;

      case 'futurium_links_relations':

        $entities = array($node->nid => $node);
        $block['subject'] = t("Relations");

        $relations = relation_get_types();
        $selected_relations = array_filter($settings['relations']);
        if (empty($selected_relations)) {
          $selected_relations = array_keys(relation_get_types_options());
        }

        foreach ($selected_relations as $relation_name) {
          $reverse = _futurium_links_is_relation_reversed($node->nid, $relation_name);
          $label = $reverse ? $relations[$relation_name]->reverse_label : $relations[$relation_name]->label;

          $table = _futurium_links_get_related_items($entities, $relation_name, $settings);
          if (!empty($table)) {
            if (empty($block['content']['#markup'])) {
              $block['content'] = array(
                '#markup' => '',
                '#prefix' => '<div class="existing-relations-wrapper">',
                '#suffix' => '</div>',
              );
            }
            $block['content']['#markup'] .= '<h4 class="relation-label">' . ucfirst($label) . '</h4>';
            $block['content']['#markup'] .= render($table);
          }
        }
        break;

    }
  }

  return $block;
}

/**
 * Default block settings.
 */
function futurium_links_block_default_settings($delta = '', $edit = NULL) {

  $mb = isset($edit['multiblock_delta'])
    ? $delta . '_' . $edit['multiblock_delta']['#value']
    : $delta;

  $options = variable_get($mb . '_settings', array());
  $default_options  = array();

  switch ($delta) {
    case 'futurium_links':
      $default_options  = array(
        'block_type' => 'single',
        'preview_view_mode' => 'teaser',
        'show_add_links' => '0',
      );
      break;

    case 'futurium_links_relations':
      $all_relations = relation_get_types_options();
      foreach ($all_relations as $key => $relation) {
        $all_relations[$key] = 0;
      }

      $default_options = array(
        'relations' => $all_relations,
        'list_type' => 'item-list',
        'items_per_page' => '0',
        'pager_type' => 'no-pager',
        'delete_link_text' => 'Delete',
      );
      break;
  }

  return array_merge($default_options, $options);

}
