<?php
/**
 * @file
 * gsb_feature_mega_menu.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function gsb_feature_mega_menu_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/add/businessinsides
  $menu_links['main-menu:node/add/businessinsides'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/businessinsides',
    'router_path' => 'node/add',
    'link_title' => 'Business Insights',
    'options' => array(
      'minipanel' => 'business_insights',
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
          'name' => 'megamenu',
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
        'mlid' => '122',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: main-menu:node/add/businessociety
  $menu_links['main-menu:node/add/businessociety'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/businessociety',
    'router_path' => 'node/add',
    'link_title' => 'Business & Society',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add/businessinsides',
  );
  // Exported menu link: main-menu:node/add/events
  $menu_links['main-menu:node/add/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/events',
    'router_path' => 'node/add',
    'link_title' => 'Our Programs',
    'options' => array(
      'minipanel' => 'our_programs',
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
          'name' => 'megamenu',
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
        'mlid' => '124',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: main-menu:node/add/faculty
  $menu_links['main-menu:node/add/faculty'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/faculty',
    'router_path' => 'node/add',
    'link_title' => 'Faculty & Research',
    'options' => array(
      'minipanel' => 'faculty_research',
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
          'name' => 'megamenu',
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
        'mlid' => '123',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: main-menu:node/add/facultysub
  $menu_links['main-menu:node/add/facultysub'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/facultysub',
    'router_path' => 'node/add',
    'link_title' => 'The Faculty',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add/faculty',
  );
  // Exported menu link: main-menu:node/add/mba
  $menu_links['main-menu:node/add/mba'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/mba',
    'router_path' => 'node/add',
    'link_title' => 'MBA Program',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/add/events',
  );
  // Exported menu link: main-menu:node/add/news
  $menu_links['main-menu:node/add/news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add',
    'link_title' => 'Stanford GSB Experience',
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
          'name' => 'megamenu',
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
        'mlid' => '129',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: main-menu:node/add/whybusiness
  $menu_links['main-menu:node/add/whybusiness'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/whybusiness',
    'router_path' => 'node/add',
    'link_title' => 'Why Business School',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add/news',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Business & Society');
  t('Business Insights');
  t('Faculty & Research');
  t('MBA Program');
  t('Our Programs');
  t('Stanford GSB Experience');
  t('The Faculty');
  t('Why Business School');


  return $menu_links;
}
inks;
}
