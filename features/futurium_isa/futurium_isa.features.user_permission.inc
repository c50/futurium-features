<?php
/**
 * @file
 * futurium_isa.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_isa_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event_d4eu content'.
  $permissions['create event_d4eu content'] = array(
    'name' => 'create event_d4eu content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create evidence content'.
  $permissions['create evidence content'] = array(
    'name' => 'create evidence content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create future content'.
  $permissions['create future content'] = array(
    'name' => 'create future content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create futurium_group content'.
  $permissions['create futurium_group content'] = array(
    'name' => 'create futurium_group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ideas content'.
  $permissions['create ideas content'] = array(
    'name' => 'create ideas content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_d4eu content'.
  $permissions['edit any event_d4eu content'] = array(
    'name' => 'edit any event_d4eu content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any evidence content'.
  $permissions['edit any evidence content'] = array(
    'name' => 'edit any evidence content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any future content'.
  $permissions['edit any future content'] = array(
    'name' => 'edit any future content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ideas content'.
  $permissions['edit any ideas content'] = array(
    'name' => 'edit any ideas content',
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

  // Exported permission: 'flag attending'.
  $permissions['flag attending'] = array(
    'name' => 'flag attending',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_user'.
  $permissions['flag follow_user'] = array(
    'name' => 'flag follow_user',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag like'.
  $permissions['flag like'] = array(
    'name' => 'flag like',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag attending'.
  $permissions['unflag attending'] = array(
    'name' => 'unflag attending',
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

  // Exported permission: 'unflag like'.
  $permissions['unflag like'] = array(
    'name' => 'unflag like',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use futurium_linkafter'.
  $permissions['use futurium_linkafter'] = array(
    'name' => 'use futurium_linkafter',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'futurium_linkafter',
  );

  // Exported permission: 'use text format full'.
  $permissions['use text format full'] = array(
    'name' => 'use text format full',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format simple_text'.
  $permissions['use text format simple_text'] = array(
    'name' => 'use text format simple_text',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format simple_wysiwig'.
  $permissions['use text format simple_wysiwig'] = array(
    'name' => 'use text format simple_wysiwig',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
