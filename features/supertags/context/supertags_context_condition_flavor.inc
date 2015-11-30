<?php
/**
 * @file
 * Code for the flavors context condition.
 */

/**
 * Expose flavors as a context condition.
 */
class FlavorCondition extends context_condition {
  /**
   * Values to be present in the condition form.
   *
   * @return array
   *   Array of flavor paths.
   */
  public function condition_values() {
    $values = array();

    $vocab = taxonomy_vocabulary_machine_name_load('flavors');
    $tree = taxonomy_get_tree($vocab->vid, 0, NULL, TRUE);

    $values['futurium'] = 'Futurium';

    foreach ($tree as $key => $value) {
      $flavor_term_path = _supertags_term_path($value);
      $values[$flavor_term_path] = $value->name;
    }
    return $values;
  }

  /**
   * Execute.
   */
  public function execute($flavor) {
    foreach ($this->get_contexts($flavor) as $context) {
      $values = $this->fetch_from_context($context, 'values');
      if (in_array($flavor['path'], $values)) {
        $this->condition_met($context, $flavor['path']);
      }
    }
  }

}
