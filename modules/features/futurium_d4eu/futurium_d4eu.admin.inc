<?php

/**
 * @file
 * Configuration pages for Futurium D4EU module.
 */

/**
 * Callback function for admin/settings/futurium_d4eu.
 *
 * Display the settings form.
 */
function futurium_d4eu_settings_form($form, $form_state) {
  $form = array();

  // Integer field for the desired number of characters.
  $form['tags_desired_width'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('tags_desired_width', 30),
    '#title' => t('Maximum Super tags width in filter boxes'),
    '#description' => t('Type an integer value'),
    '#size' => 2,
    '#maxlenght' => 3,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  return system_settings_form($form);
}
