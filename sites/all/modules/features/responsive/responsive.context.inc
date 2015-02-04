<?php
/**
 * @file
 * responsive.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function responsive_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front-large';
  $context->description = '';
  $context->tag = 'esadhar';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.esadhar.large',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('esadhar');
  $export['not-front-large'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front-small';
  $context->description = '';
  $context->tag = 'esadhar';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.esadhar.small',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('esadhar');
  $export['not-front-small'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resp_large';
  $context->description = '';
  $context->tag = 'esadhar';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.esadhar.large',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-header-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-header-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu-menu-menu-gauche' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-gauche',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'fieldblock-f0d86712ed20c5e263c1d286ef6252c4' => array(
          'module' => 'fieldblock',
          'delta' => 'f0d86712ed20c5e263c1d286ef6252c4',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'fieldblock-55852e4c0edd6767071229571be40c0b' => array(
          'module' => 'fieldblock',
          'delta' => '55852e4c0edd6767071229571be40c0b',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'breakpoint-large',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('esadhar');
  $export['resp_large'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resp_medium';
  $context->description = '';
  $context->tag = 'esadhar';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.esadhar.medium',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'breakpoint-medium',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('esadhar');
  $export['resp_medium'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resp_small';
  $context->description = '';
  $context->tag = 'esadhar';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.esadhar.small',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-header-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-header-menu',
          'region' => 'off_canvas_menu',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'fieldblock-f0d86712ed20c5e263c1d286ef6252c4' => array(
          'module' => 'fieldblock',
          'delta' => 'f0d86712ed20c5e263c1d286ef6252c4',
          'region' => 'content_bottom',
          'weight' => '-1',
        ),
        'menu-menu-menu-gauche' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-gauche',
          'region' => 'content_bottom',
          'weight' => '0',
        ),
        'fieldblock-55852e4c0edd6767071229571be40c0b' => array(
          'module' => 'fieldblock',
          'delta' => '55852e4c0edd6767071229571be40c0b',
          'region' => 'content_bottom',
          'weight' => '-1',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'breakpoint-small',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('esadhar');
  $export['resp_small'] = $context;

  return $export;
}
