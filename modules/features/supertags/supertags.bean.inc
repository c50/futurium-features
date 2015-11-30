<?php
/**
 * @file
 * supertags.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function supertags_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'user_blocks';
  $bean_type->label = 'User Blocks';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['user_blocks'] = $bean_type;

  return $export;
}
