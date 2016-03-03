<?php
/**
 * @file
 * template.php
 */

function futurium_isa_theme_preprocess_html(&$variables) {
  $item = menu_get_item();
  if (substr($item['path'], 0, 8) == 'node/add') {
    $content_type = str_replace('node/add/', "", $item['path']);
    $class = 'node-type-' . str_replace("_", "-", $content_type);
    $variables['classes_array'][] = $class;
  }

  if ($item['path'] == 'node/%/graph') {
    $nid = arg(1);
    $obj = node_load($nid);
    $class = 'node-type-' . str_replace("_", "-", $obj->type);
    $variables['classes_array'][] = $class;
  }
}

/**
 * Implements hook_preprocess_region().
 */
function futurium_isa_theme_preprocess_region(&$variables) {
  $region = str_replace('_', '-', $variables['elements']['#region']);
  $wrapper_classes_array[] = $region . '-wrapper';

  $variables['wrapper_classes'] = implode(' ', $wrapper_classes_array);
}

function futurium_isa_theme_preprocess_page(&$variables) {

  $item = menu_get_item();

  if (isset($_GET['period'])) {
    if ($_GET['q'] == 'analytics') {
      $period = str_replace('1_', ' ', $_GET['period']);
      $period = str_replace('_', ' ', $period);

      $title = drupal_get_title();
      $title .= ' - Last ' . $period;

      drupal_set_title($title);
    }
  }

  if (!user_is_logged_in()) {
    unset($variables['tabs']);
  }

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

  $search_form = drupal_get_form('search_form');
  $search_box = drupal_render($search_form);
  $variables['search_box'] = $search_box;

  $panels_callbacks = array(
    'page_manager_page_execute',
    'page_manager_node_view_page',
    'page_manager_user_view_page',
    'page_manager_user_edit_page',
    'page_manager_node_add',
    'page_manager_node_edit',
    'page_manager_term_view_page',
    'entity_translation_edit_page',
    'user_pages_user_users',
    'user_pages_user_user_login',
    'user_pages_user_user_register',
    'user_pages_user_user_password',
  );

  $variables['content_wrapper'] = !in_array($item['page_callback'], $panels_callbacks, TRUE);

  $variables['show_title'] = $variables['content_wrapper'];

}

/**
 * Implements hook_preprocess_collapsible_user_block().
 */
function futurium_isa_theme_preprocess_collapsible_user_block(&$vars) {
  if (user_is_logged_in()) {
    $vars['account']['picture']['image_style'] = 'user_picture_small';
    $vars['account']['picture']['class'] = array('img-circle', 'logged-in-user-pic');
  }
}

/**
 * Implements hook_status_messages().
 */
function futurium_isa_theme_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Informative message'),
  );

  $status_class = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
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

/**
 * Implements hook_form_alter().
 *
 * Form alter to add missing bootstrap classes and role to search form.
 */
function futurium_isa_theme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_form') {
    $form['#attributes']['class'][] = 'navbar-form';
    $form['#attributes']['role'][] = 'search';
  }
}

/**
 * Implements hook_menu_link().
 *
 * Adds classes to user account menu item.
 */
function futurium_isa_theme_menu_link(array $variables) {

  $class = str_replace(" ", "-", strtolower($variables['element']['#title']));

  $variables['element']['#attributes']['class'][] = 'menu-item';
  $variables['element']['#attributes']['class'][] = $class;

  // Add stats glyphicon.
  if ($variables['element']['#original_link']['menu_name'] == 'main-menu' &&
      $variables['element']['#original_link']['link_path'] == 'analytics') {
    $variables['element']['#localized_options']['html'] = TRUE;
    $variables['element']['#title'] = '<span class="glyphicons-signal"></span> ' . t("Stats");
  }

  // Remove active class from parent if in sub-menu pages.
  if ($variables['element']['#original_link']['menu_name'] == 'menu-user-tabs' ||
      $variables['element']['#original_link']['menu_name'] == 'menu-group-tabs') {
    if ($variables['element']['#href'] != $_GET['q']) {
      if (isset($variables['element']['#localized_options']['attributes']['class'])){
        $active_class_key = array_search('active',$variables['element']['#localized_options']['attributes']['class']);
        unset($variables['element']['#localized_options']['attributes']['class'][$active_class_key]);
      }
    }
  }

  return theme_menu_link($variables);
}

/**
 * Implements hook_date_display_range().
 */
function futurium_isa_theme_date_display_range(&$variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];

  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];

  $start_date_obj = $variables['dates']['value']['db']['object'];
  $end_date_obj = $variables['dates']['value2']['db']['object'];

  $start_day = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'j');
  $end_day   = format_date($end_date_obj->originalTime, $type = 'custom', $format = 'j');

  $start_month = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'F');
  $end_month   = format_date($end_date_obj->originalTime, $type = 'custom', $format = 'F');

  $start_year = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'Y');
  $end_year   = format_date($end_date_obj->originalTime, $type = 'custom', $format = 'Y');

  $start_hour = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'H:i');
  $end_hour = format_date($end_date_obj->originalTime, $type = 'custom', $format = 'H:i');

  $string = '!start-day !start-month !start-year - !start-hour to !end-day !end-month !end-year !end-hour';

  // Same month and year.
  if ($start_day == $end_day && $start_month == $end_month && $start_year == $end_year) {
    // Handled by theme_date_display_single().
    return;
  }

  if ($start_day != $end_day && $start_month == $end_month && $start_year == $end_year) {
    $string = '!start-day - !end-day !start-month !start-year - !start-hour - !end-hour';
  }

  // Same year.
  if ($start_day == $end_day && $start_month != $end_month && $start_year == $end_year) {
    $string = '!start-day !start-month - !end-day !end-month !start-year - !start-hour - !end-hour';
  }

  if ($start_day != $end_day && $start_month != $end_month && $start_year == $end_year) {
    $string = '!start-day !start-month - !end-day !end-month !start-year - !start-hour - !end-hour';
  }

  // Different years.
  if ($start_day == $end_day && $start_month != $end_month && $start_year != $end_year) {
    $string = '!start-day !start-month !start-year - !start-hour - !end-day !end-month !end-year !end-hour';
  }

  if ($start_day != $end_day && $start_month != $end_month && $start_year != $end_year) {
    $string = '!start-day !start-month !start-year - !start-hour - !end-day !end-month !end-year !end-hour';
  }

  $date_vars = array(
    '!start-day' => $start_day,
    '!end-day' => $end_day,
    '!start-month' => $start_month,
    '!end-month' => $end_month,
    '!start-year' => $start_year,
    '!end-year' => $end_year,
    '!start-hour' => $start_hour,
    '!end-hour' => $end_hour,
  );

  return t($string, $date_vars);
}

/**
 * Implements hook_date_display_single().
 */
function futurium_isa_theme_date_display_single($variables) {

  $date = $variables['date'];
  $timezone = $variables['timezone'];
  $attributes = $variables['attributes'];

  $start_date_obj = $variables['dates']['value']['db']['object'];
  $end_date_obj = $variables['dates']['value2']['db']['object'];

  if ($start_date_obj != $end_date_obj) {
    $string = '!start-day !start-month !start-year - !start-hour - !end-hour';
  }
  else {
    $string = '!start-day !start-month !start-year - !start-hour';
  }

  $start_day = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'j');
  $start_month = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'F');
  $start_year = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'Y');
  $start_hour = format_date($start_date_obj->originalTime, $type = 'custom', $format = 'H:i');
  $end_hour = format_date($end_date_obj->originalTime, $type = 'custom', $format = 'H:i');

  $date_vars = array(
    '!start-day' => $start_day,
    '!start-month' => $start_month,
    '!start-year' => $start_year,
    '!start-hour' => $start_hour,
    '!end-hour' => $end_hour,
  );

  $obj = menu_get_object();
  if (!empty($obj)) {
    if ($obj->type == 'future') {
      return $date;
    }
  }

  return t($string, $date_vars);
}

/**
 * Implements hook_field_group_pre_render_alter().
 *
 * Fixes non-working fieldset in bootstrap themes.
 */
function futurium_isa_theme_field_group_pre_render_alter(&$element, $group, & $form) {
  if (isset($element['#type']) && $element['#type'] == 'fieldset' && !isset($element['#id'])) {
    $element['#id'] = drupal_html_id('fieldset');
  }
}

/**
 * Implements hook_js_alter().
 */
function futurium_isa_theme_js_alter(&$js) {
  unset($js['misc/collapse.js']);
}

/**
 * Implements hook_preprocess_rate_template_fivestar().
 */
function futurium_isa_theme_preprocess_rate_template_fivestar(&$variables) {
  global $base_url;
  extract($variables);

  foreach ($links as $key => $link) {
    if ($results['rating'] >= $link['value']) {
      $class = 'rate-fivestar-btn-filled rate-button';
    }
    else {
      $class = 'rate-fivestar-btn-empty rate-button';
    }
    switch ($variables['display_options']['title']) {
      case 'Desirability':
        $icon = "futurium-rate futurium-rate-desirability";
        break;

      case 'Feasibility':
        $icon = "futurium-rate futurium-rate-feasibility";
        break;

      case 'Impact':
        $icon = "futurium-rate futurium-rate-impact";
        break;

      case 'Likelihood':
        $icon = "futurium-rate futurium-rate-likelihood";
        break;

      default:
        $icon = "glyphicon glyphicon-star";
        break;
    }
    $link_options = array('html' => TRUE, 'attributes' => array('class' => $class));

    $variables['stars'][$key] = l('<i class="' . $icon . '"></i>', $base_url . $link['href'], $link_options);
  }

  $info = array();
  if ($mode == RATE_CLOSED) {
    $info[] = t('Voting is closed.');
  }
  if ($mode != RATE_COMPACT && $mode != RATE_COMPACT_DISABLED) {
    if (isset($results['user_vote'])) {
      $vote_value = $variables['links'][1]['value'] - $variables['links'][0]['value'];
      $vote = round($results['user_vote'] / $vote_value);
      $info[] = t('You voted !vote.', array('!vote' => $vote));
    }
    $info[] = t('Total votes: !count', array('!count' => $results['count']));
  }
  $variables['info'] = implode(' ', $info);

}

function futurium_isa_theme_views_view_grouping($vars) {
  $view = $vars['view'];
  $title = $vars['title'];
  $content = $vars['content'];

  $output = '<div class="view-grouping">';
  $output .= '<div class="view-grouping-header">' . $title . '</div>';
  $output .= '<div class="view-grouping-content">' . $content . '</div>' ;
  $output .= '</div>';

  return $output;
}

function futurium_isa_theme_menu_tree__menu_user_tabs($variables) {
  return '<ul class="menu nav nav-pills">' . $variables['tree'] . '</ul>';
}

function futurium_isa_theme_menu_tree__menu_group_tabs($variables) {
  return '<ul class="menu nav nav-pills">' . $variables['tree'] . '</ul>';
}

function futurium_isa_theme_quant_page($vars) {

  $content = '';

  $content .= $vars['form'];

  //$content .= '<h1>Content stats</h1>';

  if ($vars['charts']) {
    foreach ($vars['charts'] as $chart) {
      $content .= $chart;
    }
  }

  $views['users'] = array(
    'title' => t('Users'),
    'view' => 'statistics_users',
    'class' => 'stats-user',
    'displays' => array(
      'most_active_users',
    ),
  );

  $views['futures'] = array(
    'title' => t('Futures'),
    'view' => 'statistics',
    'class' => 'stats-futures ',
    'displays' => array(
      'most_commented_futures',
      'most_voted_futures',
    ),
  );

  $views['ideas'] = array(
    'title' => t('Ideas'),
    'view' => 'statistics',
    'class' => 'stats-ideas',
    'displays' => array(
      'most_commented_ideas',
      'most_voted_ideas',
    ),
  );

  foreach($views as $group => $data) {
    $view_name = $data['view'];
    $content .= '<div class="' . $data['class'] . '"><h1 class="element-invisible">' . $data['title'] . '</h1>';
    foreach ($data['displays'] as $k => $display) {
      $view = views_get_view($view_name);
      $view->set_display($display);
      if (!empty($_GET['period'])) {
        $filters = $view->display_handler->get_option('filters');
        if (isset($filters['timestamp']['value'])) {
          $p = '-' . str_replace('_', ' ', $_GET['period']);
          $filters['timestamp']['value']['value'] = $p;
          $view->display_handler->set_option('filters', $filters);
          $view->pre_execute();
        }
      }
      $content .= '<div class="stats-block"><h2>' . $view->get_title() . '</h2>';
      $content .= $view->preview($display);
      $content .= '</div>';
    }
    $content .= '</div>';
  }

  return '<div id="quant-page">' . $content . '</div>';
}

/**
 * Theme wrapper for quant_time_form()
 */
function futurium_isa_theme_quant_time_form($vars) {
  $form = $vars['form'];
  $output = '';

  $output .= '<fieldset>';

  $output .= '<div class="description">';
  $output .= drupal_render($form['message']);
  $output .= '</div>';

  $output .= '<div class="quant-option-row">';
  $output .= drupal_render($form['period']);
  $output .= '</div>';

  $output .= drupal_render_children($form);

  $output .= '</fieldset>';

  return $output;
}

function futurium_isa_theme_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea'));

  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper'),
  );

  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    drupal_add_library('system', 'drupal.textarea');
    $wrapper_attributes['class'][] = 'resizable';
  }

  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
  $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  $output .= '</div>';
  return $output;
}

function futurium_isa_theme_preprocess_loggedin_collapsible_block(&$vars) {
  dsm($vars);
  $vars['title'] = "WOOT";
}
