<?php
/**
 * @file
 * gsb_feature_mega_menu.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gsb_feature_mega_menu_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.menu_block_1_parent.value"] = 'main-menu:130';
  $overrides["variable.menu_block_2_parent.value"] = 'main-menu:129';
  $overrides["variable.menu_block_3_parent.value"] = 'main-menu:132';
  $overrides["variable.menu_block_4_parent.value"] = 'main-menu:131';

 return $overrides;
}
