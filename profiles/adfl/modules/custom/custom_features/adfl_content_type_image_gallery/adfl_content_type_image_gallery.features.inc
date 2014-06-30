<?php
/**
 * @file
 * adfl_content_type_image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adfl_content_type_image_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function adfl_content_type_image_gallery_node_info() {
  $items = array(
    'image_gallery' => array(
      'name' => t('Image Gallery'),
      'base' => 'node_content',
      'description' => t('We use this content type to create image gallery pages. We add one image to the "Album Cover" and then as many as we wish to the "Gallery Images"'),
      'has_title' => '1',
      'title_label' => t('Gallery Name'),
      'help' => '',
    ),
  );
  return $items;
}
