<?php
/**
 * @file
 * legal_instrument.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function legal_instrument_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function legal_instrument_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function legal_instrument_node_info() {
  $items = array(
    'legal_instrument' => array(
      'name' => t('CMS Instrument'),
      'base' => 'node_content',
      'description' => t('CMS Instrument content type'),
      'has_title' => '1',
      'title_label' => t('Instrument Title (Abbreviation)'),
      'help' => '',
    ),
  );
  return $items;
}
