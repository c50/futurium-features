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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
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
      'weight' => 99,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
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
      'weight' => 99,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
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
      'weight' => 99,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
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
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-slideshow_item-field_link'.
  $field_instances['node-slideshow_item-field_link'] = array(
    'bundle' => 'slideshow_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
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
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-slideshow_item-field_slideshow_image'.
  $field_instances['node-slideshow_item-field_slideshow_image'] = array(
    'bundle' => 'slideshow_item',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_slideshow_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'slideshow',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1170x350',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 1,
        'croparea' => '1170x350',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '1170x350',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 1,
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
  t('Image');
  t('Link');
  t('Relation graph');

  return $field_instances;
}
