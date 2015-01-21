<?php
/**
 * @file
 * page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contenu|node|page|form';
  $field_group->group_name = 'group_contenu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_visuel',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contenu field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_contenu|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fond|node|page|form';
  $field_group->group_name = 'group_fond';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'fond',
    'weight' => '3',
    'children' => array(
      0 => 'field_image_de_fond',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fond field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_fond|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|page|form';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'horizontal tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_contenu',
      1 => 'group_fond',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|page|form'] = $field_group;

  return $export;
}
