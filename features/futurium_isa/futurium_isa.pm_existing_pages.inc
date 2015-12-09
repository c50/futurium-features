<?php
/**
 * @file
 * futurium_isa.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function futurium_isa_pm_existing_pages_info() {
  $export = array();
/*
  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->disabled = FALSE;
  $pm_existing_page->name = 'home';
  $pm_existing_page->label = 'Home';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'home';
  $export['home'] = $pm_existing_page;
*/
  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'topics';
  $pm_existing_page->label = 'topics';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'topics';
  $export['topics'] = $pm_existing_page;

  return $export;
}
