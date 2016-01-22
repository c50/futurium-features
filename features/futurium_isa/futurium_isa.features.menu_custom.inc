<?php
/**
 * @file
 * futurium_isa.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function futurium_isa_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );

  // Exported menu: menu-group-tabs.
  $menus['menu-group-tabs'] = array(
    'menu_name' => 'menu-group-tabs',
    'title' => 'Group Tabs',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );

  // Exported menu: menu-user-tabs.
  $menus['menu-user-tabs'] = array(
    'menu_name' => 'menu-user-tabs',
    'title' => 'User Tabs',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Group Tabs');
  t('User Tabs');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
