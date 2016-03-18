<?php
/**
 * @file
 * futurium_d4eu.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function futurium_d4eu_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'has_evidence';
  $relation_type->label = 'has evidence';
  $relation_type->reverse_label = 'is an evidence for';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:blog_post',
    1 => 'node:document',
    2 => 'node:event_d4eu',
    3 => 'node:ideas',
    4 => 'node:issue',
    5 => 'node:links',
    6 => 'node:poll',
    7 => 'node:video_d4eu',
  );
  $relation_type->target_bundles = array(
    0 => 'node:blog_post',
    1 => 'node:document',
    2 => 'node:event_d4eu',
    3 => 'node:ideas',
    4 => 'node:issue',
    5 => 'node:links',
    6 => 'node:poll',
    7 => 'node:video_d4eu',
  );
  $export['has_evidence'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'related_to';
  $relation_type->label = 'related to';
  $relation_type->reverse_label = 'related to';
  $relation_type->directional = 0;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 1;
  $relation_type->max_arity = 0;
  $relation_type->source_bundles = array(
    0 => 'node:blog_post',
    1 => 'node:document',
    2 => 'node:event_d4eu',
    3 => 'node:ideas',
    4 => 'node:issue',
    5 => 'node:links',
    6 => 'node:poll',
    7 => 'node:video_d4eu',
  );
  $relation_type->target_bundles = array();
  $export['related_to'] = $relation_type;

  return $export;
}
