<?php
/**
 * @file
 * adfl_block_type_rotating_slider.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function adfl_block_type_rotating_slider_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'rotating_slider';
  $bean_type->label = 'Rotating Slider';
  $bean_type->options = '';
  $bean_type->description = 'We use this block type to create rotating sliders. You create one block per slide.';
  $export['rotating_slider'] = $bean_type;

  return $export;
}
