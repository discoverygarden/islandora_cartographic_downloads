<?php
/**
 * @file
 * An Islandora module for downloading specified datastreams on objects.
 */

/**
 * Implements hook_preprocess_theme().
 */
function islandora_cartographic_downloads_preprocess_islandora_cartographic_downloads(&$variables) {
  drupal_add_js(
    array(
      'islandora_cartographic_downloads' => array(
        'url' => url("islandora/object/{$variables['islandora_object']->id}/datastream/{$variables['ds_type']}/download"),
      ),
    ),
  'setting');
  $module_path = drupal_get_path('module', 'islandora_cartographic_downloads');
  drupal_add_js("$module_path/js/behaviour.js");
}