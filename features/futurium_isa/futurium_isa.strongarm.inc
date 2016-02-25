<?php
/**
 * @file
 * futurium_isa.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function futurium_isa_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event_d4eu';
  $strongarm->value = '0';
  $export['comment_anonymous_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ideas';
  $strongarm->value = '0';
  $export['comment_anonymous_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event_d4eu';
  $strongarm->value = 1;
  $export['comment_default_mode_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ideas';
  $strongarm->value = 1;
  $export['comment_default_mode_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event_d4eu';
  $strongarm->value = '10';
  $export['comment_default_per_page_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ideas';
  $strongarm->value = '10';
  $export['comment_default_per_page_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event_d4eu';
  $strongarm->value = '2';
  $export['comment_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event_d4eu';
  $strongarm->value = 1;
  $export['comment_form_location_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ideas';
  $strongarm->value = 1;
  $export['comment_form_location_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ideas';
  $strongarm->value = '2';
  $export['comment_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event_d4eu';
  $strongarm->value = '0';
  $export['comment_preview_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ideas';
  $strongarm->value = '0';
  $export['comment_preview_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event_d4eu';
  $strongarm->value = 0;
  $export['comment_subject_field_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ideas';
  $strongarm->value = 0;
  $export['comment_subject_field_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_day_fullmonth_year';
  $strongarm->value = 'j F Y';
  $export['date_format_day_fullmonth_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_fullmonth_year';
  $strongarm->value = 'F Y';
  $export['date_format_fullmonth_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_fields';
  $strongarm->value = 'intro
date
more-link
location
attending';
  $export['ds_classes_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_regions';
  $strongarm->value = 'col-xs-2 col-sm-2 col-md-2 col-lg-2|Bootstrap Two columns
col-xs-4 col-sm-4 col-md-4 col-lg-4|Bootstrap Four columns
col-xs-8 col-sm-8 col-md-8 col-lg-8|Bootstrap Eight columns
col-xs-10 col-sm-10 col-md-10 col-lg-10|Bootstrap Ten columns
row|Bootstrap Row
';
  $export['ds_classes_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra';
  $strongarm->value = 0;
  $export['ds_extras_fields_extra'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra_list';
  $strongarm->value = '';
  $export['ds_extras_fields_extra_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_permissions';
  $strongarm->value = 0;
  $export['ds_extras_field_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_flag';
  $strongarm->value = 0;
  $export['ds_extras_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hidden_region';
  $strongarm->value = 0;
  $export['ds_extras_hidden_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_sidebars';
  $strongarm->value = 0;
  $export['ds_extras_hide_page_sidebars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_title';
  $strongarm->value = 0;
  $export['ds_extras_hide_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_to_block';
  $strongarm->value = 0;
  $export['ds_extras_region_to_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_field';
  $strongarm->value = 0;
  $export['ds_extras_switch_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 0;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 0;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_event_d4eu';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_ideas';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__follow_user';
  $strongarm->value = array();
  $export['field_bundle_settings_flagging__follow_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event_d4eu';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'node_header' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'flag_attending' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'node_header' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'attending' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'node_header' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'addressfield_city' => array(
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_header' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'comment_count' => array(
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'node_header' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ideas';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'node_header' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => 6,
        ),
      ),
      'display' => array(
        'flag_like' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'node_header' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'like' => array(
          'default' => array(
            'weight' => '50',
            'visible' => TRUE,
          ),
          'node_header' => array(
            'weight' => '50',
            'visible' => TRUE,
          ),
        ),
        'comment_count' => array(
          'default' => array(
            'weight' => '51',
            'visible' => TRUE,
          ),
          'node_header' => array(
            'weight' => '51',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'user_header' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'account' => array(
          'weight' => '2',
        ),
        'timezone' => array(
          'weight' => '16',
        ),
        'picture' => array(
          'weight' => '15',
        ),
        'contact' => array(
          'weight' => '12',
        ),
        'locale' => array(
          'weight' => '13',
        ),
        'wysiwyg' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'user_header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'user_city' => array(
          'user_header' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
        ),
        'follow' => array(
          'user_header' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'edit' => array(
          'user_header' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'logout' => array(
          'user_header' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_tags';
  $strongarm->value = 'vote, desirability, feasibility, impact';
  $export['fivestar_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event_d4eu';
  $strongarm->value = '0';
  $export['language_content_type_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ideas';
  $strongarm->value = '0';
  $export['language_content_type_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event_d4eu';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ideas';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event_d4eu';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ideas';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event_d4eu';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'status',
  );
  $export['node_options_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ideas';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'status',
  );
  $export['node_options_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event_d4eu';
  $strongarm->value = '1';
  $export['node_preview_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ideas';
  $strongarm->value = '1';
  $export['node_preview_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event_d4eu';
  $strongarm->value = 1;
  $export['node_submitted_event_d4eu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ideas';
  $strongarm->value = 1;
  $export['node_submitted_ideas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pages_user_users_disabled';
  $strongarm->value = FALSE;
  $export['user_pages_user_users_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pages_user_user_login_disabled';
  $strongarm->value = FALSE;
  $export['user_pages_user_user_login_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pages_user_user_register_disabled';
  $strongarm->value = FALSE;
  $export['user_pages_user_user_register_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pages_user_user_password_disabled';
  $strongarm->value = FALSE;
  $export['user_pages_user_user_password_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'rateme',
      'tag' => 'desirability',
      'title' => 'Desirability',
      'node_types' => array(),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '20',
          1 => '1',
        ),
        1 => array(
          0 => '40',
          1 => '2',
        ),
        2 => array(
          0 => '60',
          1 => '3',
        ),
        3 => array(
          0 => '80',
          1 => '4',
        ),
        4 => array(
          0 => '100',
          1 => '5',
        ),
      ),
      'template' => 'fivestar',
      'node_display' => '0',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        4 => 0,
        1 => 0,
        2 => 0,
        5 => 0,
        6 => 0,
        3 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => FALSE,
      'value_type' => 'percent',
      'theme' => 'rate_template_fivestar',
      'css' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.css',
      'js' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.js',
      'translate' => TRUE,
    ),
    2 => (object) array(
      'name' => 'rateme2',
      'tag' => 'feasibility',
      'title' => 'Feasibility',
      'node_types' => array(),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '20',
          1 => '1',
        ),
        1 => array(
          0 => '40',
          1 => '2',
        ),
        2 => array(
          0 => '60',
          1 => '3',
        ),
        3 => array(
          0 => '80',
          1 => '4',
        ),
        4 => array(
          0 => '100',
          1 => '5',
        ),
      ),
      'template' => 'fivestar',
      'node_display' => '0',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        4 => 0,
        1 => 0,
        2 => 0,
        5 => 0,
        6 => 0,
        3 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => FALSE,
      'value_type' => 'percent',
      'theme' => 'rate_template_fivestar',
      'css' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.css',
      'js' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.js',
      'translate' => TRUE,
    ),
    3 => (object) array(
      'name' => 'rateme3',
      'tag' => 'impact',
      'title' => 'Impact',
      'node_types' => array(),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '20',
          1 => '1',
        ),
        1 => array(
          0 => '40',
          1 => '2',
        ),
        2 => array(
          0 => '60',
          1 => '3',
        ),
        3 => array(
          0 => '80',
          1 => '4',
        ),
        4 => array(
          0 => '100',
          1 => '5',
        ),
      ),
      'template' => 'fivestar',
      'node_display' => '0',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        4 => 0,
        1 => 0,
        2 => 0,
        5 => 0,
        6 => 0,
        3 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => FALSE,
      'value_type' => 'percent',
      'theme' => 'rate_template_fivestar',
      'css' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.css',
      'js' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.js',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialfield_services';
  $strongarm->value = array(
    'facebook' => array(
      'name' => 'Facebook',
      'icon' => 'icon-facebook',
      'validation_pattern' => '*facebook.com/*',
    ),
    'twitter' => array(
      'name' => 'Twitter',
      'icon' => 'icon-twitter',
      'validation_pattern' => '*twitter.com/*',
    ),
    'googleplus' => array(
      'name' => 'Google+',
      'icon' => 'icon-gplus',
      'validation_pattern' => '*plus.google.com/*',
    ),
    'linkedin' => array(
      'name' => 'LinkedIn',
      'icon' => 'icon-linkedin',
      'validation_pattern' => '*linkedin.com/*',
    ),
    'youtube' => array(
      'name' => 'YouTube',
      'icon' => 'icon-youtube',
      'validation_pattern' => '*youtube.com/*',
    ),
    'vimeo' => array(
      'name' => 'Vimeo',
      'icon' => 'icon-vimeo',
      'validation_pattern' => '*vimeo.com/*',
    ),
    'delicious' => array(
      'name' => 'Delicious',
      'icon' => 'icon-delicious',
      'validation_pattern' => '*delicious.com/*',
    ),
    'digg' => array(
      'name' => 'Digg',
      'icon' => 'icon-digg',
      'validation_pattern' => '*digg.com/*',
    ),
    'flickr' => array(
      'name' => 'Flickr',
      'icon' => 'icon-flickr',
      'validation_pattern' => '*flickr.com/*',
    ),
    'yahoo' => array(
      'name' => 'Yahoo!',
      'icon' => 'icon-yahoo',
      'validation_pattern' => '*yahoo.com/*',
    ),
    'myspace' => array(
      'name' => 'Myspace',
      'icon' => 'icon-myspace',
      'validation_pattern' => '*myspace.com/*',
    ),
    'pinterest' => array(
      'name' => 'Pinterest',
      'icon' => 'icon-pinterest',
      'validation_pattern' => '*pinterest.com/*',
    ),
    'reddit' => array(
      'name' => 'Reddit',
      'icon' => 'icon-reddit',
      'validation_pattern' => '*reddit.com/*',
    ),
    'slideshare' => array(
      'name' => 'Slideshare',
      'icon' => 'icon-slideshare',
      'validation_pattern' => '*slideshare.net/*',
    ),
    'stumbleupon' => array(
      'name' => 'Stumbleupon',
      'icon' => 'icon-stumbleupon',
      'validation_pattern' => '*stumbleupon.com/*',
    ),
  );
  $export['socialfield_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enabled_fields';
  $strongarm->value = array(
    'user:user:field_firstname' => 'user:user:field_firstname',
    'user:user:field_lastname' => 'user:user:field_lastname',
    'user:user:field_age' => 'user:user:field_age',
    'user:user:field_biography' => 'user:user:field_biography',
    'user:user:field_birthday' => 'user:user:field_birthday',
    'user:user:field_education' => 'user:user:field_education',
    'user:user:field_gender' => 'user:user:field_gender',
    'user:user:field_location' => 'user:user:field_location',
    'user:user:field_profession' => 'user:user:field_profession',
  );
  $export['pcp_enabled_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enable_user_picture';
  $strongarm->value = 0;
  $export['pcp_enable_user_picture'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_fields_open_option';
  $strongarm->value = '_self';
  $export['pcp_fields_open_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_fields_order';
  $strongarm->value = '0';
  $export['pcp_fields_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_hide_block_on_complete';
  $strongarm->value = 0;
  $export['pcp_hide_block_on_complete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_login_message';
  $strongarm->value = 'Your Profile is not complete. Filling out remaining fields will make it 100%. Now you\'ve reached [pcp-user:pcp-user]%.';
  $export['pcp_login_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_login_message_role';
  $strongarm->value = array(
    2 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  $export['pcp_login_message_role'] = $strongarm;

  return $export;
}
