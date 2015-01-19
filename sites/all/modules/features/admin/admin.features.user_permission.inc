<?php
/**
 * @file
 * admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu-header-menu menu items'.
  $permissions['administer menu-header-menu menu items'] = array(
    'name' => 'administer menu-header-menu menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-menu-gauche menu items'.
  $permissions['administer menu-menu-gauche menu items'] = array(
    'name' => 'administer menu-menu-gauche menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'menu edit devel'.
  $permissions['menu edit devel'] = array(
    'name' => 'menu edit devel',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit features'.
  $permissions['menu edit features'] = array(
    'name' => 'menu edit features',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit main-menu'.
  $permissions['menu edit main-menu'] = array(
    'name' => 'menu edit main-menu',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit management'.
  $permissions['menu edit management'] = array(
    'name' => 'menu edit management',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-header-menu'.
  $permissions['menu edit menu-header-menu'] = array(
    'name' => 'menu edit menu-header-menu',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-menu-gauche'.
  $permissions['menu edit menu-menu-gauche'] = array(
    'name' => 'menu edit menu-menu-gauche',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit navigation'.
  $permissions['menu edit navigation'] = array(
    'name' => 'menu edit navigation',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit user-menu'.
  $permissions['menu edit user-menu'] = array(
    'name' => 'menu edit user-menu',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  return $permissions;
}
