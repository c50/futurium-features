<?php
/**
 * @file
 * futurium_relations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_relations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_relations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
