<?php
/**
 * @file
 * adfl_block_type_rotating_slider.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function adfl_block_type_rotating_slider_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-rotating_slider-field_blurb'
  $field_instances['bean-rotating_slider-field_blurb'] = array(
    'bundle' => 'rotating_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Input a short text to accompany this slide.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_blurb',
    'label' => 'Blurb',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-rotating_slider-field_link_to'
  $field_instances['bean-rotating_slider-field_link_to'] = array(
    'bundle' => 'rotating_slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What page do you want this slide to link to. Set the text to appear in the "Title" field and the link in the "Url" field.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_link_to',
    'label' => 'Link To',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-rotating_slider-field_main_image'
  $field_instances['bean-rotating_slider-field_main_image'] = array(
    'bundle' => 'rotating_slider',
    'deleted' => 0,
    'description' => 'Add the image that you want to appear on this slide.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_main_image',
    'label' => 'Main Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/slider',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '2000x2000',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add the image that you want to appear on this slide.');
  t('Blurb');
  t('Input a short text to accompany this slide.');
  t('Link To');
  t('Main Image');
  t('What page do you want this slide to link to. Set the text to appear in the "Title" field and the link in the "Url" field.');

  return $field_instances;
}
