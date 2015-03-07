<?php
/**
 * @file
 * attac_kalender.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function attac_kalender_taxonomy_default_vocabularies() {
  return array(
    'arbeitsgruppen' => array(
      'name' => 'Arbeitsgruppen',
      'machine_name' => 'arbeitsgruppen',
      'description' => 'Kategorisierung nach AGs, um z.B. themenspezifische Artikel und gefilterte Termine zu ermöglichen',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'terminart' => array(
      'name' => 'Terminart',
      'machine_name' => 'terminart',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
