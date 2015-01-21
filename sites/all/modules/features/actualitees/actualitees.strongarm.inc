<?php
/**
 * @file
 * actualitees.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function actualitees_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_actualitee';
  $strongarm->value = 'edit-extras';
  $export['additional_settings__active_tab_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_actualitee';
  $strongarm->value = '0';
  $export['ant_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_actualitee';
  $strongarm->value = '';
  $export['ant_pattern_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_actualitee';
  $strongarm->value = 0;
  $export['ant_php_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_cancel_actualitee';
  $strongarm->value = '1';
  $export['content_type_extras_cancel_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_preview_button_actualitee';
  $strongarm->value = 'Aperçu';
  $export['content_type_extras_preview_button_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_actualitee';
  $strongarm->value = '1';
  $export['content_type_extras_save_and_edit_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_button_actualitee';
  $strongarm->value = 'Save and Edit';
  $export['content_type_extras_save_and_edit_button_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_actualitee';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_actualitee';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_actualitee';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_actualitee';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_actualitee';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_actualitee';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__actualitee';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_actualitee';
  $strongarm->value = array();
  $export['i18n_sync_node_type_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_actualitee';
  $strongarm->value = array();
  $export['menu_options_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_actualitee';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_actualitee';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_actualitee';
  $strongarm->value = '0';
  $export['node_preview_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_actualitee';
  $strongarm->value = 0;
  $export['node_submitted_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_actualitee_pattern';
  $strongarm->value = 'actualitees/[node:source:title]';
  $export['pathauto_node_actualitee_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_actualitee';
  $strongarm->value = 'Enregistrer et ajouter les champs';
  $export['save_continue_actualitee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_permissions_actualitee';
  $strongarm->value = array(
    0 => 'create_roles',
    1 => 'edit_roles',
    2 => 'delete_roles',
  );
  $export['user_permissions_actualitee'] = $strongarm;

  return $export;
}
