<?php
/**
 * @file
 * unh_destinyone.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unh_destinyone_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unh_destinyone_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function unh_destinyone_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A DestinyOne course.  Links to a course on the DestinyOne server.  Contains additional information and settings to be presented to the user from the Drupal front end.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
