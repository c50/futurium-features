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
