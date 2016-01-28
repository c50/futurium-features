<?php
/**
 * @file
 * tests.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tests_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_activity_index'.
  $field_bases['field_activity_index'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_activity_index',
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'locked' => 0,
    'module' => 'radioactivity',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'radioactivity',
  );

  return $field_bases;
}
