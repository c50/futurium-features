<?php
/**
 * @file
 * futurium_d4eu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_d4eu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_d4eu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/*
 * Implements hook_flag_default_flags().
 */
function futurium_d4eu_flag_default_flags() {
  $flags = array();
  // Exported flag: "subscription_node_flag".
  $flags['subscription_flag'] = array(
    'entity_type' => 'node',
    'title' => 'subscription_node_flag',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'mini_teaser' => 0,
      'print' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'futurium_d4eu',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "subscription_flavor_flag".
  $flags['subscription_flavour_flag'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'subscription_flavor_flag',
    'global' => 0,
    'types' => array(
      0 => 'flavors',
    ),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 3,
    'module' => 'futurium_d4eu',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function futurium_d4eu_image_default_styles() {
  $styles = array();

  // Exported image style: mini_teaser_thumbnail.
  $styles['mini_teaser_thumbnail'] = array(
    'label' => 'Mini teaser thumbnail (250x)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_invite_type().
 */
function futurium_d4eu_default_invite_type() {
  $items = array();
  $items['invite_by_email'] = entity_import('invite_type', '{
    "type" : "invite_by_email",
    "label" : "Invite by e-mail",
    "weight" : 0,
    "argument_keys" : [],
    "argument" : [],
    "invite_sending_controller" : { "invite_by_email" : "invite_by_email" },
    "description" : "Invitation by e-mail.",
    "data" : { "invite_by_email" : {
        "use_default" : true,
        "message_editable" : false,
        "replace_tokens" : false
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function futurium_d4eu_node_info() {
  $items = array(
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('Post an issue here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
