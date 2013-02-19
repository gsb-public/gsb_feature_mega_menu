<?php
/**
 * @file
 * gsb_feature_mega_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_mega_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_admin_menu_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_admin_menu_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_default_callbacks';
  $strongarm->value = 1;
  $export['menu_minipanels_default_callbacks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_devel_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_devel_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_exclude_paths';
  $strongarm->value = 'admin
admin/*';
  $export['menu_minipanels_exclude_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_features_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_features_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_hover';
  $strongarm->value = array(
    'position' => array(
      'target' => 'false',
      'target_custom' => '',
      'type' => 'absolute',
      'container' => '',
      'corner' => array(
        'target' => 'bottomLeft',
        'tooltip' => 'bottomMiddle',
      ),
      'adjust' => array(
        'x' => '0',
        'y' => '0',
      ),
    ),
    'show' => array(
      'delay' => '0',
      'when' => array(
        'event' => 'mouseover',
      ),
      'effect' => array(
        'type' => 'fade',
        'length' => '50',
      ),
    ),
    'hide' => array(
      'delay' => '0',
      'effect' => array(
        'type' => 'slide',
        'length' => '0',
      ),
    ),
    'style' => array(
      'tip' => 'none',
      'name' => 'light',
      'width' => array(
        'min' => '0',
        'max' => '250',
      ),
      'border' => array(
        'width' => '0',
        'color' => '#d3d3d3',
        'radius' => '0',
      ),
    ),
  );
  $export['menu_minipanels_hover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_main-menu_enabled';
  $strongarm->value = TRUE;
  $export['menu_minipanels_main-menu_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_management_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_management_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_navigation_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_navigation_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_user-menu_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_user-menu_enabled'] = $strongarm;

  return $export;
}
