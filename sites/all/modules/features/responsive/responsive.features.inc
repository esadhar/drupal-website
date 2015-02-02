<?php
/**
 * @file
 * responsive.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function responsive_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function responsive_image_default_styles() {
  $styles = array();

  // Exported image style: resp_backgroundbreakpoints_theme_esadhar_large_1x.
  $styles['resp_backgroundbreakpoints_theme_esadhar_large_1x'] = array(
    'name' => 'resp_backgroundbreakpoints_theme_esadhar_large_1x',
    'label' => 'resp_backgroundbreakpoints_theme_esadhar_large_1x',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_backgroundbreakpoints_theme_esadhar_medium_1x.
  $styles['resp_backgroundbreakpoints_theme_esadhar_medium_1x'] = array(
    'name' => 'resp_backgroundbreakpoints_theme_esadhar_medium_1x',
    'label' => 'resp_backgroundbreakpoints_theme_esadhar_medium_1x',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1024,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_backgroundbreakpoints_theme_esadhar_small_1x.
  $styles['resp_backgroundbreakpoints_theme_esadhar_small_1x'] = array(
    'name' => 'resp_backgroundbreakpoints_theme_esadhar_small_1x',
    'label' => 'resp_backgroundbreakpoints_theme_esadhar_small_1x',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 641,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_backgroundbreakpoints_theme_esadhar_xlarge_1x.
  $styles['resp_backgroundbreakpoints_theme_esadhar_xlarge_1x'] = array(
    'name' => 'resp_backgroundbreakpoints_theme_esadhar_xlarge_1x',
    'label' => 'resp_backgroundbreakpoints_theme_esadhar_xlarge_1x',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_backgroundbreakpoints_theme_esadhar_xxlarge_1x.
  $styles['resp_backgroundbreakpoints_theme_esadhar_xxlarge_1x'] = array(
    'name' => 'resp_backgroundbreakpoints_theme_esadhar_xxlarge_1x',
    'label' => 'resp_backgroundbreakpoints_theme_esadhar_xxlarge_1x',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
