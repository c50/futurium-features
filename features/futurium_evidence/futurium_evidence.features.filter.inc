<?php
/**
 * @file
 * futurium_evidence.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function futurium_evidence_filter_default_formats() {
  $formats = array();

  // Exported format: Wisywig.
  $formats['wysiwyg'] = (object) array(
    'format' => 'wysiwyg',
    'name' => 'Wisywig',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <h4> <h5> <h6> <p> <br> ',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'video_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
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
