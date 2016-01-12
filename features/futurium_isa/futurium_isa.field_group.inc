<?php
/**
 * @file
 * futurium_isa.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function futurium_isa_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|event_d4eu|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_d4eu';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'flag_attending',
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
  $export['group_buttons|node|event_d4eu|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|event_d4eu|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_d4eu';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'flag_attending',
      1 => 'node_link',
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
  $export['group_buttons|node|event_d4eu|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|ideas|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'flag_like',
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
  $export['group_buttons|node|ideas|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|ideas|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
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
  $export['group_buttons|node|ideas|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|event_d4eu|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_d4eu';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'addressfield_city',
      1 => 'attending',
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
  $export['group_date_vote_comment|node|event_d4eu|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|event_d4eu|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_d4eu';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'addressfield_city',
      1 => 'attending',
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
  $export['group_date_vote_comment|node|event_d4eu|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|ideas|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'node_header';
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
  $export['group_date_vote_comment|node|ideas|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|ideas|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
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
  $export['group_date_vote_comment|node|ideas|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => 0,
    'children' => array(
      0 => 'title_field',
      1 => 'title',
      2 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $export['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_metadata|node|page|form';
  $field_group->group_name = 'group_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => 10,
    'children' => array(
      0 => 'field_tags',
      1 => 'language',
      2 => 'og_group_ref',
      3 => 'group_content_access',
      4 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-metadata field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $export['group_page_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shortcut_buttons|user|user|user_header';
  $field_group->group_name = 'group_shortcut_buttons';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shortcuts',
    'weight' => '3',
    'children' => array(
      0 => 'follow',
      1 => 'edit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shortcuts',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-shortcut-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shortcut_buttons|user|user|user_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_fields|user|user|user_header';
  $field_group->group_name = 'group_user_fields';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '4',
    'children' => array(
      0 => 'field_age',
      1 => 'field_education',
      2 => 'field_gender',
      3 => 'field_location',
      4 => 'field_profession',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Fields',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-fields field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_fields|user|user|user_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_author_date|comment|comment_node_event_d4eu|default';
  $field_group->group_name = 'group_wrapper_author_date';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_event_d4eu';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-author-date',
    'weight' => '0',
    'children' => array(
      0 => 'post_date',
      1 => 'author',
      2 => 'ds_user_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-author-date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-author-date field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_author_date|comment|comment_node_event_d4eu|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_author_date|comment|comment_node_ideas|default';
  $field_group->group_name = 'group_wrapper_author_date';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_ideas';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-author-date',
    'weight' => '0',
    'children' => array(
      0 => 'post_date',
      1 => 'author',
      2 => 'ds_user_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-author-date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-author-date field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_author_date|comment|comment_node_ideas|default'] = $field_group;

  return $export;
}
