<?php
/**
 * @file
 * futurium_futures.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function futurium_futures_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|future|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'future';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '5',
    'children' => array(
      0 => 'flag_like',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_buttons|node|future|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|future|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'future';
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
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_buttons|node|future|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|future|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'future';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '3',
    'children' => array(
      0 => 'like',
      1 => 'comment_count',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_vote_comment|node|future|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|future|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'future';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'like',
      1 => 'comment_count',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_vote_comment|node|future|teaser'] = $field_group;

  return $export;
}
