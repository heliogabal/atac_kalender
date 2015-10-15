<?php
/**
 * @file
 * attac_kalender.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function attac_kalender_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_untertitel' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|kalender_popup';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'kalender_popup';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => 'read-more',
        'ft' => array(),
      ),
    ),
  );
  $export['node|news|kalender_popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'panel-title',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'more-link',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_untertitel' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'h3',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ort|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ort';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_koordinaten' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|ort|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function attac_kalender_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_termin_wo',
        1 => 'field_termin_wann',
        2 => 'field_termin_was',
        3 => 'field_termin_beschreibung',
      ),
    ),
    'fields' => array(
      'field_termin_wo' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'field_termin_beschreibung' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|event_calendar|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_termin_beschreibung',
        2 => 'group_horizontal',
        3 => 'group_text',
        4 => 'group_info',
        5 => 'redirect',
        6 => 'path',
        8 => 'field_termin_was',
        9 => 'field_termin_wann',
        10 => 'field_termin_wo',
        11 => 'og_group_ref',
      ),
      'hidden' => array(
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_termin_beschreibung' => 'ds_content',
      'group_horizontal' => 'ds_content',
      'group_text' => 'ds_content',
      'group_info' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'field_termin_was' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'og_group_ref' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|event_calendar|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_untertitel',
        1 => 'field_news_bild',
        2 => 'field_termin_wann',
        3 => 'field_termin_was',
        4 => 'body',
        5 => 'field_news_anhang',
        6 => 'field_termin_wo',
      ),
    ),
    'fields' => array(
      'field_untertitel' => 'central',
      'field_news_bild' => 'central',
      'field_termin_wann' => 'central',
      'field_termin_was' => 'central',
      'body' => 'central',
      'field_news_anhang' => 'central',
      'field_termin_wo' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_horizontal',
        1 => 'group_text',
        2 => 'title',
        3 => 'group_infos',
        4 => 'field_untertitel',
        5 => 'body',
        6 => 'group_bilder',
        7 => 'group_dateien',
        8 => 'field_termin_wann',
        9 => 'redirect',
        10 => 'field_news_anhang',
        11 => 'field_termin_was',
        12 => 'path',
        13 => 'field_termin_wo',
        14 => 'og_group_ref',
        15 => 'group_content_access',
        16 => 'field_news_bild',
      ),
      'hidden' => array(
        17 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_horizontal' => 'ds_content',
      'group_text' => 'ds_content',
      'title' => 'ds_content',
      'group_infos' => 'ds_content',
      'field_untertitel' => 'ds_content',
      'body' => 'ds_content',
      'group_bilder' => 'ds_content',
      'group_dateien' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'redirect' => 'ds_content',
      'field_news_anhang' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'path' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_content_access' => 'ds_content',
      'field_news_bild' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|news|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|kalender_popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'kalender_popup';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_panel',
        1 => 'field_termin_wo',
        2 => 'field_news_bild',
        3 => 'field_termin_wann',
        4 => 'body',
        5 => 'field_termin_was',
        6 => 'node_link',
        7 => 'group_panelheading',
        8 => 'title',
        9 => 'field_untertitel',
        10 => 'group_panelbody',
        11 => 'group_footer',
      ),
    ),
    'fields' => array(
      'group_panel' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'field_news_bild' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'body' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'node_link' => 'ds_content',
      'group_panelheading' => 'ds_content',
      'title' => 'ds_content',
      'field_untertitel' => 'ds_content',
      'group_panelbody' => 'ds_content',
      'group_footer' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|kalender_popup'] = $ds_layout;

  return $export;
}
