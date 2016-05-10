<?php
/**
 * @file
 * futurium_d4eu.features.user_permission.inc
 */
/**
 * Implements hook_user_default_permissions().
 */
function futurium_d4eu_user_default_permissions() {
  $permissions = array();
  // Exported permission: 'administer user subscriptions'.
  $permissions['administer user subscriptions'] = array(
    'name' => 'administer user subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'community moderator' => 'community moderator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'sweaver designer' => 'sweaver designer',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'bulk-administer user subscriptions'.
  $permissions['bulk-administer user subscriptions'] = array(
    'name' => 'bulk-administer user subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'community moderator' => 'community moderator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'sweaver designer' => 'sweaver designer',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'flag subscription_flag'.
  $permissions['flag subscription_flag'] = array(
    'name' => 'flag subscription_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );
  // Exported permission: 'flag subscription_flavour_flag'.
  $permissions['flag subscription_flavour_flag'] = array(
    'name' => 'flag subscription_flavour_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );
  // Exported permission: 'subscribe to all content types'.
  $permissions['subscribe to all content types'] = array(
    'name' => 'subscribe to all content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'subscribe to content'.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'community moderator' => 'community moderator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'sweaver designer' => 'sweaver designer',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'subscribe to content types'.
  $permissions['subscribe to content types'] = array(
    'name' => 'subscribe to content types',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'community moderator' => 'community moderator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'sweaver designer' => 'sweaver designer',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'subscribe to taxonomy terms'.
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'community moderator' => 'community moderator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'sweaver designer' => 'sweaver designer',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'suspend own subscriptions'.
  $permissions['suspend own subscriptions'] = array(
    'name' => 'suspend own subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'community moderator' => 'community moderator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'sweaver designer' => 'sweaver designer',
    ),
    'module' => 'subscriptions',
  );
  // Exported permission: 'unflag subscription_flag'.
  $permissions['unflag subscription_flag'] = array(
    'name' => 'unflag subscription_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );
  // Exported permission: 'unflag subscription_flavour_flag'.
  $permissions['unflag subscription_flavour_flag'] = array(
    'name' => 'unflag subscription_flavour_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );
  return $permissions;
}
