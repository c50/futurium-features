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
    'event_d4eu' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Create an event here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('Post an issue here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_d4eu' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Post a video here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
