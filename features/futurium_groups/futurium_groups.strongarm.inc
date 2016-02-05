<?php
/**
 * @file
 * futurium_groups.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function futurium_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__futurium_group';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'node_header' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_w_pic' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'member_count' => array(
          'node_header' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser_w_pic' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'edit_group' => array(
          'node_header' => array(
            'weight' => '52',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '52',
            'visible' => TRUE,
          ),
          'teaser_w_pic' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'join_group' => array(
          'node_header' => array(
            'weight' => '53',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__futurium_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_futurium_group';
  $strongarm->value = '1';
  $export['comment_futurium_group'] = $strongarm;

  return $export;
}
