<?php
/**
 * @file
 * tests.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tests_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'node_graph';
  $page->task = 'page';
  $page->admin_title = 'Node Graph';
  $page->admin_description = '';
  $page->path = 'node/%node/graph';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'name' => 'relation_not_empty',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Graph',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_node_graph__panel';
  $handler->task = 'page';
  $handler->subtask = 'node_graph';
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
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ee880b2f-6dfa-4be3-9f01-a3a3808a98a8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d6a6541-0c35-4108-8c48-29b20b90ec5d';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'node_header',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '0d6a6541-0c35-4108-8c48-29b20b90ec5d';
    $display->content['new-0d6a6541-0c35-4108-8c48-29b20b90ec5d'] = $pane;
    $display->panels['row1l'][0] = 'new-0d6a6541-0c35-4108-8c48-29b20b90ec5d';
    $pane = new stdClass();
    $pane->pid = 'new-2a32bf2c-382d-4c1d-8b31-d93a2c469709';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_relation_graph';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'graphapi_relation_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'global' => array(
          'use_global' => 0,
        ),
        'graph' => array(
          'levels' => '2',
          'width' => '800',
          'height' => '800',
          'menu' => 0,
          'showLinks' => 0,
          'background-color' => 'grey',
        ),
        'links' => array(
          'implemented_by' => array(
            'color' => '#DDDDDD',
          ),
          'supports' => array(
            'color' => '#888888',
          ),
          'to_discuss' => array(
            'color' => '#333333',
          ),
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '2a32bf2c-382d-4c1d-8b31-d93a2c469709';
    $display->content['new-2a32bf2c-382d-4c1d-8b31-d93a2c469709'] = $pane;
    $display->panels['row2l'][0] = 'new-2a32bf2c-382d-4c1d-8b31-d93a2c469709';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0d6a6541-0c35-4108-8c48-29b20b90ec5d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_graph'] = $page;

  return $pages;

}
