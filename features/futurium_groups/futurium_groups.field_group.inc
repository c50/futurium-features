<?php
/**
 * @file
 * futurium_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function futurium_groups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_og_group_settings|node|futurium_group|form';
  $field_group->group_name = 'group_og_group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'futurium_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '2',
    'children' => array(
      0 => 'group_group',
      1 => 'og_roles_permissions',
      2 => 'group_access',
      3 => 'group_register',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_og_group_settings|node|futurium_group|form'] = $field_group;

  return $export;
}
