<?php
/**
 * @file
 * adfl_flexslider_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adfl_flexslider_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}
