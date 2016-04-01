<?php

/**
 * Form to create relations.
 */
function futurium_links_single_box_form($form, &$form_state, $node, $settings) {

  $target_nid = NULL;

  if (!isset($node->nid) && isset($form_state['input']['origin'])) {
    $node = node_load($form_state['input']['origin']);
  }

  if ($node) {

    $form['#prefix'] = '<div id="linker" class="single-form">';
    $form['#suffix'] = '</div>';

    $form['form-class'] = array(
      '#type' => 'hidden',
      '#value' => '.single-form',
    );

    $form['origin'] = array(
      '#type' => 'hidden',
      '#value' => $node->nid,
    );

    $form['new'] = array(
      '#tree' => TRUE,
      '#type' => 'fieldset',
      '#title' => t('New relation'),
      '#collapsed' => FALSE,
      '#collapsible' => FALSE,
    );

    $form['new']['new-wrapper']['feedback'] = array(
      '#markup' => '<div class="feedback"></div>',
    );

    $form['new']['new-wrapper']['search'] = array(
      '#type' => 'textfield',
      '#autocomplete_path' => 'node/futurium_links/autocomplete/all/' . $node->nid,
      '#attributes' => array(
        'placeholder' => t('Search for content to link'),
      ),
      '#ajax' => array(
        'event' => 'autocompleteHidden',
        'callback' => "_futurium_links_show_preview",
        'wrapper' => 'linker',
      ),
      '#maxlength' => 255,
    );

    $form['preview_view_mode'] = array(
      '#type' => 'hidden',
      '#value' => $settings['preview_view_mode'],
    );

    $form['new']['new-wrapper']['preview'] = array(
      '#markup' => '<div class="preview"></div>',
    );

    $form['new']['new-wrapper']['link'] = array(
      '#value' => "Link",
      '#type' => 'button',
      '#attributes' => array(
        'class' => array(
          'btn-add-relation',
        ),
      ),
      '#ajax' => array(
        'callback' => '_futurium_links_link',
      ),
      '#prefix' => '<span class="button-wrap" style="display:none">',
      '#suffix' => '</span>',
    );

    _futurium_linker_add_autocomplete_js($form);

  }
  return $form;
}

/**
 * Form to create relations.
 */
function futurium_links_radio_choice_form($form, $form_state, $node, $settings) {

  $form['#prefix'] = '<div id="linker" class="radios-form">';
  $form['#suffix'] = '</div>';

  $form['form-class'] = array(
    '#type' => 'hidden',
    '#value' => '.radios-form',
  );

  $form['origin'] = array(
    '#type' => 'hidden',
    '#value' => $node->nid,
  );

  $options = array();
  $relss = relation_get_available_types('node', $node->type, 'source');
  $relst = relation_get_available_types('node', $node->type, 'target');
  $rels = array_merge($relss, $relst);

  foreach ($rels as $k => $v) {
    $label = $v->label;
    // Non-directional relation.
    if ($v->directional) {
      if (in_array('node:' . $node->type, $v->target_bundles)) {
        // Current $node is a target, use label.
        $label = $v->reverse_label;
      }
    }

    drupal_alter('futurium_linker_relation_label', $label, $form);

    $options[$v->relation_type] = t('@label', array('@label' => $label));
  }

  $form['current_content_type'] = array(
    '#type' => 'hidden',
    '#value' => $node->type,
  );

  // Set link type default.
  if (!isset($form_state['input']['new']['link_type'])) {
    $options = array_reverse($options);
    $default = "";
  }
  else {
    $default = $form_state['input']['new']['link_type'];
  }

  $form['new'] = array(
    '#tree' => TRUE,
    '#type' => 'container',
    '#attributes' => array(),
  );

  $form['new']['feedback'] = array(
    '#markup' => '<div class="feedback"></div>',
  );

  $form['new']['link_type'] = array(
    '#type' => 'radios',
    '#options' => $options,
    '#default_value' => $default,
    '#ajax' => array(
      'event' => 'change',
      'callback' => "_futurium_links_radio_changed",
    ),
    '#validated' => TRUE,
  );

  $form['new']['new-wrapper'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'id' => 'search-box-wrapper',
      'style' => 'display:none',
    ),
  );

  $form['new']['new-wrapper']['search'] = array(
    '#type' => 'textfield',
    '#autocomplete_path' => 'node/futurium_links/autocomplete/' . $default . '/' . $node->nid,
    '#attributes' => array(
      'placeholder' => t('Search for content to link'),
    ),
    '#ajax' => array(
      'event' => 'autocompleteHidden',
      'callback' => "_futurium_links_show_preview",
    ),
    '#maxlength' => 255,
  );

  $form['preview_view_mode'] = array(
    '#type' => 'hidden',
    '#value' => $settings['preview_view_mode'],
  );

  $form['new']['new-wrapper']['preview'] = array(
    '#markup' => '<div class="preview"></div>',
  );

  $form['new']['new-wrapper']['link'] = array(
    '#value' => "Link",
    '#type' => 'button',
    '#ajax' => array(
      'callback' => '_futurium_links_link',
    ),
  );

  _futurium_linker_add_autocomplete_js($form);

  return $form;
}

/**
 * Form to create relations.
 */
function futurium_links_multiple_boxes_form($form, &$form_state, $node, $settings) {

  $form['#prefix'] = '<div id="linker" class="multi-form">';
  $form['#suffix'] = '</div>';

  $form['form-class'] = array(
    '#type' => 'hidden',
    '#value' => '.multi-form',
  );

  $available_relations = _futurium_links_get_node_possible_relations($node->nid);

  foreach ($available_relations as $key => $relation_name) {
    $relation_type = relation_type_load($relation_name);
    $reversed = _futurium_links_is_relation_reversed($node->nid, $relation_name);

    $relation_label = $reversed ? $relation_type->reverse_label : $relation_type->label;

    $form['origin'] = array(
      '#type' => 'hidden',
      '#value' => $node->nid,
    );

    $form[$relation_name] = array(
      '#tree' => TRUE,
      '#type' => 'fieldset',
      '#title' => t('<em>@title</em> is @label', array('@title' => $node->title, '@label' => $relation_label)),
      '#collapsed' => FALSE,
      '#collapsible' => FALSE,
    );

    $form[$relation_name]['new-wrap'] = array(
      '#tree' => TRUE,
      '#type' => 'container',
      '#attributes' => array(
        'class' => array(
          'new-relation-wrapper',
        ),
      ),
    );

    $relation_id = 'new-relation-' . str_replace('_', '-', $relation_name);

    $form[$relation_name]['new-wrap']['new'] = array(
      '#type' => 'container',
      '#attributes' => array(
        'id' => $relation_id,
        'class' => array(
          'new-relation-container',
        ),
      ),
    );

    $form[$relation_name]['new-wrap']['new']['item'] = array(
      '#title' => t('New relation'),
      '#type' => 'textfield',
      '#description' => t("Search for content to create a relation or create new content."),
      '#autocomplete_path' => 'node/futurium_links/autocomplete/' . $relation_name . '/' . $node->nid,
      '#ajax' => array(
        'event' => 'autocompleteHidden',
        'callback' => "_futurium_links_show_preview",
      ),
    );

    $form['preview_view_mode'] = array(
      '#type' => 'hidden',
      '#value' => $settings['preview_view_mode'],
    );

    $form[$relation_name]['new-wrap']['new']['preview'] = array(
      '#markup' => '<div class="preview"></div>',
    );

    $form[$relation_name]['new']['new-wrap']['link'] = array(
      '#value' => "Link",
      '#type' => 'submit',
    );
  }

  _futurium_linker_add_autocomplete_js($form);

  return $form;
}

/**
 * Submit function.
 */
function futurium_links_multiple_boxes_form_submit($form, $form_state) {
  foreach ($form_state['input'] as $key => $value) {
    if (is_array($value) && !empty($value)) {
      $item = $value['new-wrap']['new']['item'];
      $target = _futurium_links_parse_result($item);
      if (!empty($target)) {
        _futurium_links_link_nodes($form_state['input']['origin'], $target, $key, 'insert');
      }
    }
  }
}

/***
 *     ██████╗ █████╗ ██╗     ██╗     ██████╗  █████╗  ██████╗██╗  ██╗███████╗
 *    ██╔════╝██╔══██╗██║     ██║     ██╔══██╗██╔══██╗██╔════╝██║ ██╔╝██╔════╝
 *    ██║     ███████║██║     ██║     ██████╔╝███████║██║     █████╔╝ ███████╗
 *    ██║     ██╔══██║██║     ██║     ██╔══██╗██╔══██║██║     ██╔═██╗ ╚════██║
 *    ╚██████╗██║  ██║███████╗███████╗██████╔╝██║  ██║╚██████╗██║  ██╗███████║
 *     ╚═════╝╚═╝  ╚═╝╚══════╝╚══════╝╚═════╝ ╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝╚══════╝
 *
 */

/**
 * Ajax callback to show preview.
 */
function _futurium_links_show_preview($form, &$form_state) {
  $form_class = $form_state['input']['form-class'];

  if (strpos($form_state['triggering_element']['#name'], '[item]')) {
    $target_relation = str_replace('_', '-', $form_state['triggering_element']['#name']);
    $target_relation = str_replace('[', '-', $target_relation);
    $target_relation = str_replace(']', '', $target_relation);
    $wrapper = '#linker' . $form_class . ' .form-item-' . $target_relation . ' + ';
  }
  else {
    $wrapper = '#linker' . $form_class;
    $commands[] = ajax_command_invoke($wrapper . ' .button-wrap', 'show');
  }

  $target_nid = _futurium_links_parse_result($form_state['triggering_element']['#value']);

  if ($target_nid !== FALSE) {
    $n = node_load($target_nid);
    $view_mode = $form_state['input']['preview_view_mode'];
    $markup = node_view($n, $view_mode);
    $commands[] = ajax_command_replace($wrapper . ' .preview', '<div class="preview">' . drupal_render($markup) . '</div>');
  }
  else {
    $commands[] = ajax_command_remove($wrapper . ' .preview .node');
  }
  return array('#type' => 'ajax', '#commands' => $commands);
}

/**
 * Callback for when radio changes.
 */
function _futurium_links_radio_changed($form, &$form_state) {
  $trigger = $form_state['triggering_element'];
  $type = $trigger['#value'];

  unset($form_state['input']['new']['new-wrapper']['search'], $form_state['values']['new']['new-wrapper']['search']);

  $origin_nid = $form_state['input']['origin'];
  $form['new']['new-wrapper']['search']['#autocomplete_path'] = 'node/futurium_links/autocomplete/' . $type . '/' . $origin_nid;
  $new_autocomplete = form_builder($form['#id'], $form['new']['new-wrapper']['search'], $form_state);

  $commands[] = ajax_command_html('#linker .feedback', '');

  $commands[] = ajax_command_replace('#search-box-wrapper .form-autocomplete', render($new_autocomplete));
  $commands[] = ajax_command_invoke('#search-box-wrapper', 'show');

  $commands[] = ajax_command_html('#linker #search-box-wrapper .preview', '<div class="preview"></div>');
  $commands[] = ajax_command_html('#linker #search-box-wrapper .feedback', '<div class="temporary-messages">' . theme('status_messages') . '</div>');

  return array('#type' => 'ajax', '#commands' => $commands);
}

/**
 * Callback to create the link.
 */
function _futurium_links_link($form, $form_state) {

  ctools_include('ajax');
  ctools_add_js('ajax-responder');

  $form_class = $form_state['input']['form-class'];
  $origin_nid = $form_state['input']['origin'];
  $target_nid = _futurium_links_parse_result($form_state['input']['new']['new-wrapper']['search']);

  switch ($form_state['input']['form-class']) {
    case '.single-form':
      $relation_type = _futurium_links_parse_relation($form_state['input']['new']['new-wrapper']['search']);
      break;

    case '.radios-form':
      $relation_type = $form_state['input']['new']['link_type'];
      break;

  }

  $result = _futurium_links_link_nodes($origin_nid, $target_nid, $relation_type, 'message');

  drupal_set_message($result['message'], $result['type']);

  $commands[] = ajax_command_invoke('#linker' . $form_class . ' input[name*="search"]', 'val', array(""));
  $commands[] = ajax_command_replace('#linker' . $form_class . ' .preview', '<div class="preview"></div>');

  $path = 'node/' . $origin_nid;
  $commands[] = ctools_ajax_command_redirect($path);

  return array('#type' => 'ajax', '#commands' => $commands);
}

/**
 * Helper to add #attached js file.
 */
function _futurium_linker_add_autocomplete_js(&$form) {

  $form['#attached'] = array(
    'js' => array(
      drupal_get_path('module', 'futurium_links') . '/futurium_links.js' => array(
        'type' => 'file',
        'scope' => 'footer',
        'weight' => 100,
      ),
    ),
  );

}

