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

  // Exported field_instance: 'node-event_d4eu-field_relation_graph'.
  $field_instances['node-event_d4eu-field_relation_graph'] = array(
    'bundle' => 'event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 4,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-evidence-field_relation_graph'.
  $field_instances['node-evidence-field_relation_graph'] = array(
    'bundle' => 'evidence',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 5,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-future-field_relation_graph'.
  $field_instances['node-future-field_relation_graph'] = array(
    'bundle' => 'future',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 7,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ideas-field_relation_graph'.
  $field_instances['node-ideas-field_relation_graph'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 10,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 7,
    ),
  );

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
      'entity_translation_sync' => FALSE,
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
  t('Relation graph');

  return $field_instances;
}
