<?php
/**
 * @file
 * responsive.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function responsive_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.esadhar.large';
  $breakpoint->name = 'Large';
  $breakpoint->breakpoint = 'only screen and (min-width: 1025px)';
  $breakpoint->source = 'esadhar';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.esadhar.large'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.esadhar.medium';
  $breakpoint->name = 'Medium';
  $breakpoint->breakpoint = 'only screen and (min-width: 641px)';
  $breakpoint->source = 'esadhar';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.esadhar.medium'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.esadhar.small';
  $breakpoint->name = 'Small';
  $breakpoint->breakpoint = 'only screen and (max-width: 640px)';
  $breakpoint->source = 'esadhar';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.esadhar.small'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.esadhar.xlarge';
  $breakpoint->name = 'XLarge';
  $breakpoint->breakpoint = 'only screen and (min-width: 1441px)';
  $breakpoint->source = 'esadhar';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.esadhar.xlarge'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.esadhar.xxlarge';
  $breakpoint->name = 'XXLarge';
  $breakpoint->breakpoint = 'only screen and (min-width: 1921px)';
  $breakpoint->source = 'esadhar';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.esadhar.xxlarge'] = $breakpoint;

  return $export;
}
