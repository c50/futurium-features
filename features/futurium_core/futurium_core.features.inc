<?php
/**
 * @file
 * futurium_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function futurium_core_node_info() {
  $items = array(
    'event_d4eu' => array(
      'base'        => 'node_content',
      'description' => 'Create an event here',
      'has_title'   => 1,
      'name'        => 'Event',
      'title_label' => 'Title',
      'help'        => '',
    ),
    'ideas'      => array(
      'base'        => 'node_content',
      'description' => 'Ideas and experience.',
      'has_title'   => 1,
      'name'        => 'Ideas',
      'title_label' => 'Title',
      'help'        => '',
    ),
    'video_d4eu' => array(
      'base'        => 'node_content',
      'description' => 'Post a video here',
      'has_title'   => 1,
      'name'        => 'Video',
      'title_label' => 'Title',
      'help'        => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}