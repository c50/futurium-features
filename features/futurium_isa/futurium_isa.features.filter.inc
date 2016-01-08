<?php
/**
 * @file
 * futurium_isa.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function futurium_isa_filter_default_formats() {
  $formats = array();

  // Exported format: NoWysiwig.
  $formats['nowysiwig'] = (object) array(
    'format' => 'nowysiwig',
    'name' => 'NoWysiwig',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'toolbox_sanitize' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
