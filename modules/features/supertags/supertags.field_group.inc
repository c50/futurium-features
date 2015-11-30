<?php
/**
 * @file
 * supertags.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function supertags_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links_group_fields|field_collection_item|field_links|form';
  $field_group->group_name = 'group_links_group_fields';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_link_type',
      1 => 'field_call_to_action',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-links-group-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_links_group_fields|field_collection_item|field_links|form'] = $field_group;

  return $export;
}
