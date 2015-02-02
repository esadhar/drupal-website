<?php
/**
 * @file
 * responsive.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function responsive_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'esadhar';
  $breakpoint_group->name = 'esadhar';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.esadhar.small',
    1 => 'breakpoints.theme.esadhar.medium',
    2 => 'breakpoints.theme.esadhar.large',
    3 => 'breakpoints.theme.esadhar.xlarge',
    4 => 'breakpoints.theme.esadhar.xxlarge',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['esadhar'] = $breakpoint_group;

  return $export;
}
