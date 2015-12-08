<?php
/**
 * @file
 * futurium_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function futurium_groups_node_info() {
  $items = array(
    'futurium_group' => array(
      'name' => t('Futurium Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Group Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
