<?php
/**
 * @file
 * Contains custom theme functionality.
 */

/**
 * Implements theme_menu_link().
 */
function d4eu_menu_link(&$variables) {
  // Catch the case of a home image.
  if ($variables['element']['#title'] == '<span class="glyphicon glyphicon-home menu-no-title"></span>') {
    // Classes on link <a>.
    $variables['element']['#localized_options']['attributes']['class'][] = 'glyphicon';
    $variables['element']['#localized_options']['attributes']['class'][] = 'glyphicon-home';
    // Invisible span (element-invisible) around link text <a>.
    $variables['element']['#localized_options']['html'] = TRUE;
    $variables['element']['#title'] = "<span class='element-invisible'>home</span>";
  }
  return theme_menu_link($variables);
}

/**
 * Implements hook_preprocess_block().
 */
function d4eu_preprocess_block(&$variables) {

  // Constructs a block ID based on region, module and delta.
  $block_id = $variables['elements']['#block']->region . '-' . $variables['elements']['#block']->module . '-' . $variables['elements']['#block']->delta;

  // Adds specific class to each block.
  $variables['classes_array'][] = $variables['elements']['#block']->module . '-' . $variables['elements']['#block']->delta;

  switch ($block_id) {

    case 'header_top-system-user-menu':

      global $base_url;

      // Constructs the name of the user for display in top toolbar.
      if ($variables['user']->uid) {
        $name                             = format_username($variables['user']);
        $options                          = array();
        $options['attributes']['class'][] = 'user-link';
        $variables['user_welcome']        = t('Welcome <strong class="user-link">!name</strong>',
          array(
            '!name' => l($name, 'user/' . $variables['user']->uid, $options),
          )
        );
      }
      $menu = menu_navigation_links('user-menu');

      $items = '';

      // Manage redirection after login.
      $status = drupal_get_http_header('status');
      if (strpos($status, '404') !== FALSE) {
        $dest = 'home';
      }
      elseif (strpos($_GET['q'], 'user/register') !== FALSE) {
        $dest = 'home';
      }
      elseif (strpos($_GET['q'], 'user/login') !== FALSE) {
        $dest = 'home';
      }
      else {
        $dest = drupal_get_path_alias();
      }

      foreach ($menu as $item_id) {
        // Add redirection for login, logout and register.
        if ($item_id['href'] == 'user/login' || $item_id['href'] == 'user/register') {
          $attributes['query']['destination'] = $dest;
        }
        if ($item_id['href'] == 'user/logout') {
          $attributes['query']['destination'] = $base_url;
        }

        $items .= '<li>' . l($item_id['title'], $item_id['href'], array()) . '</li>';
      }

      $variables['user_menu'] = $items;

      break;

    case 'header_top-menu-menu-service-tools':

      $menu = menu_navigation_links('menu-service-tools');

      $items = '';

      foreach ($menu as $item_id) {
        $items .= '<li>' . l($item_id['title'], $item_id['href'], array()) . '</li>';
      }

      $variables['menu_service'] = $items;

      break;
  }

  // Checks if there is an exposed block.
  $variables['exposed_block'] = FALSE;
  if (isset($variables['elements']['#views_contextual_links_info']['views_ui']['view']->display)) {
    foreach ($variables['elements']['#views_contextual_links_info']['views_ui']['view']->display as $display) {
      if (isset($display->display_options['exposed_block']) && $display->display_options['exposed_block']) {
        $variables['exposed_block'] = TRUE;
      }
    }
  }

  // List of all block than don't need a panel.
  $block_no_panel = array(
    'search'           => 'form',
    'print'            => 'print-links',
    'workbench'        => 'block',
    'social_bookmark'  => 'social-bookmark',
    'views'            => 'view_ec_content_slider-block',
    'om_maximenu'      => array('om-maximenu-1', 'om-maximenu-2'),
    'menu'             => 'menu-service-tools',
    'cce_basic_config' => 'footer_ipg',
  );

  // List of all blocks that don't need their title to be displayed.
  $block_no_title = array(
    'fat_footer'       => 'fat-footer',
    'om_maximenu'      => array('om-maximenu-1', 'om-maximenu-2'),
    'menu'             => 'menu-service-tools',
    'cce_basic_config' => 'footer_ipg',
  );

  $variables['with_panel'] = TRUE;

  $block = $variables['elements']['#block'];

  foreach ($block_no_panel as $key => $value) {
    if ($block->module == $key) {
      if (is_array($value)) {
        foreach ($value as $delta) {
          if ($block->delta == $delta) {
            $variables['with_panel'] = FALSE;
            break;
          }
        }
      }
      else {
        if ($block->delta == $value) {
          $variables['with_panel'] = FALSE;
        }
      }
    }
  }

  $variables['with_title'] = TRUE;
  foreach ($block_no_title as $key => $value) {
    if ($block->module == $key) {
      if (is_array($value)) {
        foreach ($value as $delta) {
          if ($block->delta == $delta) {
            $variables['with_title'] = FALSE;
            break;
          }
        }
      }
      else {
        if ($block->delta == $value) {
          $variables['with_title'] = FALSE;
        }
      }
    }
  }

  $block_no_body_class = array();
  $variables['body_class'] = TRUE;
  foreach ($block_no_body_class as $key => $value) {
    if ($block->module == $key && $block->delta == $value) {
      $variables['body_class'] = FALSE;
    }
  }
}

/**
 * Implements hook_menu_block_view_alter().
 */
function d4eu_block_view_alter(&$data, $block) {
  // Remove from the list items.
  if (isset($data['content'])) {
    if (!is_array($data['content'])) {
      preg_match_all('/<a(.*?)>/s', $data['content'], $matches);

      if (isset($matches[0])) {
        foreach ($matches[0] as $link) {
          if (strpos($link, ' class="') !== FALSE) {
            $new_link = str_replace(' class="list-group-item', ' class="', $link);
            $data['content'] = str_replace($link, $new_link, $data['content']);
          }
        }
      }
    }
  }
}

/**
 * Implements theme_preprocess_html().
 *
 * Overrides ec_resp title tag.
 */
function d4eu_preprocess_html(&$variables) {
  if (drupal_get_title()) {
    $head_title = array(
      'title' => strip_tags(drupal_get_title()),
      'name' => check_plain(variable_get('site_name', 'Drupal')),
    );
  }
  else {
    $head_title = array('name' => check_plain(variable_get('site_name', 'Drupal')));
  }

  $head_title['org'] = t('European Commission');
  $variables['head_title_array'] = $head_title;
  $variables['head_title'] = implode(' | ', $head_title);

  drupal_add_js('//ec.europa.eu/wel/surveys/wr_survey01/wr_survey.js', 'external');
}

/**
 * Implements hook_html_head_alter().
 *
 * Removes the obsolete content-type.
 */
function d4eu_html_head_alter(&$head_elements) {
  foreach ($head_elements as $key => $element) {
    if (isset($element['#attributes']['http-equiv']) == 'Content-Language') {
      unset($head_elements[$key]);
    }
  }
}

/**
 * Implements hook_preprocess_node().
 *
 * Changes on submitted label.
 */
function d4eu_preprocess_node(&$vars) {
  $account = user_load($vars['node']->uid);
  if (isset($account->field_organisation[LANGUAGE_NONE][0]['safe_value'])) {
    $organisation = $account->field_organisation[LANGUAGE_NONE][0]['safe_value'];
  }
  $vars['submitted']  = '<div class="authoring-info">';
  $vars['submitted'] .= '<span class="published-by">' . t("Published by") . ' </span>';
  $vars['submitted'] .= '<span class="username">' . theme('username', array('account' => $account)) . '</span>';
  if (isset($organisation) && ($organisation != ' ')) {
    $vars['submitted'] .= '<span class="organisation">' . $organisation . '</span>';
  }
  $vars['submitted'] .= '<span class="extra-on"> ' . t("on") . ' </span> ';
  $vars['submitted'] .= '<span class="post-date">' . format_date($vars['node']->created, 'custom', 'l') . ', ' . format_date($vars['node']->created, 'custom', 'd/m/Y') . '</span>';
  $vars['submitted'] .= '</div>';

  $node = $vars['node'];
  $vars['open_to_comments'] = FALSE;

  if (module_exists('supertags')) {
    if ($node->comment == COMMENT_NODE_OPEN) {
      $default_flavor = $vars['field_default_flavour'][LANGUAGE_NONE][0]['tid'];
      $default_archived = _supertags_is_archived(taxonomy_term_load($default_flavor));

      if ($default_archived == 0) {
        $vars['open_to_comments'] = TRUE;
        /* Fake login/register form to comment while not logged in. */
        $destination                   = array('destination' => "comment/reply/$node->nid/#comment-form");
        $vars['comment_login_title']   = t('Add new comment');
        $vars['comment_login']         = t("<a href='@login'>Login</a> or <a href='@register'>register</a> to add comment.",
          array(
            '@login'    => url('user/login', array('query' => $destination)),
            '@register' => url('user/register', array('query' => $destination)),
          ));
        $vars['comment_login_subject'] = t('Subject');
        $vars['comment_login_comment'] = t('Comment');
        $vars['comment_login_save']    = t('Save');
      }

      else {
        unset($vars['content']['links']['comment']['#links']['comment-reply']);
      }
    }
  }
  $vars['hide'] = array();
  $vars['show'] = array(
    'field_leading_picture_d4eu',
    'body',
    'field_ideas',
    'poll_view_voting',
    'poll_view_results',
    'field_videosd4eu',
    'field_document',
    'field_date_time',
    'field_issue',
  );

  if ($vars['view_mode'] == 'full') {
    $block = module_invoke('futurium_links', 'block_view', 'futurium_links');
    $vars['select_relation'] = '<h2>' . render($block['subject']) . '</h2>';
    $vars['select_relation'] .= render($block['content']);
  }
  if ( $node->view->current_display == 'relationteaser' ) {
    $rel_id = $node->view->result[$node->view->row_index]->relation_node_rid;
    $vars['delete_rid'] = '';
    if (user_access('delete relations')) {
      $vars['delete_rid'] = l(t('Unlink'), 'relation/' . $rel_id . '/delete' , array('query' => array('destination' => $_GET['q']), 'attributes' => array('class' => 'unlink')));
    }
  }
}

/**
 * Implements hook_FORM_ID_form_alter().
 *
 * Adding missing alternative text for WAI compliance.
 */
function d4eu_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['actions']['submit']['#attributes']['alt'] = 'Search';
}

/**
 * Implements hook_form_alter().
 *
 * Changes search forms placeholder text.
 */
function d4eu_form_alter(&$form, &$form_state, $form_id) {  switch($form_id) {
  case 'search_block_form':
    if (module_exists('supertags')) {
      $flavor = _supertags_flavor_context();
      $form['search_block_form']['#attributes']['placeholder'][] = $flavor['name'];
    }
    break;

  case 'futurium_links_single_box_form':
  case 'futurium_links_multiple_boxes_form':
  case 'futurium_links_radio_choice_form':

    $override = array(
        drupal_get_path('theme', 'd4eu') . '/scripts/futurium_links.js' => array(
            'type' => 'file',
            'scope' => 'footer',
            'weight' => 101,
        ),
    );

    $form['#attached']['js'] += $override;
    unset($form['has_evidence']);
    break;
  
}

}

/**
 * Implements theme_preprocess_comment().
 *
 * Change the markup of links login/register to comment a comment.
 */
function d4eu_preprocess_comment(&$vars) {
  global $user;

  // Hide Important or conclusion in comment view.
  $vars['content']['field_important_or_conclusion'] = FALSE;
  // Add a class to the markup.
  if (!empty($vars['elements']['field_important_or_conclusion'])) {
    $class = 'comment' . $vars['elements']['field_important_or_conclusion'][0]['#markup'];
    $vars['classes_array'][] = $class;
  }
  $uid = $vars['comment']->uid;
  $comment_user = array('account' => user_load($uid));

  $organisation = '';
  if (isset($comment_user['account']->field_organisation[LANGUAGE_NONE][0]['safe_value'])) {
    if ($organisation != '') {
      $organisation .= ' ';
    }
    $organisation .= '<div class="userOrganisation">' . $comment_user['account']->field_organisation[LANGUAGE_NONE][0]['safe_value'] . '</div>';
  }

  $vars['comment_user']['organisation'] = $organisation;

  $node = $vars['node'];
  $comment = $vars['comment']->cid;
  if (module_exists('supertags')) {
    $context = _supertags_get_context();
    $default_flavor = $node->field_default_flavour[LANGUAGE_NONE][0]['tid'];
    $default_archived = _supertags_is_archived(taxonomy_term_load($default_flavor));
  }

  if (!$user->uid) {
    if ($default_archived == 0) {
      if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) {
        $destination                                                                 = array('destination' => "comment/reply/$node->nid/$comment#comment-form");
        $vars['content']['links']['comment']['#links']['comment_forbidden']['title'] = t('<a href="@login">Log in</a> or <a href="@register">register</a><br /> to reply to this comment',
          array(
            '@login'    => url('user/login', array('query' => $destination)),
            '@register' => url('user/register', array('query' => $destination)),
          ));
      }
    }
    else {
      $vars['content']['links']['comment']['#links']['comment_forbidden']['title'] = '';
    }
  }
}

/**
 * Implements theme_preprocess_page().
 *
 * Add link on main title of the website to root.
 */
function d4eu_preprocess_page(&$vars) {
  $old_site_name = $vars['site_name'];
  $vars['site_name'] = '<a href="' . $vars['front_page'] . '">' . $old_site_name . '</a>';
}

/**
 * Implements template_preprocess_user_profile().
 */
function d4eu_preprocess_user_profile(&$variables) {
  // Format profile page.
  $identity = '';
  if (isset($variables['field_firstname'][0]['safe_value'])) {
    $identity .= $variables['field_firstname'][0]['safe_value'];
  }
  if (isset($variables['field_lastname'][0]['safe_value'])) {
    if ($identity != '') {
      $identity .= ' ';
    }
    $identity .= $variables['field_lastname'][0]['safe_value'];
  }

  $organisation = '';
  if (isset($variables['field_organisation'][0]['safe_value'])) {
    if ($organisation != '') {
      $organisation .= ' ';
    }
    $organisation .= '<div class="userOrganisation">' . $variables['field_organisation'][0]['safe_value'] . '</div>';
  }

  $date = '';
  if ($user = user_load(arg(1))) {
    $date_string = format_date($user->created, 'custom', 'd/m/Y');
    $args = array('@date' => $date_string);
    $date .= t('Member since @date', $args);
  }

  $variables['user_info']['name'] = $identity;
  $variables['user_info']['organisation'] = $organisation;
  $variables['user_info']['date'] = $date;

  // Add contact form link on user profile page.
  if (module_exists('contact')) {
    $account = $variables['elements']['#account'];
    $menu_item = menu_get_item("user/$account->uid/contact");
    if (isset($menu_item['access']) && $menu_item['access'] == TRUE) {
      $variables['contact_form'] = l(t('Contact this user'), 'user/' . $account->uid . '/contact', array('attributes' => array('type' => 'message')));
    }
  }
}

/**
 * Implements theme_preprocess_view_view_fields().
 *
 * Show votes results by default in poll lists.
 */
function d4eu_preprocess_views_view_fields(&$vars) {
  if ($vars['view']->name == 'flavors' && $vars['view']->current_display == 'page_poll') {
    $poll_node = node_load($vars['row']->nid);
    $vars['fields']['active']->label_html = FALSE;
    $vars['fields']['active']->content = poll_view_results($poll_node, TRUE, FALSE);
  }
}
