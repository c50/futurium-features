<?php
/**
 * @file
 * futurium_isa.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function futurium_isa_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ideas|node_header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ideas';
  $ds_fieldsetting->view_mode = 'node_header';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ideas' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|ideas|node_header'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ideas|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ideas';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'more-link',
        ),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_day_and_month',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
    'field_ideas' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|ideas|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function futurium_isa_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ideas|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ideas';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ideas',
        1 => 'field_tags',
        2 => 'field_related_documents',
        3 => 'group_related_content',
        4 => 'field_related_polls',
        5 => 'field_related_videos',
        6 => 'og_group_ref',
        7 => 'field_related_events',
        8 => 'group_content_access',
        9 => 'flag_like',
        10 => 'field_evidences',
        11 => 'field_linker_evidences',
        12 => 'field_linker_related',
        13 => 'like',
        14 => 'comment_count',
      ),
    ),
    'fields' => array(
      'field_ideas' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_related_documents' => 'ds_content',
      'group_related_content' => 'ds_content',
      'field_related_polls' => 'ds_content',
      'field_related_videos' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'field_related_events' => 'ds_content',
      'group_content_access' => 'ds_content',
      'flag_like' => 'ds_content',
      'field_evidences' => 'ds_content',
      'field_linker_evidences' => 'ds_content',
      'field_linker_related' => 'ds_content',
      'like' => 'ds_content',
      'comment_count' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ideas|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ideas|node_header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ideas';
  $ds_layout->view_mode = 'node_header';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'field_ideas',
        2 => 'title',
        3 => 'group_date_vote_comment',
        4 => 'group_buttons',
        5 => 'flag_like',
        6 => 'like',
        7 => 'comment_count',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'field_ideas' => 'ds_content',
      'title' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'group_buttons' => 'ds_content',
      'flag_like' => 'ds_content',
      'like' => 'ds_content',
      'comment_count' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ideas|node_header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ideas|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ideas';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'title',
        2 => 'author',
        3 => 'like',
        4 => 'group_date_vote_comment',
        5 => 'comment_count',
        6 => 'field_ideas',
        7 => 'group_buttons',
        8 => 'node_link',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'title' => 'ds_content',
      'author' => 'ds_content',
      'like' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'comment_count' => 'ds_content',
      'field_ideas' => 'ds_content',
      'group_buttons' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ideas|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function futurium_isa_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'node_header';
  $ds_view_mode->label = 'Node Header';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['node_header'] = $ds_view_mode;

  return $export;
}
