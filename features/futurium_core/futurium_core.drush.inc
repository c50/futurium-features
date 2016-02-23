<?php

/**
 * @file
 * Futurium drush integration.
 */

/**
 * Implements hook_drush_command().
 *
 * Returns an associative array describing your command(s).
 *
 * @see drush_parse_command()
 */
function futurium_core_drush_command() {
  $items = array();

  $items['features_revert_futurium'] = array(
    'description' => "Revert all Futurium enabled feature module on your site.",
    'options' => array(
      'force' => "Force revert even if Features assumes components' state are default.",
    ),
    'drupal dependencies' => array('features'),
    'aliases' => array('fr-fu', 'frfu'),
  );

  $items['post_install_futurium'] = array(
    'description' => "Futurium post installation configuration.",
    'aliases' => array('pi-fu', 'pifu'),
  );

  $items['revert_futurium_config'] = array(
    'description' => "Revert Futurium configuration.",
    'aliases' => array('rc-fu', 'rcfu'),
  );
  return $items;
}

/**
 * Implements hook_drush_help().
 */
function futurium_core_drush_help($section) {
  switch ($section) {
    case 'drush:features_revert_futurium':
      return dt("Revert all enabled feature module on your site that has the 'futurium_' prefix.");
    case 'drush:post_install_futurium':
      return dt("Futurium post installation configuration.");
    case 'drush:revert_futurium_config':
      return dt("Revert Futurium configuration.");
  }
}

/**
 * Revert all enabled features to their definitions in code.
 */
function drush_futurium_core_features_revert_futurium() {
  module_load_include('inc', 'features', 'features.export');
  $force = drush_get_option('force');

  $features_to_revert = array();
  foreach (features_get_features(NULL, TRUE) as $module) {
    if ($module->status && preg_match('/futurium_*/', $module->name)) {
      // If forced, add module regardless of status.
      if ($force) {
        $features_to_revert[] = $module->name;
      }
      else {
        switch (features_get_storage($module->name)) {
          case FEATURES_OVERRIDDEN:
          case FEATURES_NEEDS_REVIEW:
          case FEATURES_REBUILDABLE:
            $features_to_revert[] = $module->name;
            break;
        }
      }
    }
  }

  if ($features_to_revert) {
    $futurium_args = array('!modules' => implode(', ', $features_to_revert));
    drush_print(dt('The following modules will be reverted: !modules', $futurium_args));

    // Confirm that the user would like to continue. If not, simply abort.
    if (!drush_confirm(dt('Do you really want to continue?'))) {
      return drush_user_abort('Aborting.');
    }
    drush_invoke('features-revert', $features_to_revert);
  }
  else {
    drush_log(dt('Current state already matches defaults, aborting.'), 'ok');
  }
}

/**
 * Futurium post installation configuration.
 */
function drush_futurium_core_post_install_futurium() {

  // Disable not needed multisite modules
  module_disable(array('nexteuropa_multilingual', 'ecas', 'tmgmt', 'cce_basic_config', 'taxonomy_browser', 'multisite_settings_standard', 'nexteuropa_core'));

  // Remove Latest Content block from homepage context.
  $context = module_invoke('context', 'load', 'homepage');
  unset($context->reactions['block']['blocks']['views-multisite_settings_core-block_1']);
  module_invoke('context', 'save', $context);

  // Add editor role to user_editor.
  $user = user_load_by_name('user_editor');
  $role = user_role_load_by_name("editor");
  user_multiple_role_edit(array($user->uid), 'add_role', $role->rid);

  // Remove contributor role from user_editor.
  if (($key = array_search('contributor', $user->roles)) !== false) {
    unset($user->roles[$key]);
  }
  user_save($user);

  variable_set('site_homepage', 'home');

  // Remove document field from document as it belongs to e_library_core and cannot re-export it.
  $instance = field_info_instance('node', 'field_document', 'document');
  field_delete_instance($instance, TRUE);
  field_delete_field('field_document');
  field_purge_batch(5);

  drush_print(dt('Futurium Post-Install operations performed.'));
}

/**
 * Revert Futurium Configuration.
 */
function drush_futurium_core_revert_futurium_config() {

  // Set default moderation state as published.
  $node_types = node_type_get_types();
  foreach($node_types as $node){
    variable_set('workbench_moderation_default_state_' . $node->type, workbench_moderation_state_published());
  }

  drush_print(dt('Futurium Configuration has been applied.'));
}
