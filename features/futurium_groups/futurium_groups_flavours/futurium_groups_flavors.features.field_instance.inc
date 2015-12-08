<?php
/**
 * @file
 * asagsags.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function futurium_groups_flavors_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-futurium_group-field_css_class'
  $field_instances['node-futurium_group-futurium_group_field_css_class'] = array(
    'bundle' => 'futurium_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_futurium_group_css_class',
    'label' => 'CSS Class',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
        'treeable' => 0,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-futurium_group-field_group_path'
  $field_instances['node-futurium_group-field_futurium_group_path'] = array(
    'bundle' => 'futurium_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_futurium_group_path',
    'label' => 'Group path',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
        'treeable' => 0,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CSS Class');
  t('Group path');

  return $field_instances;
}
