<?php
/**
 * @file
 * adfl_content_type_image_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adfl_content_type_image_gallery_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g_basic_info|node|image_gallery|form';
  $field_group->group_name = 'group_g_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_g_basic_info|node|image_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g_gallery_images|node|image_gallery|form';
  $field_group->group_name = 'group_g_gallery_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gallery Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_main_image',
      1 => 'field_gallery_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g-gallery-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_g_gallery_images|node|image_gallery|form'] = $field_group;

  return $export;
}
