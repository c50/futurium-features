<?php
/**
 * @file
 * futurium_relations.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function futurium_relations_relation_default_relation_types() {
  $export = array();
  /*
  $relation_type = new stdClass();
  $relation_type->disabled = FALSE;
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'related';
  $relation_type->label = 'related to';
  $relation_type->reverse_label = 'related';
  $relation_type->directional = 0;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
  0 => 'node:event_d4eu',
  1 => 'node:evidence',
  2 => 'node:ideas',
  );
  $relation_type->target_bundles = array();
  $export['related'] = $relation_type;
   */
  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'implemented_by';
  $relation_type->label = 'implemented by';
  $relation_type->reverse_label = 'to implement';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:future',
  );
  $relation_type->target_bundles = array(
    0 => 'node:ideas',
  );
  $export['implemented_by'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'supports';
  $relation_type->label = 'supports';
  $relation_type->reverse_label = 'supported by';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:evidence',
  );
  $relation_type->target_bundles = array(
    0 => 'node:future',
    1 => 'node:ideas',
  );
  $export['supports'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'to_discuss';
  $relation_type->label = 'to discuss';
  $relation_type->reverse_label = 'to be discussed at';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:event_d4eu',
  );
  $relation_type->target_bundles = array(
    0 => 'node:future',
    1 => 'node:ideas',
  );
  $export['to_discuss'] = $relation_type;

  return $export;
}
