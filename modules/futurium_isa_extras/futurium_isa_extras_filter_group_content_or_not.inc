<?php

class futurium_isa_extras_filter_group_content_or_not extends views_handler_filter_numeric {

  var $always_multiple = FALSE;
  var $no_operator = TRUE;

  function construct() {
    parent::construct();
    $this->value_value = t("Show content from the current logged in user groups and content that doesn't belong to a group.");
    $this->value_options = array(
      1 => t('Yes'),
      0 => t('No')
    );
  }

  function operator_form(&$form, &$form_state) {
    $form['operator'] = array();
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['value']['default'] = 1;
    return $options;
  }

  function can_expose() {
    return FALSE;
  }

  function accept_exposed_input($input) {
    return FALSE;
  }

  function value_form(&$form, &$form_state) {

    $form['value'] = array(
      '#type' => 'checkbox',
      '#title' => $this->value_value,
      '#options' => $this->value_options,
      '#default_value' => $this->value,
      '#access' => !user_is_anonymous()
    );

  }

  function admin_summary() {
    if ($this->is_a_group()) {
      return t('grouped');
    }
    if (!empty($this->options['exposed'])) {
      return t('exposed');
    }

    return;
  }

  function query() {
    $this->ensure_my_table();

    $field = "og_membership_$this->table_alias.$this->real_field";
    $gids = og_get_entity_groups();

    // Private / Public Group

    if (isset($gids['node']) && isset($this->value) && $this->value == 1) {
      $this->query->add_where(
        $this->options['group'],
        db_or()
          ->condition($field, $gids['node'], 'IN')
          ->condition($field, $gids['node'], 'IS NULL')
      );
    }
    if (!isset($gids['node']) && isset($this->value) && $this->value == 1) {
      $this->query->add_where(
        $this->options['group'],
        db_or()
          ->condition($field, array(), 'IS NULL')
      );
    }



  }
}
