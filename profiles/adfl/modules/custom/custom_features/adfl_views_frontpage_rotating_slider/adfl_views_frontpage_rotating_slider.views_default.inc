<?php
/**
 * @file
 * adfl_views_frontpage_rotating_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function adfl_views_frontpage_rotating_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_rotating_slider';
  $view->description = 'A view to create a block on the frontpage with a rotating slider.';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Frontpage Rotating Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'adfl_flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: Link To */
  $handler->display->display_options['fields']['field_link_to']['id'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to']['table'] = 'field_data_field_link_to';
  $handler->display->display_options['fields']['field_link_to']['field'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to']['label'] = '';
  $handler->display->display_options['fields']['field_link_to']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to']['type'] = 'link_url';
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_to]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Main Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['alter']['path'] = '[field_link_to]';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'frontpage_rotating_slider',
    'image_link' => '',
  );
  /* Field: Block: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  /* Field: Block: Link To */
  $handler->display->display_options['fields']['field_link_to_1']['id'] = 'field_link_to_1';
  $handler->display->display_options['fields']['field_link_to_1']['table'] = 'field_data_field_link_to';
  $handler->display->display_options['fields']['field_link_to_1']['field'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_1']['click_sort_column'] = 'url';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotating_slider' => 'rotating_slider',
  );

  /* Display: Block: Frontpage Slider */
  $handler = $view->new_display('block', 'Block: Frontpage Slider', 'block');
  $handler->display->display_options['block_description'] = 'Frontpage Slider';
  $export['frontpage_rotating_slider'] = $view;

  return $export;
}
