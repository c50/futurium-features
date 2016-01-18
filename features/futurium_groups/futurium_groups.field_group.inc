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
  $field_group->identifier = 'group_buttons|node|futurium_group|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'futurium_group';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '5',
    'children' => array(
      0 => 'edit_group',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_buttons|node|futurium_group|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|futurium_group|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'futurium_group';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 0,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-buttons field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_buttons|node|futurium_group|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|futurium_group|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'futurium_group';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '3',
    'children' => array(
      0 => 'member_count',
      1 => 'futures_count',
      2 => 'ideas_count',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-date-vote-comment field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_vote_comment|node|futurium_group|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|futurium_group|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'futurium_group';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'member_count',
      1 => 'futures_count',
      2 => 'ideas_count',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 0,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-date-vote-comment field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_date_vote_comment|node|futurium_group|teaser'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'group_access',
      1 => 'group_group',
      2 => 'group_register',
      3 => 'og_roles_permissions',
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
