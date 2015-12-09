<?php

/**
 * @file
 * template.php
 */

function futurium_isa_theme_preprocess_region(&$variables) {
  $region = str_replace('_', '-', $variables['elements']['#region']);
  $wrapper_classes_array[] = $region . '-wrapper';

  $variables['wrapper_classes'] = implode(' ', $wrapper_classes_array);
}



function futurium_isa_theme_preprocess_page(&$variables) {
  unset($variables['navbar_classes_array'][1]);
  $variables['navbar_classes_array'][] = 'container-fullwidth';

  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $variables['content_column_class'] = ' class="container-fullwidth"';
  }

  $variables['navbar_classes_array'][] = 'navbar-inverse';

  $search_form = drupal_get_form('search_form');
  $search_box = drupal_render($search_form);
  $variables['search_box'] = $search_box;

  $item = menu_get_item();

  $panels_callbacks = array(
    'page_manager_page_execute',
    'page_manager_node_view_page',
    'pm_existing_pages_pm_existing_pages_page'
  );
  $variables['content_wrapper'] = !in_array($item['page_callback'], $panels_callbacks);

  $hide_title_paths = array(
    'home',
    'topics',
    'ideas',
    'library',
    'events'
  );
  $variables['show_title'] = !in_array($item['path'], $hide_title_paths);

}

function futurium_isa_theme_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Informative message'),
  );

  // Map Drupal message types to their corresponding Bootstrap classes.
  // @see http://twitter.github.com/bootstrap/components.html#alerts
  $status_class = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
    // Not supported, but in theory a module could send any type of message.
    // @see drupal_set_message()
    // @see theme_status_messages()
    'info' => 'info',
  );

  foreach (drupal_get_messages($display) as $type => $messages) {
    $class = (isset($status_class[$type])) ? ' alert-' . $status_class[$type] : '';
    $output .= "<div class=\"alert alert-block$class\">\n";
    $output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\">&times;</a>\n";

    if (!empty($status_heading[$type])) {
      $output .= '<h4 class="element-invisible">' . $status_heading[$type] . "</h4>\n";
    }

    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }

    $output .= "</div>\n";
  }
  return $output;
}

/*
 *  Form alter to add missing bootstrap classes and role to search form.
 */
function futurium_isa_theme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_form') {
    $form['#attributes']['class'][] = 'navbar-form';
    $form['#attributes']['role'][] = 'search';
  }
}

function futurium_isa_theme_menu_link(array $variables) {
  if ($variables['element']['#original_link']['menu_name'] == 'main-menu' && $variables['element']['#original_link']['link_path'] == 'account') {
    $variables['element']['#localized_options']['attributes']['class'][] = "no-text";
    $variables['element']['#localized_options']['attributes']['class'][] = "glyphicon";
    $variables['element']['#localized_options']['attributes']['class'][] = "glyphicon-user";
  }
  return theme_menu_link($variables);
}
