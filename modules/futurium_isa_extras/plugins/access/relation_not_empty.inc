<?php
/**
 * @file
 * Ctools access plugin for checking if a view returns results.
 */

/**
 * Plugins are described by creating a $plugin array which will
 * be used by the system that includes the file.
 */
$plugin = array(
  'title' => t('Relation: Has relations'),
  'description' => t('Controls access by checking if the node has relations'),
  'callback' => 'futurium_isa_extras_has_relations_access_check',
  'default' => array('negate' => 0),
  'settings form' => 'futurium_isa_extras_has_relations_settings',
  'settings form submit' => 'futurium_isa_extras_has_relations_settings_submit',
  'summary' => 'futurium_isa_extras_has_relations_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function futurium_isa_extras_has_relations_access_check($conf, $context) {
  $node = $context->data;

  $field_items = field_view_field('node', $node, 'field_relation_graph');
  if (isset($field_items['#items'])) {
    return TRUE;
  }

  return FALSE;
}

/**
 * Settings form for the 'view_access' access plugin.
 */
function futurium_isa_extras_has_relations_settings($form, &$form_state, $conf) {
  return $form;
}

/**
 * Custom submit handler to save the pretty label in the conf array
 */
function futurium_isa_extras_has_relations_submit($form, &$form_state) {
}

/**
 * Provide a summary description
 */
function futurium_isa_extras_has_relations_summary($conf, $context) {
  return t('Node has relations');
}
