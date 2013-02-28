<?php
/**
 * @file
 * gsb_feature_mega_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_mega_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function gsb_feature_mega_menu_strongarm_alter(&$data) {
  if (isset($data['menu_block_1_parent'])) {
    $data['menu_block_1_parent']->value = 'main-menu:130'; /* WAS: 'main-menu:122' */
  }
  if (isset($data['menu_block_2_parent'])) {
    $data['menu_block_2_parent']->value = 'main-menu:129'; /* WAS: 'main-menu:121' */
  }
  if (isset($data['menu_block_3_parent'])) {
    $data['menu_block_3_parent']->value = 'main-menu:132'; /* WAS: 'main-menu:124' */
  }
  if (isset($data['menu_block_4_parent'])) {
    $data['menu_block_4_parent']->value = 'main-menu:131'; /* WAS: 'main-menu:123' */
  }
}
