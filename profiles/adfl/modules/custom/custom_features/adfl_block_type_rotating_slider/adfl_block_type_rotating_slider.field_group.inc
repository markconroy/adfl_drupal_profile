<?php
/**
 * @file
 * adfl_block_type_rotating_slider.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adfl_block_type_rotating_slider_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slider_basic_info|bean|rotating_slider|form';
  $field_group->group_name = 'group_slider_basic_info';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'rotating_slider';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_blurb',
      1 => 'field_link_to',
      2 => 'field_main_image',
      3 => 'label',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slider-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slider_basic_info|bean|rotating_slider|form'] = $field_group;

  return $export;
}
