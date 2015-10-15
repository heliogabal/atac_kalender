<?php
/**
 * @file
 * attac_kalender.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function attac_kalender_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:gruppe:create event_calendar content'
  $permissions['node:gruppe:create event_calendar content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:create news content'
  $permissions['node:gruppe:create news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any event_calendar content'
  $permissions['node:gruppe:delete any event_calendar content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any news content'
  $permissions['node:gruppe:delete any news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own event_calendar content'
  $permissions['node:gruppe:delete own event_calendar content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own news content'
  $permissions['node:gruppe:delete own news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any event_calendar content'
  $permissions['node:gruppe:update any event_calendar content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any news content'
  $permissions['node:gruppe:update any news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own event_calendar content'
  $permissions['node:gruppe:update own event_calendar content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own news content'
  $permissions['node:gruppe:update own news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
