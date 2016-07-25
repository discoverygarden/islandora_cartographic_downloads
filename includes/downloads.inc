<?php
/**
 * @file
 * This file allows a specified datastream to be downloaded.
 */

/**
 * Menu callback to facilitate a datastream download.
 *
 * @param AbstractObject $islandora_object
 *   Islandora object with the specified datastream to be downloaded.
 * @param string $ds_type
 *   Type of datastream to be downloaded.
 *
 * @return string
 *   An HTML string representing the themed output.
 */
function islandora_cartographic_downloads_download(AbstractObject $islandora_object, $ds_type) {
  $message_link = t('Thank you for downloading. If your download has not started, click <a href="@download">here</a>.',
    array(
      '@download' => url("islandora/object/{$islandora_object->id}/datastream/{$ds_type}/download"),
    )
  );
  return theme(
    'islandora_cartographic_downloads',
    array(
      'islandora_object' => $islandora_object,
      'message' => $message_link,
      'ds_type' => $ds_type,
    )
  );
}
