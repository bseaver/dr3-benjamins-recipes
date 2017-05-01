<?php
/**
 * @file
 * main_content.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function main_content_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'benjamintseaver@gmail.com',
      'reply' => '',
      'weight' => 1,
      'selected' => 1,
    ),
  );
}
