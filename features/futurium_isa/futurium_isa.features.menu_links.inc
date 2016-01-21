<?php
/**
 * @file
 * futurium_isa.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function futurium_isa_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_login:user/login.
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'data-image' => 'user',
        'data-display-title' => 0,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1000,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_user-account:user.
  $menu_links['main-menu_user-account:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-image' => 'user',
        'data-display-title' => 0,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1001,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Exported menu link: menu-group-tabs_futures:menutoken/56a0d5dea516a.
  $menu_links['menu-group-tabs_futures:menutoken/56a0d5dea516a'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/56a0d5dea516a',
    'router_path' => 'menutoken/%',
    'link_title' => 'Futures',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'node/[node:nid]/futures',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-group-tabs_futures:menutoken/56a0d5dea516a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-group-tabs_ideas:menutoken/56a0d5fe018cc.
  $menu_links['menu-group-tabs_ideas:menutoken/56a0d5fe018cc'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/56a0d5fe018cc',
    'router_path' => 'menutoken/%',
    'link_title' => 'Ideas',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'node/[node:nid]/ideas',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-group-tabs_ideas:menutoken/56a0d5fe018cc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-group-tabs_members:menutoken/56a0d61f0f2aa.
  $menu_links['menu-group-tabs_members:menutoken/56a0d61f0f2aa'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/56a0d61f0f2aa',
    'router_path' => 'menutoken/%',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'node/[node:nid]/members',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-group-tabs_members:menutoken/56a0d61f0f2aa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-group-tabs_overview:menutoken/56a0d5c360f7f.
  $menu_links['menu-group-tabs_overview:menutoken/56a0d5c360f7f'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/56a0d5c360f7f',
    'router_path' => 'menutoken/%',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'node/[node:nid]',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-group-tabs_overview:menutoken/56a0d5c360f7f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_events:menutoken/56a0afd911c8f.
  $menu_links['menu-user-tabs_events:menutoken/56a0afd911c8f'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0afd911c8f',
    'router_path' => 'menutoken/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'user/[user:uid]/events',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-tabs_events:menutoken/56a0afd911c8f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_evidence:menutoken/56a0afaba577b.
  $menu_links['menu-user-tabs_evidence:menutoken/56a0afaba577b'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0afaba577b',
    'router_path' => 'menutoken/%',
    'link_title' => 'Evidence',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'user/[user:uid]/evidence',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-tabs_evidence:menutoken/56a0afaba577b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_futures:menutoken/56a0af768a069.
  $menu_links['menu-user-tabs_futures:menutoken/56a0af768a069'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0af768a069',
    'router_path' => 'menutoken/%',
    'link_title' => 'Futures',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'user/[user:uid]/futures',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-tabs_futures:menutoken/56a0af768a069',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_groups:menutoken/56a0abb5a1379.
  $menu_links['menu-user-tabs_groups:menutoken/56a0abb5a1379'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0abb5a1379',
    'router_path' => 'menutoken/%',
    'link_title' => 'Groups',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'user/[user:uid]/groups',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-tabs_groups:menutoken/56a0abb5a1379',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_ideas:menutoken/56a0af8fd08b5.
  $menu_links['menu-user-tabs_ideas:menutoken/56a0af8fd08b5'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0af8fd08b5',
    'router_path' => 'menutoken/%',
    'link_title' => 'Ideas',
    'options' => array(
      'menu_token_link_path' => 'user/[user:uid]/ideas',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/56a0af8fd08b5',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-user-tabs_ideas:menutoken/56a0af8fd08b5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_overview:menutoken/56a0abf7bd2ea.
  $menu_links['menu-user-tabs_overview:menutoken/56a0abf7bd2ea'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0abf7bd2ea',
    'router_path' => 'menutoken/%',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'user/[user:uid]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-tabs_overview:menutoken/56a0abf7bd2ea',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Login');
  t('User account');
  t('Events');
  t('Evidence');
  t('Futures');
  t('Groups');
  t('Ideas');
  t('Members');
  t('Overview');

  return $menu_links;
}
