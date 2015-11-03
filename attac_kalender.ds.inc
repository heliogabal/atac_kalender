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
  $ds_fieldsetting->id = 'node|event_calendar|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'adresskarte' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:27:"entityreference_entity_view";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:9:"view_mode";s:6:"teaser";s:5:"links";i:0;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:20:"node:field_termin_wo";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event_calendar|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
    'field_termin_wo' => array(
      'formatter_settings' => array(
        'ft' => array(),
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
  $ds_fieldsetting->id = 'node|ort|adresse';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ort';
  $ds_fieldsetting->view_mode = 'adresse';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_adresse' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|ort|adresse'] = $ds_fieldsetting;

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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ort|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ort';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_koordinaten' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|ort|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function attac_kalender_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'adresskarte';
  $ds_field->label = 'Adresskarte';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'event_calendar|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['adresskarte'] = $ds_field;

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
        0 => 'title',
        1 => 'field_termin_beschreibung',
        2 => 'field_termin_wann',
        3 => 'field_termin_was',
        4 => 'field_termin_wo',
        5 => 'adresskarte',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_termin_beschreibung' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'adresskarte' => 'ds_content',
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
        7 => 'field_termin_was',
        8 => 'field_termin_wann',
        9 => 'field_termin_wo',
        10 => 'og_group_ref',
        12 => 'field_themen',
      ),
      'hidden' => array(
        11 => 'group_content_access',
        13 => '_add_existing_field',
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
      'field_termin_was' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_content_access' => 'hidden',
      'field_themen' => 'ds_content',
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
        0 => 'title',
        1 => 'field_untertitel',
        2 => 'field_news_bild',
        3 => 'body',
        4 => 'field_termin_wann',
        5 => 'field_termin_was',
        6 => 'field_termin_wo',
        7 => 'field_news_anhang',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_untertitel' => 'central',
      'field_news_bild' => 'central',
      'body' => 'central',
      'field_termin_wann' => 'central',
      'field_termin_was' => 'central',
      'field_termin_wo' => 'central',
      'field_news_anhang' => 'central',
    ),
    'limit' => array(
      'field_termin_wann' => '1',
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
        3 => 'redirect',
        5 => 'path',
        6 => 'field_untertitel',
        7 => 'group_infos',
        8 => 'body',
        9 => 'group_bilder',
        10 => 'field_termin_wann',
        11 => 'group_dateien',
        12 => 'field_termin_was',
        13 => 'field_termin_wo',
        14 => 'field_themen',
        15 => 'og_group_ref',
        16 => 'group_content_access',
        17 => 'field_news_bild',
        18 => 'flag',
        19 => 'field_news_anhang',
      ),
      'hidden' => array(
        4 => 'twitter',
        20 => 'field_facebook_post',
        21 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_horizontal' => 'ds_content',
      'group_text' => 'ds_content',
      'title' => 'ds_content',
      'redirect' => 'ds_content',
      'twitter' => 'hidden',
      'path' => 'ds_content',
      'field_untertitel' => 'ds_content',
      'group_infos' => 'ds_content',
      'body' => 'ds_content',
      'group_bilder' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'group_dateien' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'field_themen' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_content_access' => 'ds_content',
      'field_news_bild' => 'ds_content',
      'flag' => 'ds_content',
      'field_news_anhang' => 'ds_content',
      'field_facebook_post' => 'hidden',
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
        1 => 'field_news_bild',
        2 => 'body',
        3 => 'field_termin_wo',
        4 => 'field_news_anhang',
        5 => 'field_termin_wann',
        6 => 'field_termin_was',
        7 => 'node_link',
        8 => 'group_panelheading',
        9 => 'title',
        10 => 'group_panelbody',
        11 => 'field_untertitel',
        12 => 'group_footer',
      ),
    ),
    'fields' => array(
      'group_panel' => 'ds_content',
      'field_news_bild' => 'ds_content',
      'body' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'field_news_anhang' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'node_link' => 'ds_content',
      'group_panelheading' => 'ds_content',
      'title' => 'ds_content',
      'group_panelbody' => 'ds_content',
      'field_untertitel' => 'ds_content',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_panel',
        1 => 'field_news_bild',
        2 => 'field_termin_wann',
        3 => 'field_termin_wo',
        4 => 'field_termin_was',
        5 => 'group_panelheading',
        6 => 'node_link',
        7 => 'body',
        8 => 'title',
        9 => 'group_panelbody',
        10 => 'group_footer',
        11 => 'field_untertitel',
      ),
    ),
    'fields' => array(
      'group_panel' => 'ds_content',
      'field_news_bild' => 'ds_content',
      'field_termin_wann' => 'ds_content',
      'field_termin_wo' => 'ds_content',
      'field_termin_was' => 'ds_content',
      'group_panelheading' => 'ds_content',
      'node_link' => 'ds_content',
      'body' => 'ds_content',
      'title' => 'ds_content',
      'group_panelbody' => 'ds_content',
      'group_footer' => 'ds_content',
      'field_untertitel' => 'ds_content',
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
  $export['node|news|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ort|adresse';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ort';
  $ds_layout->view_mode = 'adresse';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_adresse',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_adresse' => 'ds_content',
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
  $export['node|ort|adresse'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ort|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ort';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_adresse',
        3 => 'field_koordinaten',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_adresse' => 'ds_content',
      'field_koordinaten' => 'ds_content',
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
  $export['node|ort|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ort|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ort';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_horizontal',
        1 => 'title',
        2 => 'body',
        3 => 'field_adresse',
        4 => 'field_koordinaten',
        5 => 'redirect',
        6 => 'path',
        8 => 'group_inhalt',
        9 => 'group_adresse',
      ),
      'hidden' => array(
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_horizontal' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_adresse' => 'ds_content',
      'field_koordinaten' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'group_inhalt' => 'ds_content',
      'group_adresse' => 'ds_content',
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
  $export['node|ort|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ort|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ort';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_koordinaten',
      ),
    ),
    'fields' => array(
      'field_koordinaten' => 'ds_content',
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
  $export['node|ort|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function attac_kalender_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'adresse';
  $ds_view_mode->label = 'Adresse';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['adresse'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'kalender_popup';
  $ds_view_mode->label = 'Kalender Popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['kalender_popup'] = $ds_view_mode;

  return $export;
}
