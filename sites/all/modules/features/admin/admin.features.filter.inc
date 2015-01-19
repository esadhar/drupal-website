<?php
/**
 * @file
 * admin.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function admin_filter_default_formats() {
  $formats = array();

  // Exported format: Filtred html.
  $formats['filtred_html'] = array(
    'format' => 'filtred_html',
    'name' => 'Filtred html',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <img> <h6> <h5> <h4> <h3> <h2> <h1>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'video_filter' => array(
        'weight' => -1,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 1,
          'video_filter_html5' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}
