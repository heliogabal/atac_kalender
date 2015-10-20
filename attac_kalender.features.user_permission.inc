<?php
/**
 * @file
 * attac_kalender.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function attac_kalender_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event_calendar content'.
  $permissions['create event_calendar content'] = array(
    'name' => 'create event_calendar content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ort content'.
  $permissions['create ort content'] = array(
    'name' => 'create ort content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_calendar content'.
  $permissions['delete any event_calendar content'] = array(
    'name' => 'delete any event_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ort content'.
  $permissions['delete any ort content'] = array(
    'name' => 'delete any ort content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_calendar content'.
  $permissions['delete own event_calendar content'] = array(
    'name' => 'delete own event_calendar content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ort content'.
  $permissions['delete own ort content'] = array(
    'name' => 'delete own ort content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in terminart'.
  $permissions['delete terms in terminart'] = array(
    'name' => 'delete terms in terminart',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in themen'.
  $permissions['delete terms in themen'] = array(
    'name' => 'delete terms in themen',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event_calendar content'.
  $permissions['edit any event_calendar content'] = array(
    'name' => 'edit any event_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ort content'.
  $permissions['edit any ort content'] = array(
    'name' => 'edit any ort content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_calendar content'.
  $permissions['edit own event_calendar content'] = array(
    'name' => 'edit own event_calendar content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ort content'.
  $permissions['edit own ort content'] = array(
    'name' => 'edit own ort content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in terminart'.
  $permissions['edit terms in terminart'] = array(
    'name' => 'edit terms in terminart',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in themen'.
  $permissions['edit terms in themen'] = array(
    'name' => 'edit terms in themen',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
