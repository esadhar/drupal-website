<?php
/**
 * @file
 * admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function admin_user_default_roles() {
  $roles = array();

  // Exported role: actu manager.
  $roles['actu manager'] = array(
    'name' => 'actu manager',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: anonymous user.
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
  );

  // Exported role: authenticated user.
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
  );

  // Exported role: root.
  $roles['root'] = array(
    'name' => 'root',
    'weight' => 4,
  );

  return $roles;
}
