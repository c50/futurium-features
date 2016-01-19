<?php
/**
 * @file
 * futurium_groups.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function futurium_groups_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|futurium_group|node_header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'futurium_group';
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
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'member_count' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'futures_count' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ideas_count' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_group_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|futurium_group|node_header'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|futurium_group|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'futurium_group';
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
      'weight' => '10',
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
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'member_count' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'futures_count' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'ideas_count' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_group_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|futurium_group|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|futurium_group|teaser_w_pic';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'futurium_group';
  $ds_fieldsetting->view_mode = 'teaser_w_pic';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => 1,
        'wrapper' => 'h2',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more-link',
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'member_count' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'futures_count' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'ideas_count' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_group_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
    'field_leading_picture_d4eu' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|futurium_group|teaser_w_pic'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function futurium_groups_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|futurium_group|node_header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'futurium_group';
  $ds_layout->view_mode = 'node_header';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'member_count',
        2 => 'futures_count',
        3 => 'author',
        4 => 'group_date_vote_comment',
        5 => 'ideas_count',
        6 => 'field_group_description',
        7 => 'group_buttons',
        8 => 'edit_group',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'member_count' => 'ds_content',
      'futures_count' => 'ds_content',
      'author' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'ideas_count' => 'ds_content',
      'field_group_description' => 'ds_content',
      'group_buttons' => 'ds_content',
      'edit_group' => 'ds_content',
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
  $export['node|futurium_group|node_header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|futurium_group|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'futurium_group';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'member_count',
        2 => 'futures_count',
        3 => 'author',
        4 => 'group_date_vote_comment',
        5 => 'ideas_count',
        6 => 'field_group_description',
        7 => 'group_buttons',
        8 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'member_count' => 'ds_content',
      'futures_count' => 'ds_content',
      'author' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'ideas_count' => 'ds_content',
      'field_group_description' => 'ds_content',
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
  $export['node|futurium_group|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|futurium_group|teaser_w_pic';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'futurium_group';
  $ds_layout->view_mode = 'teaser_w_pic';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'node_link',
        2 => 'member_count',
        3 => 'futures_count',
        4 => 'title',
        5 => 'ideas_count',
        6 => 'author',
        7 => 'group_date_vote_comment',
        8 => 'field_group_description',
        9 => 'group_buttons',
      ),
      'left' => array(
        1 => 'field_leading_picture_d4eu',
      ),
    ),
    'fields' => array(
      'node_link' => 'right',
      'field_leading_picture_d4eu' => 'left',
      'member_count' => 'right',
      'futures_count' => 'right',
      'title' => 'right',
      'ideas_count' => 'right',
      'author' => 'right',
      'group_date_vote_comment' => 'right',
      'field_group_description' => 'right',
      'group_buttons' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|futurium_group|teaser_w_pic'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function futurium_groups_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_w_pic';
  $ds_view_mode->label = 'Teaser w/ Pic';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_w_pic'] = $ds_view_mode;

  return $export;
}
