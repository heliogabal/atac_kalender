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

  // Exported permission: 'create termin content'.
  $permissions['create termin content'] = array(
    'name' => 'create termin content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any termin content'.
  $permissions['delete any termin content'] = array(
    'name' => 'delete any termin content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own termin content'.
  $permissions['delete own termin content'] = array(
    'name' => 'delete own termin content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any termin content'.
  $permissions['edit any termin content'] = array(
    'name' => 'edit any termin content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own termin content'.
  $permissions['edit own termin content'] = array(
    'name' => 'edit own termin content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
