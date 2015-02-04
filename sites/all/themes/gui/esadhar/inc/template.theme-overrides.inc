<?php



function esadhar_menu_item_link($link) {
  if (empty($link['localized_options'])) {
    $link['localized_options'] = array();
  }
  if (empty($link['localized_options']['attributes']['class'])) {
    $link['localized_options']['attributes']['class'] = 'menu-'. $link['mlid'];
  }
  else {
    $link['localized_options']['attributes']['class'] .= ' menu-'. $link['mlid'];
  }
  return l($link['title'], $link['href'], $link['localized_options']);
}