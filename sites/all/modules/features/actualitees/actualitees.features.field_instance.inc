<?php
/**
 * @file
 * actualitees.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function actualitees_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-actualitee-body'
  $field_instances['node-actualitee-body'] = array(
    'bundle' => 'actualitee',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-actualitee-field_documents'
  $field_instances['node-actualitee-field_documents'] = array(
    'bundle' => 'actualitee',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_documents',
    'label' => 'Documents',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'documents',
      'file_extensions' => 'txt pdf doc docx odt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 'icon_link',
          'image' => 0,
          'image_background' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_medium' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_large_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_medium_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_small_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_xlarge_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_xxlarge_1x' => 0,
          'image_resp_img__esadhar' => 0,
          'image_square_thumb' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-actualitee-field_visuel'
  $field_instances['node-actualitee-field_visuel'] = array(
    'bundle' => 'actualitee',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_visuel',
    'label' => 'Visuel',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'visuels',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image_large',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_background' => 0,
          'image_large' => 'image_large',
          'image_linkit_thumb' => 0,
          'image_medium' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_large_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_medium_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_small_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_xlarge_1x' => 0,
          'image_resp_backgroundbreakpoints_theme_esadhar_xxlarge_1x' => 0,
          'image_resp_img__esadhar' => 0,
          'image_square_thumb' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Documents');
  t('Visuel');

  return $field_instances;
}
