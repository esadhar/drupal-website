<?php

// dsm($vars);

$vars['theme_hook_suggestions'][] = 'node__'.$vars['view_mode'];
$vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];

if(!isset($vars["title_attributes_array"]["class"]))
  $vars["title_attributes_array"]["class"] = array();

$vars["title_attributes_array"]["class"][] = "node-title";
$vars["title_attributes_array"]["class"] = implode(" ", $vars["title_attributes_array"]["class"]);

$vars["title_attributes"] =  drupal_attributes($vars["title_attributes_array"]);

