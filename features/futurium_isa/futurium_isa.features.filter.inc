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

  // Exported format: Full.
  $formats['full'] = (object) array(
    'format' => 'full',
    'name' => 'Full',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'opengraph_filter' => array(
        'settings' => array(
          'opengraph_filter_num' => 1,
          'opengraph_filter_strip' => 1,
        ),
        'weight' => 1,
        'status' => 1,
      ),
      'filter_url' => array(
        'weight' => 2,
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

  // Exported format: NoWysiwig.
  $formats['simple_wysiwig'] = (object) array(
    'format' => 'simple_wysiwig',
    'name' => 'Simple Wysiwig',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'opengraph_filter' => array(
        'settings' => array(
          'opengraph_filter_num' => 1,
          'opengraph_filter_strip' => 1,
        ),
        'weight' => 1,
        'status' => 1,
      ),
      'media_filter' => array(
        'status' => 1,
        'weight' => 2,
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
      'opengraph_filter' => array(
        'settings' => array(
          'opengraph_filter_num' => 1,
          'opengraph_filter_strip' => 1,
        ),
        'weight' => 1,
        'status' => 1,
      ),
      'filter_autop' => array(
        'weight' => 2,
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
