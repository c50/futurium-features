<?php
/**
 * @file
 * futurium_d4eu.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function futurium_d4eu_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'endpoints'.
  $field_bases['endpoints'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'endpoints',
    'indexes' => array(
      'entity_id' => array(
        0 => 'entity_id',
      ),
      'entity_type' => array(
        0 => 'entity_type',
      ),
      'r_index' => array(
        0 => 'r_index',
      ),
    ),
    'locked' => 1,
    'module' => 'relation_endpoint',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'relation_endpoint',
  );

  // Exported field_base: 'field_important_or_conclusion'.
  $field_bases['field_important_or_conclusion'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_important_or_conclusion',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Important',
        1 => 'Conclusion',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_issue'.
  $field_bases['field_issue'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_issue',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_organisation'.
  $field_bases['field_organisation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_rate_comment'.
  $field_bases['field_rate_comment'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rate_comment',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  // Exported field_base: 'field_rate_ideas'.
  $field_bases['field_rate_ideas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rate_ideas',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  // Exported field_base: 'field_rate_issue'.
  $field_bases['field_rate_issue'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rate_issue',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  // Exported field_base: 'field_register_url'.
  $field_bases['field_register_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_register_url',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
