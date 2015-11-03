<?php
/**
 * @file
 * attac_kalender.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function attac_kalender_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adresse|node|ort|form';
  $field_group->group_name = 'group_adresse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ort';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Adresse',
    'weight' => '10',
    'children' => array(
      0 => 'field_adresse',
      1 => 'field_koordinaten',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-adresse field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_adresse|node|ort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilder|node|news|form';
  $field_group->group_name = 'group_bilder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Bilder',
    'weight' => '4',
    'children' => array(
      0 => 'field_news_bild',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bilder field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bilder|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dateien|node|news|form';
  $field_group->group_name = 'group_dateien';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Dateien',
    'weight' => '5',
    'children' => array(
      0 => 'field_news_anhang',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dateien field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dateien|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|news|kalender_popup';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'kalender_popup';
  $field_group->parent_name = 'group_panel';
  $field_group->data = array(
    'label' => 'Panel Footer',
    'weight' => '10',
    'children' => array(
      0 => 'field_termin_wann',
      1 => 'field_termin_was',
      2 => 'node_link',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel Footer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_footer|node|news|kalender_popup'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|news|teaser';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_panel';
  $field_group->data = array(
    'label' => 'Panel Footer',
    'weight' => '9',
    'children' => array(
      0 => 'field_termin_wann',
      1 => 'field_termin_wo',
      2 => 'field_termin_was',
      3 => 'node_link',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel Footer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_footer|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|event_calendar|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tab',
    'weight' => '0',
    'children' => array(
      0 => 'group_info',
      1 => 'group_text',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|event_calendar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|news|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tab',
    'weight' => '0',
    'children' => array(
      0 => 'group_text',
      1 => 'group_bilder',
      2 => 'group_infos',
      3 => 'group_dateien',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|ort|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ort';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tab',
    'weight' => '0',
    'children' => array(
      0 => 'group_inhalt',
      1 => 'group_adresse',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|ort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infos|node|news|form';
  $field_group->group_name = 'group_infos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Infos',
    'weight' => '2',
    'children' => array(
      0 => 'field_termin_wann',
      1 => 'field_termin_wo',
      2 => 'field_termin_was',
      3 => 'og_group_ref',
      4 => 'group_content_access',
      5 => 'field_themen',
      6 => 'flag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Infos',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-infos field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_infos|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|event_calendar|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_termin_wo',
      1 => 'field_termin_wann',
      2 => 'field_termin_was',
      3 => 'og_group_ref',
      4 => 'field_themen',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_info|node|event_calendar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inhalt|node|ort|form';
  $field_group->group_name = 'group_inhalt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ort';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inhalt field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_inhalt|node|ort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panelbody|node|news|kalender_popup';
  $field_group->group_name = 'group_panelbody';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'kalender_popup';
  $field_group->parent_name = 'group_panel';
  $field_group->data = array(
    'label' => 'Panel Body',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'field_news_bild',
      2 => 'field_news_anhang',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel Body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-body',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_panelbody|node|news|kalender_popup'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panelbody|node|news|teaser';
  $field_group->group_name = 'group_panelbody';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_panel';
  $field_group->data = array(
    'label' => 'Panel Body',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'field_news_bild',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel Body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-body',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_panelbody|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panelheading|node|news|kalender_popup';
  $field_group->group_name = 'group_panelheading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'kalender_popup';
  $field_group->parent_name = 'group_panel';
  $field_group->data = array(
    'label' => 'Panel Heading',
    'weight' => '7',
    'children' => array(
      0 => 'field_untertitel',
      1 => 'title',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel Heading',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-heading',
        'wrapper' => 'header',
      ),
    ),
  );
  $export['group_panelheading|node|news|kalender_popup'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panelheading|node|news|teaser';
  $field_group->group_name = 'group_panelheading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_panel';
  $field_group->data = array(
    'label' => 'Panel Heading',
    'weight' => '7',
    'children' => array(
      0 => 'field_untertitel',
      1 => 'title',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel Heading',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-heading',
        'wrapper' => 'header',
      ),
    ),
  );
  $export['group_panelheading|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel|node|news|kalender_popup';
  $field_group->group_name = 'group_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'kalender_popup';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Panel',
    'weight' => '0',
    'children' => array(
      0 => 'group_panelbody',
      1 => 'group_panelheading',
      2 => 'group_footer',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel panel-primary card',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_panel|node|news|kalender_popup'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel|node|news|teaser';
  $field_group->group_name = 'group_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Panel',
    'weight' => '0',
    'children' => array(
      0 => 'group_panelbody',
      1 => 'group_panelheading',
      2 => 'group_footer',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Panel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel panel-primary card news',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_panel|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|event_calendar|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '1',
    'children' => array(
      0 => 'field_termin_beschreibung',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Inhalt',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-text field-group-tab',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_text|node|event_calendar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|news|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_untertitel',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_text|node|news|form'] = $field_group;

  return $export;
}
