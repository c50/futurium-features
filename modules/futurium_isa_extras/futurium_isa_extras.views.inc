<?php
/**
 * @file
 * Views definitions for 'example'
 */

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function futurium_isa_extras_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'futurium_isa_extras'),
    ),
    'handlers' => array(
      'futurium_isa_extras_count_comments' => array(
        'parent' => 'views_handler_field',
      ),
      'futurium_isa_extras_sort_count_comments' => array(
        'parent' => 'views_handler_sort',
      ),
    ),
  );
}

/**
 * Implements hook_views_data().
 */
function futurium_isa_extras_views_data() {
  $data = array();
  $data['futurium_isa_extras_count_comments']['table']['group'] = t('Futurium Extras');
  $data['futurium_isa_extras_count_comments']['table']['join'] = array(
    '#global' => array(),
  );
  $data['futurium_isa_extras_count_comments']['comment_count'] = array(
    'title' => t('Comment count'),
    'help' => t('Provides a custom field.'),
    'field' => array(
      'handler' => 'futurium_isa_extras_count_comments',
    ),
    'sort' => array(
      'handler' => 'futurium_isa_extras_sort_count_comments',
    ),
  );
  return $data;
}
