<?php
/**
 * @file
 * legal_instrument.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function legal_instrument_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_legal_instrument';
  $strongarm->value = 0;
  $export['comment_anonymous_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_legal_instrument';
  $strongarm->value = 1;
  $export['comment_default_mode_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_legal_instrument';
  $strongarm->value = '50';
  $export['comment_default_per_page_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_legal_instrument';
  $strongarm->value = 1;
  $export['comment_form_location_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_legal_instrument';
  $strongarm->value = '1';
  $export['comment_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_legal_instrument';
  $strongarm->value = '1';
  $export['comment_preview_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_legal_instrument';
  $strongarm->value = 1;
  $export['comment_subject_field_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__legal_instrument';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'plans' => array(
          'default' => array(
            'weight' => '100',
            'visible' => TRUE,
          ),
        ),
        'meetings' => array(
          'default' => array(
            'weight' => '100',
            'visible' => TRUE,
          ),
        ),
        'projects' => array(
          'default' => array(
            'weight' => '100',
            'visible' => TRUE,
          ),
        ),
        'publications' => array(
          'default' => array(
            'weight' => '100',
            'visible' => TRUE,
          ),
        ),
        'species' => array(
          'default' => array(
            'weight' => '100',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_legal_instrument';
  $strongarm->value = 1;
  $export['i18n_node_extended_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_legal_instrument';
  $strongarm->value = array();
  $export['i18n_node_options_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_legal_instrument';
  $strongarm->value = '0';
  $export['language_content_type_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_legal_instrument';
  $strongarm->value = array();
  $export['menu_options_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_legal_instrument';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_legal_instrument';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_legal_instrument';
  $strongarm->value = '0';
  $export['node_preview_legal_instrument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_legal_instrument';
  $strongarm->value = 0;
  $export['node_submitted_legal_instrument'] = $strongarm;

  return $export;
}
