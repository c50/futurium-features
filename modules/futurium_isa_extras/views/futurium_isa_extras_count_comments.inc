<?php
/**
 * @file
 * Definition of example_handler_custom_field
 */

/**
 * Provides a custom views field.
 */
class futurium_isa_extras_count_comments extends views_handler_field_numeric {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    $join = new views_join();
    $join->table = 'comment';
    $join->field = 'nid';
    $join->left_table = 'node';
    $join->left_field = 'nid';
    $join->type = 'INNER';
    $this->query->add_relationship('comment', $join, 'node');

    if (isset($_GET['period'])) {
      $time = '-' . str_replace('_', ' ', $_GET['period']);
      $time = strtotime($time);
      $this->query->add_where(1, 'comment.created', $time, '>=');
    }
    $this->query->add_where(1, 'comment.status', "1", '=');
    $this->query->set_distinct(TRUE, FALSE);

    $this->query->add_field("comment", "nid", 'comment_count', array('function' => 'count'));

  }

  function render($values) {

    $value = $values->comment_count;

    // Hiding should happen before rounding or adding prefix/suffix.
    if ($this->options['hide_empty'] && empty($value) && ($value !== 0 || $this->options['empty_zero'])) {
      return '';
    }

    if (!empty($this->options['set_precision'])) {
      $value = number_format($value, $this->options['precision'], $this->options['decimal'], $this->options['separator']);
    }
    else {
      $remainder = abs($value) - intval(abs($value));
      $value = $value > 0 ? floor($value) : ceil($value);
      $value = number_format($value, 0, '', $this->options['separator']);
      if ($remainder) {
        // The substr may not be locale safe.
        $value .= $this->options['decimal'] . substr($remainder, 2);
      }
    }

    // Should we format as a plural.
    if (!empty($this->options['format_plural'])) {
      $value = format_plural($value, $this->options['format_plural_singular'], $this->options['format_plural_plural']);
    }

    return $this->sanitize_value($this->options['prefix'], 'xss')
      . $this->sanitize_value($value)
      . $this->sanitize_value($this->options['suffix'], 'xss');
  }
}
