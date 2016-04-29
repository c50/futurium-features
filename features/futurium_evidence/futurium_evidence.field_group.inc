<?php
/**
 * @file
 * futurium_evidence.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function futurium_evidence_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|evidence|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evidence';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(),
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
  $field_groups['group_buttons|node|evidence|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|evidence|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evidence';
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
  $field_groups['group_buttons|node|evidence|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|evidence|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evidence';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date_vote_comment|node|evidence|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|evidence|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evidence';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'post_date',
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
  $field_groups['group_date_vote_comment|node|evidence|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('group-buttons');
  t('wrapper-date-vote-comment');

  return $field_groups;
}
