<?php
/**
 * @file
 * perms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_isa_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create new event_d4eu content'.
  $permissions['create event_d4eu content'] = array(
    'name' => 'create event_d4eu content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new evidence content'.
  $permissions['create evidence content'] = array(
    'name' => 'create evidence content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new future content'.
  $permissions['create future content'] = array(
    'name' => 'create future content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new futurium_group content'.
  $permissions['create futurium_group content'] = array(
    'name' => 'create futurium_group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new ideas content'.
  $permissions['create ideas content'] = array(
    'name' => 'create ideas content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );





  // Exported permission: 'edit own event_d4eu content'.
  $permissions['edit own event_d4eu content'] = array(
    'name' => 'edit own event_d4eu content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own evidence content'.
  $permissions['edit own evidence content'] = array(
    'name' => 'edit own evidence content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own future content'.
  $permissions['edit own future content'] = array(
    'name' => 'edit own future content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own futurium_group content'.
  $permissions['edit own futurium_group content'] = array(
    'name' => 'edit own futurium_group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ideas content'.
  $permissions['edit own ideas content'] = array(
    'name' => 'edit own ideas content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag follow_user'.
  $permissions['flag follow_user'] = array(
    'name' => 'flag follow_user',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_user'.
  $permissions['unflag follow_user'] = array(
    'name' => 'unflag follow_user',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
