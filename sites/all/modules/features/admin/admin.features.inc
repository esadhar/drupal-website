<?php
/**
 * @file
 * admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function admin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_workflow_default_workflows().
 */
function admin_workflow_default_workflows() {
  $workflows = array();

  // Exported workflow: Publication
  $workflows['Publication'] = array(
    'name' => 'Publication',
    'tab_roles' => 4,
    'options' => 'a:4:{s:16:"comment_log_node";s:1:"0";s:15:"comment_log_tab";s:1:"0";s:13:"name_as_title";s:1:"1";s:12:"watchdog_log";s:1:"1";}',
    'states' => array(
      0 => array(
        'state' => '(creation)',
        'weight' => -50,
        'sysid' => 1,
        'status' => 1,
        'name' => 'Publication',
      ),
      1 => array(
        'state' => 'Importé',
        'weight' => -20,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Publication',
      ),
      2 => array(
        'state' => 'Masqué',
        'weight' => -20,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Publication',
      ),
      3 => array(
        'state' => 'Affiché',
        'weight' => -20,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Publication',
      ),
    ),
    'transitions' => array(
      0 => array(
        'roles' => 'root',
        'state' => '(creation)',
        'target_state' => 'Importé',
      ),
      1 => array(
        'roles' => 'workflow_features_author_name,administrator,root',
        'state' => '(creation)',
        'target_state' => 'Masqué',
      ),
      2 => array(
        'roles' => 'workflow_features_author_name,administrator,root',
        'state' => '(creation)',
        'target_state' => 'Affiché',
      ),
      3 => array(
        'roles' => 'workflow_features_author_name,administrator,root',
        'state' => 'Importé',
        'target_state' => 'Masqué',
      ),
      4 => array(
        'roles' => 'workflow_features_author_name,administrator,root',
        'state' => 'Importé',
        'target_state' => 'Affiché',
      ),
      5 => array(
        'roles' => 'root',
        'state' => 'Masqué',
        'target_state' => 'Importé',
      ),
      6 => array(
        'roles' => 'workflow_features_author_name,administrator,root',
        'state' => 'Masqué',
        'target_state' => 'Affiché',
      ),
      7 => array(
        'roles' => 'root',
        'state' => 'Affiché',
        'target_state' => 'Importé',
      ),
      8 => array(
        'roles' => 'workflow_features_author_name,administrator,root',
        'state' => 'Affiché',
        'target_state' => 'Masqué',
      ),
    ),
    'node_types' => array(
      0 => 'actualitee',
      1 => 'page',
    ),
  );

  return $workflows;
}
