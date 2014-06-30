<?php
/**
 * @file
 * adfl_temporary_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adfl_temporary_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
