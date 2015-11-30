<?php
/**
 * @file
 * Code for the flavors landing page context condition.
 */

/**
 * Expose flavor paths as a context condition.
 */
class FlavorLandingPageCondition extends context_condition {
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
      if (in_array($flavor['path'], $values) && arg(0) != 'user' && arg(1) == NULL) {
        $this->condition_met($context, $flavor['path']);
      }
    }
  }

}
