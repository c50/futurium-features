<?php
/**
 * @file
 * futurium_groups.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function futurium_groups_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_65b8740b-e92d-4018-9bb0-b030b418a7a8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Group',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'futurium_group' => 'futurium_group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1r' => NULL,
      'row2l' => NULL,
      'row2c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => NULL,
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6c' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7c' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8c' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9c' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10c' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1c' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => 'bootstrap_panels_horizontal_tabs',
    ),
    'row2c' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed57203a-7434-4b9d-b1ed-3b2bcfbef1ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1bbd2b4e-2976-4a3c-8359-821875f2ddb9';
    $pane->panel = 'row1c';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_leading_picture_d4eu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1bbd2b4e-2976-4a3c-8359-821875f2ddb9';
    $display->content['new-1bbd2b4e-2976-4a3c-8359-821875f2ddb9'] = $pane;
    $display->panels['row1c'][0] = 'new-1bbd2b4e-2976-4a3c-8359-821875f2ddb9';
    $pane = new stdClass();
    $pane->pid = 'new-897b8b4d-c200-40ff-a7d4-697641ccc0ed';
    $pane->panel = 'row1l';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'node_header',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '897b8b4d-c200-40ff-a7d4-697641ccc0ed';
    $display->content['new-897b8b4d-c200-40ff-a7d4-697641ccc0ed'] = $pane;
    $display->panels['row1l'][0] = 'new-897b8b4d-c200-40ff-a7d4-697641ccc0ed';
    $pane = new stdClass();
    $pane->pid = 'new-68c7f739-d56d-4e3c-b62c-60b31fe02313';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'group_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Overview',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68c7f739-d56d-4e3c-b62c-60b31fe02313';
    $display->content['new-68c7f739-d56d-4e3c-b62c-60b31fe02313'] = $pane;
    $display->panels['row2l'][0] = 'new-68c7f739-d56d-4e3c-b62c-60b31fe02313';
    $pane = new stdClass();
    $pane->pid = 'new-5489aa39-daf3-4c10-a62a-c6b71861298f';
    $pane->panel = 'row2l';
    $pane->type = 'panels_mini';
    $pane->subtype = 'group_members';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Members',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5489aa39-daf3-4c10-a62a-c6b71861298f';
    $display->content['new-5489aa39-daf3-4c10-a62a-c6b71861298f'] = $pane;
    $display->panels['row2l'][1] = 'new-5489aa39-daf3-4c10-a62a-c6b71861298f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_65b8740b-e92d-4018-9bb0-b030b418a7a8'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_groups_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'groups';
  $page->task = 'page';
  $page->admin_title = 'Groups';
  $page->admin_description = '';
  $page->path = 'groups';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Groups',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_groups__panel';
  $handler->task = 'page';
  $handler->subtask = 'groups';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '1',
          'sm' => '1',
          'md' => '1',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1c' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2c' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6c' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7c' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8c' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9c' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10c' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fa4546c9-c74a-4934-888f-6200c647a3dc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67299b28-4b41-42ea-a655-5022cf54443b';
    $pane->panel = 'row1l';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67299b28-4b41-42ea-a655-5022cf54443b';
    $display->content['new-67299b28-4b41-42ea-a655-5022cf54443b'] = $pane;
    $display->panels['row1l'][0] = 'new-67299b28-4b41-42ea-a655-5022cf54443b';
    $pane = new stdClass();
    $pane->pid = 'new-0b7ea2c3-15de-4084-9199-b469e6c63cfb';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'group_groups';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b7ea2c3-15de-4084-9199-b469e6c63cfb';
    $display->content['new-0b7ea2c3-15de-4084-9199-b469e6c63cfb'] = $pane;
    $display->panels['row2l'][0] = 'new-0b7ea2c3-15de-4084-9199-b469e6c63cfb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups'] = $page;

  return $pages;

}
