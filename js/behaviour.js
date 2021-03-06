/**
 * @file
 * A base JavaScript file for the datastream download functionality.
 */


(function ($) {
  Drupal.behaviors.download_tab = {
    attach: function (context, settings) {
      window.onload = function() {
        // Kick off the download of this datastream.
        window.location.href = Drupal.settings.islandora_cartographic_downloads.url;
      };
    }
  }
})(jQuery);