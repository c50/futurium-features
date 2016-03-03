<?php
/**
 * @file
 * Hooks provided by the Futurium Linkafter module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Allows altering the label in the autocomplete.
 */
function hook_relation_label_autocomplete_alter(&$label) {
  // Do whatever with $label.
}

/**
 * Allows altering the label in the autocomplete.
 */
function hook_relation_label_autocomplete_alter(&$content_type) {
  // Do whatever with $content_type.
}

/**
 * Allows altering the query on the autocomplete.
 */
function hook_futurium_linker_query_alter(&$query) {
  // Do whatever with $query.
}

/**
 * Allows overriding the relations that are possible.
 */
function hook_futurium_linker_possible_relations(&$possible_relations) {
  // Do whatever with $possible_relations.
}
