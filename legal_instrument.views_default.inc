<?php
/**
 * @file
 * legal_instrument.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function legal_instrument_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'legal_instrument_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Legal instruments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CMS Instruments';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_instrument_status',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instrument_status' => 'field_instrument_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Instrument name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_instrument_status']['id'] = 'field_instrument_status';
  $handler->display->display_options['fields']['field_instrument_status']['table'] = 'field_data_field_instrument_status';
  $handler->display->display_options['fields']['field_instrument_status']['field'] = 'field_instrument_status';
  $handler->display->display_options['fields']['field_instrument_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_instrument_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_instrument_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_instrument_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_instrument_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_instrument_status']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'legal_instrument' => 'legal_instrument',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'legal_instrument_listing');
  $handler->display->display_options['path'] = 'legal_instrument/listing';
  $handler->display->display_options['menu']['title'] = 'CMS Instruments';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'legal_instrument_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'CMS Instruments - %timestamp-yyyy%timestamp-mm%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'legal_instrument/export';
  $translatables['legal_instrument_listing'] = array(
    t('Master'),
    t('CMS Instruments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Instrument name'),
    t('Status'),
    t('Page'),
    t('Data export'),
  );
  $export['legal_instrument_listing'] = $view;

  return $export;
}
