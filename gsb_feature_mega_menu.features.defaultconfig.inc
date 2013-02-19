<?php
/**
 * @file
 * gsb_feature_mega_menu.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_mega_menu_defaultconfig_features() {
  return array(
    'gsb_feature_mega_menu' => array(
      'default_panels_mini' => 'default_panels_mini',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_panels_mini().
 */
function gsb_feature_mega_menu_defaultconfig_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'business_insights';
  $mini->category = 'menu';
  $mini->admin_title = 'Business Insights';
  $mini->admin_description = 'Business Insights Mega Menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'gsb-standard-page-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['business_insights'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'faculty_research';
  $mini->category = 'menu';
  $mini->admin_title = 'Faculty & Research';
  $mini->admin_description = 'Faculty & Research Mega Menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'gsb-standard-page-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['faculty_research'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'our_programs';
  $mini->category = 'menu';
  $mini->admin_title = 'Our Programs';
  $mini->admin_description = 'Our Programs Mega Menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'gsb-standard-page-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['our_programs'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'the_stanford_gsb_experience';
  $mini->category = 'menu';
  $mini->admin_title = 'The Stanford GSB Experience';
  $mini->admin_description = 'The Stanford GSB Experience Mega Menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'gsb-standard-page-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['the_stanford_gsb_experience'] = $mini;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function gsb_feature_mega_menu_defaultconfig_strongarm() {
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
