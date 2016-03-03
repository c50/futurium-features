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
  $formats['simple_wysiwig'] = (object) array(
    'format' => 'simple_wysiwig',
    'name' => 'Simple Wysiwig',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full.
  $formats['full'] = (object) array(
    'format' => 'full',
    'name' => 'Full',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Simple Text.
  $formats['simple_text'] = (object) array(
    'format' => 'simple_text',
    'name' => 'Simple Text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
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
