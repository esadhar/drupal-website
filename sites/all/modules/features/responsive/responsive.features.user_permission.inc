<?php
/**
 * @file
 * responsive.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function responsive_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer responsive images and styles'.
  $permissions['administer responsive images and styles'] = array(
    'name' => 'administer responsive images and styles',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'resp_img',
  );

  return $permissions;
}
