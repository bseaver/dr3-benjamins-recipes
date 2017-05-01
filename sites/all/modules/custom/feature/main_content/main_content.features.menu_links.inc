<?php
/**
 * @file
 * main_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-benjamins-recipes:node/1.
  $menu_links['main-menu_about-benjamins-recipes:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About Benjamin\'s Recipes',
    'options' => array(
      'attributes' => array(
        'title' => 'About Page for Site',
      ),
      'identifier' => 'main-menu_about-benjamins-recipes:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_about-you:node/2.
  $menu_links['main-menu_about-you:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About You',
    'options' => array(
      'attributes' => array(
        'title' => 'Users Comment About Themselves',
      ),
      'identifier' => 'main-menu_about-you:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_common-conversions:node/3.
  $menu_links['main-menu_common-conversions:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Common Conversions',
    'options' => array(
      'attributes' => array(
        'title' => 'Cooking Conversion Chart',
      ),
      'identifier' => 'main-menu_common-conversions:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
  );
  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Page for Site',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_faq:node/4.
  $menu_links['main-menu_faq:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'Frequently Asked Questions',
      ),
      'identifier' => 'main-menu_faq:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Benjamin\'s Recipes');
  t('About You');
  t('Common Conversions');
  t('Contact');
  t('FAQ');

  return $menu_links;
}
