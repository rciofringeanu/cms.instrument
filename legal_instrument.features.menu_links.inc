<?php
/**
 * @file
 * legal_instrument.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function legal_instrument_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_manage-instrument-status:admin/structure/taxonomy/instrument_status
  $menu_links['main-menu_manage-instrument-status:admin/structure/taxonomy/instrument_status'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/instrument_status',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage instrument status',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-instrument-status:admin/structure/taxonomy/instrument_status',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_identifier' => 'main-menu_countries:<front>',
  );
  // Exported menu link: main-menu_manage-instrument-type:admin/structure/taxonomy/instrument_type
  $menu_links['main-menu_manage-instrument-type:admin/structure/taxonomy/instrument_type'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/instrument_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage instrument type',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-instrument-type:admin/structure/taxonomy/instrument_type',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_identifier' => 'main-menu_countries:<front>',
  );
  // Exported menu link: main-menu_manage-instruments:legal_instrument/listing
  $menu_links['main-menu_manage-instruments:legal_instrument/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'legal_instrument/listing',
    'router_path' => 'legal_instrument/listing',
    'link_title' => 'Manage instruments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-instruments:legal_instrument/listing',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_identifier' => 'main-menu_countries:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage instrument status');
  t('Manage instrument type');
  t('Manage instruments');


  return $menu_links;
}
