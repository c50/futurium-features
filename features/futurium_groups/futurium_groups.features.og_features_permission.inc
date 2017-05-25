<?php
/**
 * @file
 * futurium_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function futurium_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:futurium_group:create event_d4eu content'.
  $permissions['node:futurium_group:create event_d4eu content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:create evidence content'.
  $permissions['node:futurium_group:create evidence content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:create future content'.
  $permissions['node:futurium_group:create future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:create ideas content'.
  $permissions['node:futurium_group:create ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission:
  // 'node:futurium_group:delete any event_d4eu content'.
  $permissions['node:futurium_group:delete any event_d4eu content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:delete any evidence content'.
  $permissions['node:futurium_group:delete any evidence content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:delete any future content'.
  $permissions['node:futurium_group:delete any future content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:delete any ideas content'.
  $permissions['node:futurium_group:delete any ideas content'] = array(
    'roles' => array(),
  );

  // Exported og permission:
  // 'node:futurium_group:delete own event_d4eu content'.
  $permissions['node:futurium_group:delete own event_d4eu content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:delete own evidence content'.
  $permissions['node:futurium_group:delete own evidence content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:delete own future content'.
  $permissions['node:futurium_group:delete own future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:delete own ideas content'.
  $permissions['node:futurium_group:delete own ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission:
  // 'node:futurium_group:update any event_d4eu content'.
  $permissions['node:futurium_group:update any event_d4eu content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update any evidence content'.
  $permissions['node:futurium_group:update any evidence content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update any future content'.
  $permissions['node:futurium_group:update any future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update any ideas content'.
  $permissions['node:futurium_group:update any ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission:
  // 'node:futurium_group:update own event_d4eu content'.
  $permissions['node:futurium_group:update own event_d4eu content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update own evidence content'.
  $permissions['node:futurium_group:update own evidence content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update own future content'.
  $permissions['node:futurium_group:update own future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update own ideas content'.
  $permissions['node:futurium_group:update own ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
