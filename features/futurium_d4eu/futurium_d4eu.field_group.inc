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
  $field_group->identifier = 'group_body|node|event_d4eu|default';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_d4eu';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_leading_picture_d4eu',
      2 => 'field_registration_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'id' => 'event-body',
        'classes' => 'group-body field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_body|node|event_d4eu|default'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue|node|event_d4eu|default';
  $field_group->group_name = 'group_venue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_d4eu';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Venue',
    'weight' => '0',
    'children' => array(
      0 => 'field_date_time',
      1 => 'field_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Venue',
      'instance_settings' => array(
        'id' => 'event-venue',
        'classes' => 'group-venue field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_venue|node|event_d4eu|default'] = $field_group;

  return $export;
}
