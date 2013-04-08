<?php
/**
 * @file
 * gsb_feature_mega_menu.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_mega_menu_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'megamenu';
  $ds_view_mode->label = 'Megamenu';
  $ds_view_mode->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'node' => 'node',
  );
  $export['megamenu'] = $ds_view_mode;

  return $export;
}
