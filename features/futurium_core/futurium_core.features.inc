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
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => 'Create an event.',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ideas' => array(
      'name' => t('Ideas'),
      'base' => 'node_content',
      'description' => 'Ideas and experience.',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_d4eu' => array(
      'name' => t('Videos'),
      'base' => 'node_content',
      'description' => t('Post a video.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
