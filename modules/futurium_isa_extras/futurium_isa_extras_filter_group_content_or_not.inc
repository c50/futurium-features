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

    $form['value']['#tree'] = TRUE;

    $form['value']['value'] = array(
      '#type' => 'checkbox',
      '#title' => $this->value_value,
      '#options' => $this->value_options,
      '#default_value' => $this->value['value'],
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

    $view = $this->view;

    $base_field = "$view->base_table.$view->base_field";
    $field = "og_membership_$this->table_alias.$this->real_field";
    $gids = og_get_entity_groups();

    $public_groups = db_select('field_data_group_access')
      ->fields('field_data_group_access', array('entity_id'))
      ->condition('group_access_value', 0, '=');

    $public_nids = db_select('field_data_group_content_access')
      ->fields('field_data_group_content_access', array('entity_id'))
      ->condition('entity_type', $view->base_table, '=')
      ->condition('group_content_access_value', 1, '=');

    $private_nids = db_select('field_data_group_content_access')
      ->fields('field_data_group_content_access', array('entity_id'))
      ->condition('entity_type', $view->base_table, '=')
      ->condition('group_content_access_value', 2, '=');

    if (isset($this->value['value']) && $this->value['value'] == 1) {

      $q = db_or();

      if (!empty($gids['node'])) {
        $q->condition($field, $gids['node'], 'IN');           // In my groups
      }

      if (!empty($public_groups)) {
        $q->condition(db_and()
          ->condition($field, $public_groups, 'IN')           // Public group content
          ->condition($base_field, $private_nids, 'NOT IN')   // but not content set to "Private"
        );
      }

      if (!empty($public_nids)) {
        $q->condition($base_field, $public_nids, 'IN');       // Public content
      }

      $q->where("$field IS NULL");                            // Content without Group

      $this->query->add_where(
        $this->options['group'],
        $q
      );

      if (!$this->query->distinct) {
        $this->query->set_distinct(TRUE, FALSE);
      }

    }
  }
}
