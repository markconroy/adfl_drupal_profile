<?php
/**
 * @file
 * adfl_block_type_rotating_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function adfl_block_type_rotating_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__rotating_slider';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'revision' => array(
          'weight' => '7',
        ),
        'view_mode' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_bean__rotating_slider'] = $strongarm;

  return $export;
}
