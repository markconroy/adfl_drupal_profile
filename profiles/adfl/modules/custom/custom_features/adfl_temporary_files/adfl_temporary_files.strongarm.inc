<?php
/**
 * @file
 * adfl_temporary_files.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function adfl_temporary_files_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '.tmp';
  $export['file_temporary_path'] = $strongarm;

  return $export;
}
