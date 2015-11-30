<?php
/**
 * @file
 * futurium_d4eu.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function futurium_d4eu_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|ideas|default';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '3',
    'children' => array(
      0 => 'field_related_documents',
      1 => 'field_related_events',
      2 => 'field_related_polls',
      3 => 'field_related_videos',
      4 => 'related_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-related-content field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|ideas|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|ideas|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '9',
    'children' => array(
      0 => 'field_related_documents',
      1 => 'field_related_events',
      2 => 'field_related_polls',
      3 => 'field_related_videos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|ideas|form'] = $field_group;

  return $export;
}
