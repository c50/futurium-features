<?php
/**
 * @file
 * tests.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tests_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_activity_index'.
  $field_instances['user-user-field_activity_index'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 0,
        'radioactivity_timestamp' => 1453823435,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 13,
      ),
      'user_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_activity_index',
    'label' => 'Activity Index',
    'required' => FALSE,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'profile' => 'user_decay',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 17,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity Index');

  return $field_instances;
}
