<?php
/**
 * @file
 * Theme and preprocess functions.
 */

/**
 * Implements template_preprocess().
 *
 * Prepares variables for islandora_cartographic_downloads template.
 *
 * Default template: islandora-cartographic-downloads.tpl.php.
 *
 * @param array $variables
 *   An associative array containing:
 *   - islandora_object: Instance of an islandora object.
 *   - message: A message displayed on the page.
 *   - ds_type: The type of datastream to be downloaded.
 */
function template_preprocess_islandora_cartographic_downloads(&$variables) {
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
