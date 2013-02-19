<?php
/**
 * @file
 * gsb_feature_mega_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gsb_feature_mega_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/add
  $menu_links['main-menu:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'The Stanford GSB Experience',
    'options' => array(
      'minipanel' => 'the_stanford_gsb_experience',
      'menu_minipanels_hover' => array(
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
        'mlid' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The Stanford GSB Experience');


  return $menu_links;
}
