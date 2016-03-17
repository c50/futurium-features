<?php
/**
 * @file
 * Hooks provided by the Futurium Linker module.
 */

/**
 * Allows altering the label in the autocomplete.
 */
function hook_relation_d4eu_label_autocomplete_alter(&$label) {
  // Do whatever with $label.
}

/**
 * Allows altering the content type name in the autocomplete.
 */
function hook_relation_d4eu_content_type_autocomplete_alter(&$content_type) {
  // Do whatever with $content_type.
}

/**
 * Allows altering the query on the autocomplete.
 */
function hook_futurium_d4eu_linker_query_alter(&$query) {
  // Do whatever with $query.
}

/**
 * Allows overriding the relations that are possible.
 */
function hook_futurium_d4eu_linker_possible_relations(&$possible_relations) {
  // Do whatever with $possible_relations.
}
