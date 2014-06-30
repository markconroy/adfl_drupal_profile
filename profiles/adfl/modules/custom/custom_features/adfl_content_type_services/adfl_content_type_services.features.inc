<?php
/**
 * @file
 * adfl_content_type_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adfl_content_type_services_ctools_plugin_api($module = NULL, $api = NULL) {
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
function adfl_content_type_services_node_info() {
  $items = array(
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => t('We use this content type to create "Services" pages. We create one page per service. Services are automatically added to the services listing page.'),
      'has_title' => '1',
      'title_label' => t('Service Type'),
      'help' => '',
    ),
  );
  return $items;
}
