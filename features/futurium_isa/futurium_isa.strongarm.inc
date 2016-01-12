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
  $strongarm->name = 'date_format_day_fullmonth_year';
  $strongarm->value = 'j F Y';
  $export['date_format_day_fullmonth_year'] = $strongarm;

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
  $strongarm->value = '';
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
          'teaser' => array(
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
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
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
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_tags';
  $strongarm->value = 'vote, desirability, feasibility, impact, likelihood';
  $export['fivestar_tags'] = $strongarm;

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
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    0 => (object) array(
      'name' => 'rate_fivestar',
      'tag' => 'vote',
      'title' => 'rate_fivestar',
      'node_types' => array(),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '0',
          1 => '1',
        ),
        1 => array(
          0 => '25',
          1 => '2',
        ),
        2 => array(
          0 => '50',
          1 => '3',
        ),
        3 => array(
          0 => '75',
          1 => '4',
        ),
        4 => array(
          0 => '100',
          1 => '5',
        ),
      ),
      'template' => 'fivestar',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        2 => '2',
        3 => 0,
        1 => 0,
        4 => 0,
        5 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_fivestar',
      'css' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.css',
      'js' => 'sites/all/modules/contrib/rate/templates/fivestar/fivestar.js',
      'translate' => TRUE,
    ),
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
    4 => (object) array(
      'name' => 'rateme4',
      'tag' => 'likelihood',
      'title' => 'Likelihood',
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

  return $export;
}
