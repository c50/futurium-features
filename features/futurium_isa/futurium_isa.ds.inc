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
  $ds_fieldsetting->id = 'comment|comment_node_event_d4eu|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_event_d4eu';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_post_date_day_fullmonth_year',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_picture_media_thumbnail_small',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'comment_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['comment|comment_node_event_d4eu|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_ideas|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_ideas';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_post_date_day_fullmonth_year',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_picture_media_thumbnail_small',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'comment_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['comment|comment_node_ideas|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_d4eu|node_header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_d4eu';
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
    'field_event_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
    'field_date_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
  );
  $export['node|event_d4eu|node_header'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_d4eu|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_d4eu';
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
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Learn more about this event',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'more-link',
        ),
      ),
    ),
    'field_event_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
    'field_date_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
  );
  $export['node|event_d4eu|teaser'] = $ds_fieldsetting;

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
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '49',
      'label' => 'hidden',
      'format' => 'ds_post_date_day_fullmonth_year',
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
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_day_fullmonth_year',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
    'field_ideas' => array(
      'weight' => '3',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|ideas|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_header';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_header';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'wrapper' => 'h1',
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_user_picture_normal',
    ),
    'field_biography' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['user|user|user_header'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function futurium_isa_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_event_d4eu|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_event_d4eu';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_author_date',
        1 => 'comment_body',
        2 => 'links',
        3 => 'ds_user_picture',
        4 => 'author',
        5 => 'post_date',
      ),
    ),
    'fields' => array(
      'group_wrapper_author_date' => 'ds_content',
      'comment_body' => 'ds_content',
      'links' => 'ds_content',
      'ds_user_picture' => 'ds_content',
      'author' => 'ds_content',
      'post_date' => 'ds_content',
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
  $export['comment|comment_node_event_d4eu|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_ideas|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_ideas';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_author_date',
        1 => 'comment_body',
        2 => 'links',
        3 => 'ds_user_picture',
        4 => 'author',
        5 => 'post_date',
      ),
    ),
    'fields' => array(
      'group_wrapper_author_date' => 'ds_content',
      'comment_body' => 'ds_content',
      'links' => 'ds_content',
      'ds_user_picture' => 'ds_content',
      'author' => 'ds_content',
      'post_date' => 'ds_content',
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
  $export['comment|comment_node_ideas|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_d4eu|node_header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_d4eu';
  $ds_layout->view_mode = 'node_header';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_date_time',
        2 => 'addressfield_city',
        3 => 'group_date_vote_comment',
        4 => 'attending',
        5 => 'field_event_description',
        6 => 'group_buttons',
        7 => 'flag_attending',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_date_time' => 'ds_content',
      'addressfield_city' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'attending' => 'ds_content',
      'field_event_description' => 'ds_content',
      'group_buttons' => 'ds_content',
      'flag_attending' => 'ds_content',
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
  $export['node|event_d4eu|node_header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_d4eu|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_d4eu';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_date_time',
        2 => 'addressfield_city',
        3 => 'group_date_vote_comment',
        4 => 'attending',
        5 => 'field_event_description',
        6 => 'group_buttons',
        7 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_date_time' => 'ds_content',
      'addressfield_city' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'attending' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|event_d4eu|teaser'] = $ds_layout;

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
        0 => 'title',
        1 => 'author',
        2 => 'group_date_vote_comment',
        3 => 'field_ideas',
        4 => 'group_buttons',
        5 => 'flag_like',
        6 => 'post_date',
        7 => 'like',
        8 => 'comment_count',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'author' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'field_ideas' => 'ds_content',
      'group_buttons' => 'ds_content',
      'flag_like' => 'ds_content',
      'post_date' => 'ds_content',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_header';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_header';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'middle' => array(
        1 => 'follow',
        2 => 'name',
        3 => 'edit',
        4 => 'field_biography',
        5 => 'group_shortcut_buttons',
        6 => 'logout',
      ),
      'right' => array(
        7 => 'group_user_fields',
        8 => 'field_social_links',
        9 => 'field_profession',
        10 => 'field_education',
        11 => 'user_city',
        12 => 'field_gender',
        13 => 'field_age',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'follow' => 'middle',
      'name' => 'middle',
      'edit' => 'middle',
      'field_biography' => 'middle',
      'group_shortcut_buttons' => 'middle',
      'logout' => 'middle',
      'group_user_fields' => 'right',
      'field_social_links' => 'right',
      'field_profession' => 'right',
      'field_education' => 'right',
      'user_city' => 'right',
      'field_gender' => 'right',
      'field_age' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['user|user|user_header'] = $ds_layout;

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

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_header';
  $ds_view_mode->label = 'User Header';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_header'] = $ds_view_mode;

  return $export;
}
