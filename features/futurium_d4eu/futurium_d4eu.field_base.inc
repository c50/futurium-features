<?php
/**
 * @file
 * futurium_d4eu.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function futurium_d4eu_field_default_field_bases() {
    $field_bases = array();

    // Exported field_base: 'field_rate_comment'
    $field_bases['field_rate_comment'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_rate_comment',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 1,
        'module' => 'fivestar',
        'settings' => array(
            'axis' => 'vote',
            'entity_translation_sync' => FALSE,
        ),
        'translatable' => 0,
        'type' => 'fivestar',
    );

    // Exported field_base: 'field_rate_ideas'
    $field_bases['field_rate_ideas'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_rate_ideas',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 1,
        'module' => 'fivestar',
        'settings' => array(
            'axis' => 'vote',
            'entity_translation_sync' => FALSE,
        ),
        'translatable' => 0,
        'type' => 'fivestar',
    );

    return $field_bases;
}
