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

  // Exported permission: 'access admin theme'.
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'admin_theme',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access workflow summary views'.
  $permissions['access workflow summary views'] = array(
    'name' => 'access workflow summary views',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'workflow_views',
  );

  // Exported permission: 'administer background image'.
  $permissions['administer background image'] = array(
    'name' => 'administer background image',
    'roles' => array(
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
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
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-menu-gauche menu items'.
  $permissions['administer menu-menu-gauche menu items'] = array(
    'name' => 'administer menu-menu-gauche menu items',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer workflow'.
  $permissions['administer workflow'] = array(
    'name' => 'administer workflow',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'workflow_admin_ui',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
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

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage background images'.
  $permissions['manage background images'] = array(
    'name' => 'manage background images',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'bg_image_ui',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'features',
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
      'administrator' => 'administrator',
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
      'administrator' => 'administrator',
      'root' => 'root',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-menu-gauche'.
  $permissions['menu edit menu-menu-gauche'] = array(
    'name' => 'menu edit menu-menu-gauche',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'root' => 'root',
    ),
    'module' => 'workflow_admin_ui',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule workflow transitions'.
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'view all background images'.
  $permissions['view all background images'] = array(
    'name' => 'view all background images',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'root' => 'root',
    ),
    'module' => 'node',
  );

  return $permissions;
}
