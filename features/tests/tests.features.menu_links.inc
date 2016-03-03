<?php
/**
 * @file
 * tests.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tests_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_stats:Analytics.
  $menu_links['main-menu_stats:Analytics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Analytics',
    'router_path' => 'analytics',
    'link_title' => 'Stats',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => 'signal',
        'data-display-title' => 0,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_stats:Analytics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Stats');

  return $menu_links;
}
