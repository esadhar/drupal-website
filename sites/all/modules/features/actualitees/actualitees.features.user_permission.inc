<?php
/**
 * @file
 * actualitees.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function actualitees_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create actualitee content'.
  $permissions['create actualitee content'] = array(
    'name' => 'create actualitee content',
    'roles' => array(
      'actu manager' => 'actu manager',
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any actualitee content'.
  $permissions['delete any actualitee content'] = array(
    'name' => 'delete any actualitee content',
    'roles' => array(
      'actu manager' => 'actu manager',
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own actualitee content'.
  $permissions['delete own actualitee content'] = array(
    'name' => 'delete own actualitee content',
    'roles' => array(
      'actu manager' => 'actu manager',
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any actualitee content'.
  $permissions['edit any actualitee content'] = array(
    'name' => 'edit any actualitee content',
    'roles' => array(
      'actu manager' => 'actu manager',
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own actualitee content'.
  $permissions['edit own actualitee content'] = array(
    'name' => 'edit own actualitee content',
    'roles' => array(
      'actu manager' => 'actu manager',
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  return $permissions;
}
