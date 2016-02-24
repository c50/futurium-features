<?php
/**
 * @file
 * futurium_isa.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function futurium_isa_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_52afa37e-4eb5-4d02-bc65-07f0d11e68ee';
  $handler->task = 'node_edit';
  $handler->subtask = '';
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
    'name' => '',
    'access' => array(
      'logic' => 'and',
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
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5c8b57b-54de-42f1-915e-20adff354536';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a87e70a-53e4-4585-880f-e5ca11ad8a1e';
    $pane->panel = 'row1l';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '3a87e70a-53e4-4585-880f-e5ca11ad8a1e';
    $display->content['new-3a87e70a-53e4-4585-880f-e5ca11ad8a1e'] = $pane;
    $display->panels['row1l'][0] = 'new-3a87e70a-53e4-4585-880f-e5ca11ad8a1e';
    $pane = new stdClass();
    $pane->pid = 'new-86523247-cd7f-459b-bc85-ce0059d4b9f3';
    $pane->panel = 'row2l';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '86523247-cd7f-459b-bc85-ce0059d4b9f3';
    $display->content['new-86523247-cd7f-459b-bc85-ce0059d4b9f3'] = $pane;
    $display->panels['row2l'][0] = 'new-86523247-cd7f-459b-bc85-ce0059d4b9f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_52afa37e-4eb5-4d02-bc65-07f0d11e68ee'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event_d4eu' => 'event_d4eu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => array(
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
      'row2l' => array(
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
      'row2r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row3l' => array(
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
      'row3r' => array(
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
      'row4l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
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
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row4l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc3761ad-1b8b-4b7d-be49-57d40d437537';
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
    $pane->uuid = 'bc3761ad-1b8b-4b7d-be49-57d40d437537';
    $display->content['new-bc3761ad-1b8b-4b7d-be49-57d40d437537'] = $pane;
    $display->panels['row1l'][0] = 'new-bc3761ad-1b8b-4b7d-be49-57d40d437537';
    $pane = new stdClass();
    $pane->pid = 'new-e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9';
    $pane->panel = 'row1r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-node_social_share';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9';
    $display->content['new-e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9'] = $pane;
    $display->panels['row1r'][0] = 'new-e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9';
    $pane = new stdClass();
    $pane->pid = 'new-5d358d29-69b3-452a-8fb8-ba85f767d114';
    $pane->panel = 'row2l';
    $pane->type = 'panels_mini';
    $pane->subtype = 'event_date_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Date & Place',
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
    $pane->uuid = '5d358d29-69b3-452a-8fb8-ba85f767d114';
    $display->content['new-5d358d29-69b3-452a-8fb8-ba85f767d114'] = $pane;
    $display->panels['row2l'][0] = 'new-5d358d29-69b3-452a-8fb8-ba85f767d114';
    $pane = new stdClass();
    $pane->pid = 'new-44bb3c89-3de8-473f-b2c3-95fe74c36983';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '44bb3c89-3de8-473f-b2c3-95fe74c36983';
    $display->content['new-44bb3c89-3de8-473f-b2c3-95fe74c36983'] = $pane;
    $display->panels['row2l'][1] = 'new-44bb3c89-3de8-473f-b2c3-95fe74c36983';
    $pane = new stdClass();
    $pane->pid = 'new-4c0054ea-42ad-42f9-bda7-fed05fe208ab';
    $pane->panel = 'row2l';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c0054ea-42ad-42f9-bda7-fed05fe208ab';
    $display->content['new-4c0054ea-42ad-42f9-bda7-fed05fe208ab'] = $pane;
    $display->panels['row2l'][2] = 'new-4c0054ea-42ad-42f9-bda7-fed05fe208ab';
    $pane = new stdClass();
    $pane->pid = 'new-a4a65293-e53d-45e4-b521-8b43caf09e52';
    $pane->panel = 'row2l';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a4a65293-e53d-45e4-b521-8b43caf09e52';
    $display->content['new-a4a65293-e53d-45e4-b521-8b43caf09e52'] = $pane;
    $display->panels['row2l'][3] = 'new-a4a65293-e53d-45e4-b521-8b43caf09e52';
    $pane = new stdClass();
    $pane->pid = 'new-1dfbaa04-a09f-46b8-8868-6890804430b2';
    $pane->panel = 'row2r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-relation_link_add';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '1dfbaa04-a09f-46b8-8868-6890804430b2';
    $display->content['new-1dfbaa04-a09f-46b8-8868-6890804430b2'] = $pane;
    $display->panels['row2r'][0] = 'new-1dfbaa04-a09f-46b8-8868-6890804430b2';
    $pane = new stdClass();
    $pane->pid = 'new-0950d4bf-039c-4963-a1a3-3fa979d2b872';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'discuss',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0950d4bf-039c-4963-a1a3-3fa979d2b872';
    $display->content['new-0950d4bf-039c-4963-a1a3-3fa979d2b872'] = $pane;
    $display->panels['row2r'][1] = 'new-0950d4bf-039c-4963-a1a3-3fa979d2b872';
    $pane = new stdClass();
    $pane->pid = 'new-af807b2c-91da-40f6-b079-41d36297ddca';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_5',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Attendees',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'af807b2c-91da-40f6-b079-41d36297ddca';
    $display->content['new-af807b2c-91da-40f6-b079-41d36297ddca'] = $pane;
    $display->panels['row2r'][2] = 'new-af807b2c-91da-40f6-b079-41d36297ddca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__evidence';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Evidence',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'evidence',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'evidence' => 'evidence',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => array(
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
      'row2l' => array(
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
      'row3r' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row2r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row3l' => NULL,
      'row4l' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => '-1',
    ),
    'row4l' => array(
      'style' => '-1',
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e7374b17-c1d4-489a-b1d2-690d9735df34';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-19e2730b-8e33-4dfc-835b-c0f6be401733';
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
    $pane->uuid = '19e2730b-8e33-4dfc-835b-c0f6be401733';
    $display->content['new-19e2730b-8e33-4dfc-835b-c0f6be401733'] = $pane;
    $display->panels['row1l'][0] = 'new-19e2730b-8e33-4dfc-835b-c0f6be401733';
    $pane = new stdClass();
    $pane->pid = 'new-09c07e2d-6fe9-4dc6-8783-13546c4c4ff4';
    $pane->panel = 'row1r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-node_social_share';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '09c07e2d-6fe9-4dc6-8783-13546c4c4ff4';
    $display->content['new-09c07e2d-6fe9-4dc6-8783-13546c4c4ff4'] = $pane;
    $display->panels['row1r'][0] = 'new-09c07e2d-6fe9-4dc6-8783-13546c4c4ff4';
    $pane = new stdClass();
    $pane->pid = 'new-60bf6942-ee13-4028-83a1-e1cbb8686eef';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_evidence_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '60bf6942-ee13-4028-83a1-e1cbb8686eef';
    $display->content['new-60bf6942-ee13-4028-83a1-e1cbb8686eef'] = $pane;
    $display->panels['row2l'][0] = 'new-60bf6942-ee13-4028-83a1-e1cbb8686eef';
    $pane = new stdClass();
    $pane->pid = 'new-d96246f7-eb84-4f14-b4aa-a958ee9caf00';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd96246f7-eb84-4f14-b4aa-a958ee9caf00';
    $display->content['new-d96246f7-eb84-4f14-b4aa-a958ee9caf00'] = $pane;
    $display->panels['row2l'][1] = 'new-d96246f7-eb84-4f14-b4aa-a958ee9caf00';
    $pane = new stdClass();
    $pane->pid = 'new-a62ff16e-b240-4dad-91c1-ccdd65cb077b';
    $pane->panel = 'row2r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-relation_link_add';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'a62ff16e-b240-4dad-91c1-ccdd65cb077b';
    $display->content['new-a62ff16e-b240-4dad-91c1-ccdd65cb077b'] = $pane;
    $display->panels['row2r'][0] = 'new-a62ff16e-b240-4dad-91c1-ccdd65cb077b';
    $pane = new stdClass();
    $pane->pid = 'new-06e9eba5-130e-410f-896e-02a207518c8f';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'support',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06e9eba5-130e-410f-896e-02a207518c8f';
    $display->content['new-06e9eba5-130e-410f-896e-02a207518c8f'] = $pane;
    $display->panels['row2r'][1] = 'new-06e9eba5-130e-410f-896e-02a207518c8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__evidence'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__idea';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Idea',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'idea',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ideas' => 'ideas',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => array(
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
      'row2l' => array(
        'css_id' => '',
        'css_class' => 'panel-content',
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
      'row2r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
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
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b2b83dd-adfb-481e-b79c-9e4c7bf269cf';
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
    $pane->uuid = '3b2b83dd-adfb-481e-b79c-9e4c7bf269cf';
    $display->content['new-3b2b83dd-adfb-481e-b79c-9e4c7bf269cf'] = $pane;
    $display->panels['row1l'][0] = 'new-3b2b83dd-adfb-481e-b79c-9e4c7bf269cf';
    $pane = new stdClass();
    $pane->pid = 'new-bd52807f-f997-4a4f-ba89-ec4ee86a018b';
    $pane->panel = 'row1r';
    $pane->type = 'rate_widget';
    $pane->subtype = 'rate_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'build_mode' => '1',
      'widget_name' => '3',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Impact',
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
    $pane->uuid = 'bd52807f-f997-4a4f-ba89-ec4ee86a018b';
    $display->content['new-bd52807f-f997-4a4f-ba89-ec4ee86a018b'] = $pane;
    $display->panels['row1r'][0] = 'new-bd52807f-f997-4a4f-ba89-ec4ee86a018b';
    $pane = new stdClass();
    $pane->pid = 'new-dd7c53fc-a2b9-40bf-ac1a-4617db1871cf';
    $pane->panel = 'row1r';
    $pane->type = 'rate_widget';
    $pane->subtype = 'rate_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'build_mode' => '1',
      'widget_name' => '2',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Feasibility',
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
    $pane->uuid = 'dd7c53fc-a2b9-40bf-ac1a-4617db1871cf';
    $display->content['new-dd7c53fc-a2b9-40bf-ac1a-4617db1871cf'] = $pane;
    $display->panels['row1r'][1] = 'new-dd7c53fc-a2b9-40bf-ac1a-4617db1871cf';
    $pane = new stdClass();
    $pane->pid = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
    $pane->panel = 'row1r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-node_social_share';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8dc41bbb-7faa-4476-843e-5f977a854684';
    $display->content['new-8dc41bbb-7faa-4476-843e-5f977a854684'] = $pane;
    $display->panels['row1r'][2] = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
    $pane = new stdClass();
    $pane->pid = 'new-1c8c9caf-22fa-408f-a52e-f5e81b33b7dd';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ideas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '1c8c9caf-22fa-408f-a52e-f5e81b33b7dd';
    $display->content['new-1c8c9caf-22fa-408f-a52e-f5e81b33b7dd'] = $pane;
    $display->panels['row2l'][0] = 'new-1c8c9caf-22fa-408f-a52e-f5e81b33b7dd';
    $pane = new stdClass();
    $pane->pid = 'new-314906e9-78f5-46eb-a69c-54aeb6fb63c4';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_impact_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Impact',
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
    $pane->uuid = '314906e9-78f5-46eb-a69c-54aeb6fb63c4';
    $display->content['new-314906e9-78f5-46eb-a69c-54aeb6fb63c4'] = $pane;
    $display->panels['row2l'][1] = 'new-314906e9-78f5-46eb-a69c-54aeb6fb63c4';
    $pane = new stdClass();
    $pane->pid = 'new-83f666bc-4e94-425d-90bd-3e893ee439dc';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_feasibility_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Feasibility',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '83f666bc-4e94-425d-90bd-3e893ee439dc';
    $display->content['new-83f666bc-4e94-425d-90bd-3e893ee439dc'] = $pane;
    $display->panels['row2l'][2] = 'new-83f666bc-4e94-425d-90bd-3e893ee439dc';
    $pane = new stdClass();
    $pane->pid = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Tags:',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $display->content['new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858'] = $pane;
    $display->panels['row2l'][3] = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane = new stdClass();
    $pane->pid = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $pane->panel = 'row2l';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '10',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $display->content['new-99396859-4ddf-41d8-a8ef-d0472fa507ea'] = $pane;
    $display->panels['row2l'][4] = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $pane = new stdClass();
    $pane->pid = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane->panel = 'row2l';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '187e3f2c-a257-4459-953b-ed3da549df42';
    $display->content['new-187e3f2c-a257-4459-953b-ed3da549df42'] = $pane;
    $display->panels['row2l'][5] = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane = new stdClass();
    $pane->pid = 'new-aeabe19c-d13c-4013-951e-31484323427f';
    $pane->panel = 'row2r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-relation_link_add';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'aeabe19c-d13c-4013-951e-31484323427f';
    $display->content['new-aeabe19c-d13c-4013-951e-31484323427f'] = $pane;
    $display->panels['row2r'][0] = 'new-aeabe19c-d13c-4013-951e-31484323427f';
    $pane = new stdClass();
    $pane->pid = 'new-43f7212b-8d83-4f08-b2ec-ef45916a24d8';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'support',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43f7212b-8d83-4f08-b2ec-ef45916a24d8';
    $display->content['new-43f7212b-8d83-4f08-b2ec-ef45916a24d8'] = $pane;
    $display->panels['row2r'][1] = 'new-43f7212b-8d83-4f08-b2ec-ef45916a24d8';
    $pane = new stdClass();
    $pane->pid = 'new-ee7929fd-1676-4e37-8299-838ef9385599';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'implement',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ee7929fd-1676-4e37-8299-838ef9385599';
    $display->content['new-ee7929fd-1676-4e37-8299-838ef9385599'] = $pane;
    $display->panels['row2r'][2] = 'new-ee7929fd-1676-4e37-8299-838ef9385599';
    $pane = new stdClass();
    $pane->pid = 'new-0446685e-e65e-4dc1-a742-4843d3acda20';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'discuss',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0446685e-e65e-4dc1-a742-4843d3acda20';
    $display->content['new-0446685e-e65e-4dc1-a742-4843d3acda20'] = $pane;
    $display->panels['row2r'][3] = 'new-0446685e-e65e-4dc1-a742-4843d3acda20';
    $pane = new stdClass();
    $pane->pid = 'new-3da66e67-0749-4370-89e6-7b06d9f06fef';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'revisions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Contributors',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3da66e67-0749-4370-89e6-7b06d9f06fef';
    $display->content['new-3da66e67-0749-4370-89e6-7b06d9f06fef'] = $pane;
    $display->panels['row2r'][4] = 'new-3da66e67-0749-4370-89e6-7b06d9f06fef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__idea'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_87bf91fd-f1b6-4de8-a0ca-9e1c21214920';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e51d0f22-be5b-498b-8aaa-1500c9143cf6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2a17b2f-8883-4d62-987f-80808f5a286f';
    $pane->panel = 'row1l';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
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
    $pane->uuid = 'e2a17b2f-8883-4d62-987f-80808f5a286f';
    $display->content['new-e2a17b2f-8883-4d62-987f-80808f5a286f'] = $pane;
    $display->panels['row1l'][0] = 'new-e2a17b2f-8883-4d62-987f-80808f5a286f';
    $pane = new stdClass();
    $pane->pid = 'new-9f192841-096f-45b9-be0d-654fb7a83fed';
    $pane->panel = 'row2l';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
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
    $pane->uuid = '9f192841-096f-45b9-be0d-654fb7a83fed';
    $display->content['new-9f192841-096f-45b9-be0d-654fb7a83fed'] = $pane;
    $display->panels['row2l'][0] = 'new-9f192841-096f-45b9-be0d-654fb7a83fed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_87bf91fd-f1b6-4de8-a0ca-9e1c21214920'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_645c8220-980b-4c7b-b066-e549b2bfe76f';
  $handler->task = 'term_view';
  $handler->subtask = '';
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
    'name' => '',
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
  $display->uuid = 'cbe273ed-bc73-488a-8026-38b1f0135929';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5182cfb-9cbc-4fa7-a619-88f9fac89be9';
    $pane->panel = 'row1l';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
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
    $pane->uuid = 'a5182cfb-9cbc-4fa7-a619-88f9fac89be9';
    $display->content['new-a5182cfb-9cbc-4fa7-a619-88f9fac89be9'] = $pane;
    $display->panels['row1l'][0] = 'new-a5182cfb-9cbc-4fa7-a619-88f9fac89be9';
    $pane = new stdClass();
    $pane->pid = 'new-3ca355a0-4bb7-40d4-8d57-7c24f600fa23';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'futurium_taxonomy_term';
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
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
        1 => 'argument_term_1.tid',
      ),
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
    $pane->uuid = '3ca355a0-4bb7-40d4-8d57-7c24f600fa23';
    $display->content['new-3ca355a0-4bb7-40d4-8d57-7c24f600fa23'] = $pane;
    $display->panels['row2l'][0] = 'new-3ca355a0-4bb7-40d4-8d57-7c24f600fa23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_645c8220-980b-4c7b-b066-e549b2bfe76f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit__panel_context_673c691d-27fe-45fb-8eaf-f2905dfccbc1';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Edit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e0f1775b-5ece-4587-b7dc-ec84c538b1bb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-84405638-47c2-4501-9c10-84578c5896cd';
    $pane->panel = 'row1l';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '84405638-47c2-4501-9c10-84578c5896cd';
    $display->content['new-84405638-47c2-4501-9c10-84578c5896cd'] = $pane;
    $display->panels['row1l'][0] = 'new-84405638-47c2-4501-9c10-84578c5896cd';
    $pane = new stdClass();
    $pane->pid = 'new-7b8ff226-543d-4f00-be3a-9784b27cc203';
    $pane->panel = 'row2l';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '7b8ff226-543d-4f00-be3a-9784b27cc203';
    $display->content['new-7b8ff226-543d-4f00-be3a-9784b27cc203'] = $pane;
    $display->panels['row2l'][0] = 'new-7b8ff226-543d-4f00-be3a-9784b27cc203';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-84405638-47c2-4501-9c10-84578c5896cd';
  $handler->conf['display'] = $display;
  $export['user_edit__panel_context_673c691d-27fe-45fb-8eaf-f2905dfccbc1'] = $handler;


  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
        'css_class' => 'nopadding',
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
      'row1c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '7',
          'sm' => '7',
          'md' => '7',
          'lg' => '7',
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
      'row1r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '3',
          'sm' => '3',
          'md' => '3',
          'lg' => '3',
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
      'row2c' => NULL,
      'row2r' => NULL,
      'row3l' => array(
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
      'row3c' => NULL,
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
      'row2l' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1c' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => '-1',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = '69e2cbf7-423b-4507-86a4-70ad4d326738';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-601f3342-db0a-4a44-9a7e-3c40902d9108';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'user_header',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '601f3342-db0a-4a44-9a7e-3c40902d9108';
    $display->content['new-601f3342-db0a-4a44-9a7e-3c40902d9108'] = $pane;
    $display->panels['row1l'][0] = 'new-601f3342-db0a-4a44-9a7e-3c40902d9108';
    $pane = new stdClass();
    $pane->pid = 'new-23f5896c-3fd4-4782-8fea-8f2c299ccf8a';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '23f5896c-3fd4-4782-8fea-8f2c299ccf8a';
    $display->content['new-23f5896c-3fd4-4782-8fea-8f2c299ccf8a'] = $pane;
    $display->panels['row2l'][0] = 'new-23f5896c-3fd4-4782-8fea-8f2c299ccf8a';
    $pane = new stdClass();
    $pane->pid = 'new-3c88606b-b793-42e0-b4ac-052f533b864f';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
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
    $pane->uuid = '3c88606b-b793-42e0-b4ac-052f533b864f';
    $display->content['new-3c88606b-b793-42e0-b4ac-052f533b864f'] = $pane;
    $display->panels['row3l'][0] = 'new-3c88606b-b793-42e0-b4ac-052f533b864f';
    $pane = new stdClass();
    $pane->pid = 'new-aa497721-cd20-4f52-8345-18abbaa09094';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'pcp-pcp_profile_percent_complete';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Title?',
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
    $pane->uuid = 'aa497721-cd20-4f52-8345-18abbaa09094';
    $display->content['new-aa497721-cd20-4f52-8345-18abbaa09094'] = $pane;
    $display->panels['row3r'][0] = 'new-aa497721-cd20-4f52-8345-18abbaa09094';
    $pane = new stdClass();
    $pane->pid = 'new-80610619-f609-4514-9541-3269fa489566';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Links',
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
    $pane->uuid = '80610619-f609-4514-9541-3269fa489566';
    $display->content['new-80610619-f609-4514-9541-3269fa489566'] = $pane;
    $display->panels['row3r'][1] = 'new-80610619-f609-4514-9541-3269fa489566';
    $pane = new stdClass();
    $pane->pid = 'new-d084d40b-0ebe-414c-babb-a5c7e3cbf1db';
    $pane->panel = 'row3r';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd084d40b-0ebe-414c-babb-a5c7e3cbf1db';
    $display->content['new-d084d40b-0ebe-414c-babb-a5c7e3cbf1db'] = $pane;
    $display->panels['row3r'][2] = 'new-d084d40b-0ebe-414c-babb-a5c7e3cbf1db';
    $pane = new stdClass();
    $pane->pid = 'new-da65b58b-38bc-4408-9345-bc4f1b4eda43';
    $pane->panel = 'row3r';
    $pane->type = 'views';
    $pane->subtype = 'user_groups';
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
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Groups',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'da65b58b-38bc-4408-9345-bc4f1b4eda43';
    $display->content['new-da65b58b-38bc-4408-9345-bc4f1b4eda43'] = $pane;
    $display->panels['row3r'][3] = 'new-da65b58b-38bc-4408-9345-bc4f1b4eda43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_login__panel_context_05a069a3-2629-4c59-bc0a-b163f883436d';
  $handler->task = 'user_login';
  $handler->subtask = '';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Login';
  $display->uuid = '40f92992-80b9-426b-b2d3-632b65a86d23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fcdd7b42-94fc-418c-863b-cc798d0ce1d3';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title',
      'title' => '',
      'body' => '<h1>Login</h1>',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fcdd7b42-94fc-418c-863b-cc798d0ce1d3';
    $display->content['new-fcdd7b42-94fc-418c-863b-cc798d0ce1d3'] = $pane;
    $display->panels['row1l'][0] = 'new-fcdd7b42-94fc-418c-863b-cc798d0ce1d3';
    $pane = new stdClass();
    $pane->pid = 'new-7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc';
    $pane->panel = 'row3l';
    $pane->type = 'user_login_form';
    $pane->subtype = 'user_login_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-R_kL2689ddnYqOBfR7ZpFYLk0yx3ViuISOtFOWJjXSk',
      'form_token' => 'clrqkEnVlknnEcdRZIJFCSJLbB1s_gWn6UGaHCt-ikc',
      'form_id' => 'ctools_user_login_form_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc';
    $display->content['new-7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc'] = $pane;
    $display->panels['row3l'][0] = 'new-7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc';
    $pane = new stdClass();
    $pane->pid = 'new-379acceb-6206-4335-9369-5197ef973b05';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '379acceb-6206-4335-9369-5197ef973b05';
    $display->content['new-379acceb-6206-4335-9369-5197ef973b05'] = $pane;
    $display->panels['row3r'][0] = 'new-379acceb-6206-4335-9369-5197ef973b05';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_login__panel_context_05a069a3-2629-4c59-bc0a-b163f883436d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_password__panel_context_412be436-f62a-4e34-9ffe-b0efddb0802e';
  $handler->task = 'user_password';
  $handler->subtask = '';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c66586-9768-4e16-a4b8-c65f3c148ecc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title',
      'title' => '',
      'body' => '<h1>Request new password</h1>',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
    $display->content['new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b'] = $pane;
    $display->panels['row1l'][0] = 'new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
    $pane = new stdClass();
    $pane->pid = 'new-c2e93591-8d1a-4915-af70-8ed777c2a035';
    $pane->panel = 'row3l';
    $pane->type = 'user_password_form';
    $pane->subtype = 'user_password_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-rhWOsv3xu26HX9xyodCv2rrQh8L40uq_i66lueXoKp4',
      'form_token' => 'EblrB6ERMb0Bl0IWbTdNKipyfC69VZ2tDqUjS4gD72k',
      'form_id' => 'ctools_user_password_form_content_type_edit_form',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2e93591-8d1a-4915-af70-8ed777c2a035';
    $display->content['new-c2e93591-8d1a-4915-af70-8ed777c2a035'] = $pane;
    $display->panels['row3l'][0] = 'new-c2e93591-8d1a-4915-af70-8ed777c2a035';
    $pane = new stdClass();
    $pane->pid = 'new-b4b96144-cb06-4d15-8f3c-baf818373e68';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b4b96144-cb06-4d15-8f3c-baf818373e68';
    $display->content['new-b4b96144-cb06-4d15-8f3c-baf818373e68'] = $pane;
    $display->panels['row3r'][0] = 'new-b4b96144-cb06-4d15-8f3c-baf818373e68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
  $handler->conf['display'] = $display;
  $export['user_password__panel_context_412be436-f62a-4e34-9ffe-b0efddb0802e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_register__panel_context_c75f68e8-de39-475d-a58a-09e9a90e3fac';
  $handler->task = 'user_register';
  $handler->subtask = '';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c5a569d1-13b4-444a-ab8c-2b93fca307a0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0b0801b7-e1ce-40b7-80cb-3184b2402230';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title',
      'title' => '',
      'body' => '<h1>Create new account</h1>',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b0801b7-e1ce-40b7-80cb-3184b2402230';
    $display->content['new-0b0801b7-e1ce-40b7-80cb-3184b2402230'] = $pane;
    $display->panels['row1l'][0] = 'new-0b0801b7-e1ce-40b7-80cb-3184b2402230';
    $pane = new stdClass();
    $pane->pid = 'new-557f9a7c-593c-468d-8573-df5c7e61af2a';
    $pane->panel = 'row3l';
    $pane->type = 'user_register_form';
    $pane->subtype = 'user_register_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-DSiFfIaHnQVktasmMwt46_42KD5GJ6znw8wjw9Lxh9M',
      'form_token' => 'Xjr4aSjjFBNDpxvoKCgKQQBzsy9BhG2kGuZDmWUzqcQ',
      'form_id' => 'ctools_user_register_form_content_type_edit_form',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '557f9a7c-593c-468d-8573-df5c7e61af2a';
    $display->content['new-557f9a7c-593c-468d-8573-df5c7e61af2a'] = $pane;
    $display->panels['row3l'][0] = 'new-557f9a7c-593c-468d-8573-df5c7e61af2a';
    $pane = new stdClass();
    $pane->pid = 'new-ec179e30-2871-44e1-8358-98f09f7ea530';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ec179e30-2871-44e1-8358-98f09f7ea530';
    $display->content['new-ec179e30-2871-44e1-8358-98f09f7ea530'] = $pane;
    $display->panels['row3r'][0] = 'new-ec179e30-2871-44e1-8358-98f09f7ea530';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b0801b7-e1ce-40b7-80cb-3184b2402230';
  $handler->conf['display'] = $display;
  $export['user_register__panel_context_c75f68e8-de39-475d-a58a-09e9a90e3fac'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'users__panel_context_a37b291d-1fd5-44e2-8a91-0f7ec6b47463';
  $handler->task = 'users';
  $handler->subtask = '';
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
    'name' => '',
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
  $display->title = 'Login';
  $display->uuid = '08ed6418-93ee-44e5-817c-2217ae61ca2f';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['users__panel_context_a37b291d-1fd5-44e2-8a91-0f7ec6b47463'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_isa_default_page_manager_pages() {

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
      'row1c' => NULL,
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
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
          'md' => '3',
          'lg' => '3',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '3',
          'lg' => '3',
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
          'md' => '6',
          'lg' => '6',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '3',
          'lg' => '3',
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
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2c' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd0c6c36f-9d6c-443b-9a28-22cf73129995';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78';
    $pane->panel = 'row1l';
    $pane->type = 'views';
    $pane->subtype = 'carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
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
    $pane->uuid = '7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78';
    $display->content['new-7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78'] = $pane;
    $display->panels['row1l'][0] = 'new-7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78';
    $pane = new stdClass();
    $pane->pid = 'new-67a14805-8e21-485e-aaeb-464180c75f9f';
    $pane->panel = 'row2c';
    $pane->type = 'views';
    $pane->subtype = 'futures';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->uuid = '67a14805-8e21-485e-aaeb-464180c75f9f';
    $display->content['new-67a14805-8e21-485e-aaeb-464180c75f9f'] = $pane;
    $display->panels['row2c'][0] = 'new-67a14805-8e21-485e-aaeb-464180c75f9f';
    $pane = new stdClass();
    $pane->pid = 'new-eb571c94-187d-4641-be18-43bfd228cb1f';
    $pane->panel = 'row2c';
    $pane->type = 'views';
    $pane->subtype = 'ideas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eb571c94-187d-4641-be18-43bfd228cb1f';
    $display->content['new-eb571c94-187d-4641-be18-43bfd228cb1f'] = $pane;
    $display->panels['row2c'][1] = 'new-eb571c94-187d-4641-be18-43bfd228cb1f';
    $pane = new stdClass();
    $pane->pid = 'new-b7f8fe00-3b1f-443b-b634-c432fd0b6319';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'homepage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
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
    $pane->uuid = 'b7f8fe00-3b1f-443b-b634-c432fd0b6319';
    $display->content['new-b7f8fe00-3b1f-443b-b634-c432fd0b6319'] = $pane;
    $display->panels['row2l'][0] = 'new-b7f8fe00-3b1f-443b-b634-c432fd0b6319';
    $pane = new stdClass();
    $pane->pid = 'new-96ca7897-3f24-4cd3-84dd-68ad31538432';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '96ca7897-3f24-4cd3-84dd-68ad31538432';
    $display->content['new-96ca7897-3f24-4cd3-84dd-68ad31538432'] = $pane;
    $display->panels['row2r'][0] = 'new-96ca7897-3f24-4cd3-84dd-68ad31538432';
    $pane = new stdClass();
    $pane->pid = 'new-30fa2790-e50d-490d-a6cc-daf31a315b84';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => 'Events',
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
    $pane->uuid = '30fa2790-e50d-490d-a6cc-daf31a315b84';
    $display->content['new-30fa2790-e50d-490d-a6cc-daf31a315b84'] = $pane;
    $display->panels['row2r'][1] = 'new-30fa2790-e50d-490d-a6cc-daf31a315b84';
    $pane = new stdClass();
    $pane->pid = 'new-23afba6b-bbb3-4126-9bd8-003e4b5952ce';
    $pane->panel = 'row2r';
    $pane->type = 'views';
    $pane->subtype = 'messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '23afba6b-bbb3-4126-9bd8-003e4b5952ce';
    $display->content['new-23afba6b-bbb3-4126-9bd8-003e4b5952ce'] = $pane;
    $display->panels['row2r'][2] = 'new-23afba6b-bbb3-4126-9bd8-003e4b5952ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'weight' => '3',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_730dd235-5ab2-4c59-9178-02af40c72a5b';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
    'style' => 'bootstrap_region',
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '2dab623f-a44e-4c9b-9a4a-c89549beeadd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17e26d4d-59c1-4730-8d94-f374017fb425';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro Text',
      'title' => '',
      'body' => '<h1>Organise an event or take part in one near you</h1><div class="intro">Futurium offers you the possibility to set up your own meeting on a topic relevant to your town and to invite attendees or to find events organised by other [site:name] members.</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17e26d4d-59c1-4730-8d94-f374017fb425';
    $display->content['new-17e26d4d-59c1-4730-8d94-f374017fb425'] = $pane;
    $display->panels['row1l'][0] = 'new-17e26d4d-59c1-4730-8d94-f374017fb425';
    $pane = new stdClass();
    $pane->pid = 'new-ade53165-092f-4033-a482-632af772e197';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'context' => 'logged-in-user',
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create event_d4eu content',
          ),
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Event CTA',
      'title' => '',
      'body' => '<a class="btn" href="node/add/event-d4eu">Add an Event</a>',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ade53165-092f-4033-a482-632af772e197';
    $display->content['new-ade53165-092f-4033-a482-632af772e197'] = $pane;
    $display->panels['row1l'][1] = 'new-ade53165-092f-4033-a482-632af772e197';
    $pane = new stdClass();
    $pane->pid = 'new-8580d4ab-82bb-4985-a058-fb0fc278bc17';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Login or Register',
      'title' => '',
      'body' => '<a class="btn" href="/user/login">Login</a> or <a class="btn" href="/user/register">Register</a> to create an Event',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8580d4ab-82bb-4985-a058-fb0fc278bc17';
    $display->content['new-8580d4ab-82bb-4985-a058-fb0fc278bc17'] = $pane;
    $display->panels['row1l'][2] = 'new-8580d4ab-82bb-4985-a058-fb0fc278bc17';
    $pane = new stdClass();
    $pane->pid = 'new-722b5121-ad49-404a-a300-c802e7aee61c';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'all_events',
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
    $pane->uuid = '722b5121-ad49-404a-a300-c802e7aee61c';
    $display->content['new-722b5121-ad49-404a-a300-c802e7aee61c'] = $pane;
    $display->panels['row2l'][0] = 'new-722b5121-ad49-404a-a300-c802e7aee61c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_futures';
  $page->task = 'page';
  $page->admin_title = 'Group Futures';
  $page->admin_description = '';
  $page->path = 'node/%node/futures';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Futures',
    'name' => 'menu-group-tabs',
    'weight' => '1',
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
  $handler->name = 'page_group_futures__panel';
  $handler->task = 'page';
  $handler->subtask = 'group_futures';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node-type-futurium-group',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
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
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => '-1',
    ),
    'row2r' => array(
      'style' => '-1',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1528651d-c3ef-4dca-94e7-2029b6ff0830';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9238442e-379e-4721-b835-80cb7062270b';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'node_header',
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
    $pane->uuid = '9238442e-379e-4721-b835-80cb7062270b';
    $display->content['new-9238442e-379e-4721-b835-80cb7062270b'] = $pane;
    $display->panels['row1l'][0] = 'new-9238442e-379e-4721-b835-80cb7062270b';
    $pane = new stdClass();
    $pane->pid = 'new-ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-group-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $display->content['new-ab6cc84c-417a-454e-8442-5f810e2e2a81'] = $pane;
    $display->panels['row2l'][0] = 'new-ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $pane = new stdClass();
    $pane->pid = 'new-edc4e0a9-1ce3-4fd5-a24e-b93ed355093f';
    $pane->panel = 'row3l';
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
      'display' => 'block_4',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->uuid = 'edc4e0a9-1ce3-4fd5-a24e-b93ed355093f';
    $display->content['new-edc4e0a9-1ce3-4fd5-a24e-b93ed355093f'] = $pane;
    $display->panels['row3l'][0] = 'new-edc4e0a9-1ce3-4fd5-a24e-b93ed355093f';
    $pane = new stdClass();
    $pane->pid = 'new-3be4238f-3198-44b8-b1a2-7d5911cae332';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '3be4238f-3198-44b8-b1a2-7d5911cae332';
    $display->content['new-3be4238f-3198-44b8-b1a2-7d5911cae332'] = $pane;
    $display->panels['row3r'][0] = 'new-3be4238f-3198-44b8-b1a2-7d5911cae332';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-edc4e0a9-1ce3-4fd5-a24e-b93ed355093f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_futures'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_ideas';
  $page->task = 'page';
  $page->admin_title = 'Group Ideas';
  $page->admin_description = '';
  $page->path = 'node/%node/ideas';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Ideas',
    'name' => 'navigation',
    'weight' => '2',
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
  $handler->name = 'page_group_ideas__panel_context_61cdf6f0-f870-4881-908f-476be4710e10';
  $handler->task = 'page';
  $handler->subtask = 'group_ideas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node-type-futurium-group',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
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
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => '-1',
    ),
    'row2r' => array(
      'style' => '-1',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1528651d-c3ef-4dca-94e7-2029b6ff0830';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9238442e-379e-4721-b835-80cb7062270b';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'node_header',
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
    $pane->uuid = '9238442e-379e-4721-b835-80cb7062270b';
    $display->content['new-9238442e-379e-4721-b835-80cb7062270b'] = $pane;
    $display->panels['row1l'][0] = 'new-9238442e-379e-4721-b835-80cb7062270b';
    $pane = new stdClass();
    $pane->pid = 'new-ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-group-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $display->content['new-ab6cc84c-417a-454e-8442-5f810e2e2a81'] = $pane;
    $display->panels['row2l'][0] = 'new-ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $pane = new stdClass();
    $pane->pid = 'new-fc16ed84-9469-4ce8-917d-6a076c6ad0c3';
    $pane->panel = 'row3l';
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
      'display' => 'block_2',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->uuid = 'fc16ed84-9469-4ce8-917d-6a076c6ad0c3';
    $display->content['new-fc16ed84-9469-4ce8-917d-6a076c6ad0c3'] = $pane;
    $display->panels['row3l'][0] = 'new-fc16ed84-9469-4ce8-917d-6a076c6ad0c3';
    $pane = new stdClass();
    $pane->pid = 'new-3be4238f-3198-44b8-b1a2-7d5911cae332';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '3be4238f-3198-44b8-b1a2-7d5911cae332';
    $display->content['new-3be4238f-3198-44b8-b1a2-7d5911cae332'] = $pane;
    $display->panels['row3r'][0] = 'new-3be4238f-3198-44b8-b1a2-7d5911cae332';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_ideas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_members';
  $page->task = 'page';
  $page->admin_title = 'Group Members';
  $page->admin_description = '';
  $page->path = 'node/%node/members';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Members',
    'name' => 'navigation',
    'weight' => '3',
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
  $handler->name = 'page_group_members__panel_context_a3d85088-a40f-4bdf-ba09-fa042453a53c';
  $handler->task = 'page';
  $handler->subtask = 'group_members';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node-type-futurium-group',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
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
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => '-1',
    ),
    'row2r' => array(
      'style' => '-1',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1528651d-c3ef-4dca-94e7-2029b6ff0830';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9238442e-379e-4721-b835-80cb7062270b';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'node_header',
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
    $pane->uuid = '9238442e-379e-4721-b835-80cb7062270b';
    $display->content['new-9238442e-379e-4721-b835-80cb7062270b'] = $pane;
    $display->panels['row1l'][0] = 'new-9238442e-379e-4721-b835-80cb7062270b';
    $pane = new stdClass();
    $pane->pid = 'new-ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-group-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $display->content['new-ab6cc84c-417a-454e-8442-5f810e2e2a81'] = $pane;
    $display->panels['row2l'][0] = 'new-ab6cc84c-417a-454e-8442-5f810e2e2a81';
    $pane = new stdClass();
    $pane->pid = 'new-254bb01f-3807-4dae-8258-8090f51f32f3';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'group_people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->uuid = '254bb01f-3807-4dae-8258-8090f51f32f3';
    $display->content['new-254bb01f-3807-4dae-8258-8090f51f32f3'] = $pane;
    $display->panels['row3l'][0] = 'new-254bb01f-3807-4dae-8258-8090f51f32f3';
    $pane = new stdClass();
    $pane->pid = 'new-fada06e0-0fc8-42cd-ba9c-c46231c913d9';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-group_add_member';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Add a new member',
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
    $pane->uuid = 'fada06e0-0fc8-42cd-ba9c-c46231c913d9';
    $display->content['new-fada06e0-0fc8-42cd-ba9c-c46231c913d9'] = $pane;
    $display->panels['row3r'][0] = 'new-fada06e0-0fc8-42cd-ba9c-c46231c913d9';
    $pane = new stdClass();
    $pane->pid = 'new-4d6b0563-2be1-4869-a925-3552db7faad2';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-group_send_message';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Send to your group',
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
    $pane->uuid = '4d6b0563-2be1-4869-a925-3552db7faad2';
    $display->content['new-4d6b0563-2be1-4869-a925-3552db7faad2'] = $pane;
    $display->panels['row3r'][1] = 'new-4d6b0563-2be1-4869-a925-3552db7faad2';
    $pane = new stdClass();
    $pane->pid = 'new-3be4238f-3198-44b8-b1a2-7d5911cae332';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3be4238f-3198-44b8-b1a2-7d5911cae332';
    $display->content['new-3be4238f-3198-44b8-b1a2-7d5911cae332'] = $pane;
    $display->panels['row3r'][2] = 'new-3be4238f-3198-44b8-b1a2-7d5911cae332';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_members'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ideas';
  $page->task = 'page';
  $page->admin_title = 'Ideas';
  $page->admin_description = '';
  $page->path = 'ideas';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Ideas',
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
  $handler->name = 'page_ideas__panel_context_a922d911-c9e7-4027-ab07-6c18a8ad1a7b';
  $handler->task = 'page';
  $handler->subtask = 'ideas';
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
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
    'style' => 'bootstrap_region',
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Ideas';
  $display->uuid = '3f1f812e-7210-4adb-afdb-82591c7819dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8bb9fe6-afd5-41b4-a675-0151150d8ab7';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro Text',
      'title' => '',
      'body' => '<h1>Explore new ideas and find answers in the Ideas Market Place</h1><div class="intro">Ideas are solutions, policies, ways of realising futures. Link ideas to futures and vice-versa.</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8bb9fe6-afd5-41b4-a675-0151150d8ab7';
    $display->content['new-c8bb9fe6-afd5-41b4-a675-0151150d8ab7'] = $pane;
    $display->panels['row1l'][0] = 'new-c8bb9fe6-afd5-41b4-a675-0151150d8ab7';
    $pane = new stdClass();
    $pane->pid = 'new-9f0ae900-5fe7-4817-b7d9-ee0620244fe8';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'context' => 'logged-in-user',
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create ideas content',
          ),
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Idea CTA',
      'title' => '',
      'body' => '<a class="btn" href="node/add/ideas">Add an Idea</a>',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9f0ae900-5fe7-4817-b7d9-ee0620244fe8';
    $display->content['new-9f0ae900-5fe7-4817-b7d9-ee0620244fe8'] = $pane;
    $display->panels['row1l'][1] = 'new-9f0ae900-5fe7-4817-b7d9-ee0620244fe8';
    $pane = new stdClass();
    $pane->pid = 'new-01128eaa-6f57-43c9-8744-8fb3409f89a9';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Login or Register',
      'title' => '',
      'body' => '<a class="btn" href="/user/login">Login</a> or <a class="btn" href="/user/register">Register</a> to create an Idea',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '01128eaa-6f57-43c9-8744-8fb3409f89a9';
    $display->content['new-01128eaa-6f57-43c9-8744-8fb3409f89a9'] = $pane;
    $display->panels['row1l'][2] = 'new-01128eaa-6f57-43c9-8744-8fb3409f89a9';
    $pane = new stdClass();
    $pane->pid = 'new-74ab1b6e-8e8e-422a-8c59-757601a78377';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'ideas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '74ab1b6e-8e8e-422a-8c59-757601a78377';
    $display->content['new-74ab1b6e-8e8e-422a-8c59-757601a78377'] = $pane;
    $display->panels['row2l'][0] = 'new-74ab1b6e-8e8e-422a-8c59-757601a78377';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ideas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'library';
  $page->task = 'page';
  $page->admin_title = 'Library';
  $page->admin_description = '';
  $page->path = 'library';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Library',
    'name' => 'main-menu',
    'weight' => '2',
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
  $handler->name = 'page_library__panel_context_3bd6496c-ff5e-4600-9100-04b67f17466c';
  $handler->task = 'page';
  $handler->subtask = 'library';
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
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
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
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '9',
          'sm' => '9',
          'md' => '9',
          'lg' => '9',
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
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Library';
  $display->uuid = 'e03c4c38-3270-4c25-8cde-4cab1091955e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74abb4b8-0814-435b-9df6-4ae7a7a64d43';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro Text',
      'title' => '',
      'body' => '<h1>Explore the library</h1><div class="intro"><span>Upload evidence to link to your future or idea: reports, studies, articles. Search the library for existing material.</span></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74abb4b8-0814-435b-9df6-4ae7a7a64d43';
    $display->content['new-74abb4b8-0814-435b-9df6-4ae7a7a64d43'] = $pane;
    $display->panels['row1l'][0] = 'new-74abb4b8-0814-435b-9df6-4ae7a7a64d43';
    $pane = new stdClass();
    $pane->pid = 'new-10914b57-4e0b-40f2-b0f8-381a52e2d005';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create evidence content',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Library Item CTA',
      'title' => '',
      'body' => '<a class="btn" href="node/add/evidence">Add Evidence</a>',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '10914b57-4e0b-40f2-b0f8-381a52e2d005';
    $display->content['new-10914b57-4e0b-40f2-b0f8-381a52e2d005'] = $pane;
    $display->panels['row1l'][1] = 'new-10914b57-4e0b-40f2-b0f8-381a52e2d005';
    $pane = new stdClass();
    $pane->pid = 'new-56204ba5-7327-460f-babe-f017d4fb9b02';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Login or Register',
      'title' => '',
      'body' => '<a class="btn" href="/user/login">Login</a> or <a class="btn" href="/user/register">Register</a> to create a Library Item',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '56204ba5-7327-460f-babe-f017d4fb9b02';
    $display->content['new-56204ba5-7327-460f-babe-f017d4fb9b02'] = $pane;
    $display->panels['row1l'][2] = 'new-56204ba5-7327-460f-babe-f017d4fb9b02';
    $pane = new stdClass();
    $pane->pid = 'new-f1142d9b-5be4-44ee-8970-0bb33ea67916';
    $pane->panel = 'row2l';
    $pane->type = 'views_panes';
    $pane->subtype = 'library-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '%1',
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
    $pane->uuid = 'f1142d9b-5be4-44ee-8970-0bb33ea67916';
    $display->content['new-f1142d9b-5be4-44ee-8970-0bb33ea67916'] = $pane;
    $display->panels['row2l'][0] = 'new-f1142d9b-5be4-44ee-8970-0bb33ea67916';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f1142d9b-5be4-44ee-8970-0bb33ea67916';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['library'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_events';
  $page->task = 'page';
  $page->admin_title = 'User Events';
  $page->admin_description = '';
  $page->path = 'user/%user/events';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Events',
    'name' => 'user-menu',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
      'keyword' => 'user',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_events__panel_context_aff72b62-fff8-4d72-9322-3a574eb37514';
  $handler->task = 'page';
  $handler->subtask = 'user_events';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
        'css_class' => 'nopadding',
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
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c0e8661b-2323-444f-b8d5-cc9bf45d6277';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'user_header',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nopadding',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f3abb26-46a1-435d-b778-9260a7b46890';
    $display->content['new-0f3abb26-46a1-435d-b778-9260a7b46890'] = $pane;
    $display->panels['row1l'][0] = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane = new stdClass();
    $pane->pid = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nav nav-pills',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $display->content['new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d'] = $pane;
    $display->panels['row2l'][0] = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane = new stdClass();
    $pane->pid = 'new-59d72dab-6656-49bb-b1b0-3f07997d0876';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
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
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Events',
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
    $pane->uuid = '59d72dab-6656-49bb-b1b0-3f07997d0876';
    $display->content['new-59d72dab-6656-49bb-b1b0-3f07997d0876'] = $pane;
    $display->panels['row3l'][0] = 'new-59d72dab-6656-49bb-b1b0-3f07997d0876';
    $pane = new stdClass();
    $pane->pid = 'new-8bda5164-df41-435d-87c9-3ceebc3194cb';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Events I\'m attending',
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
    $pane->uuid = '8bda5164-df41-435d-87c9-3ceebc3194cb';
    $display->content['new-8bda5164-df41-435d-87c9-3ceebc3194cb'] = $pane;
    $display->panels['row3l'][1] = 'new-8bda5164-df41-435d-87c9-3ceebc3194cb';
    $pane = new stdClass();
    $pane->pid = 'new-cfd9835e-6bc7-4cbf-b61d-b7c03ed3127a';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Links',
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
    $pane->uuid = 'cfd9835e-6bc7-4cbf-b61d-b7c03ed3127a';
    $display->content['new-cfd9835e-6bc7-4cbf-b61d-b7c03ed3127a'] = $pane;
    $display->panels['row3r'][0] = 'new-cfd9835e-6bc7-4cbf-b61d-b7c03ed3127a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_evidence';
  $page->task = 'page';
  $page->admin_title = 'User Evidence';
  $page->admin_description = '';
  $page->path = 'user/%user/evidence';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Evidence',
    'name' => 'navigation',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
      'keyword' => 'user',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_evidence__panel_context_56e65459-4da3-4b31-b80e-2b6e2830d700';
  $handler->task = 'page';
  $handler->subtask = 'user_evidence';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
        'css_class' => 'nopadding',
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
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c0e8661b-2323-444f-b8d5-cc9bf45d6277';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'user_header',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f3abb26-46a1-435d-b778-9260a7b46890';
    $display->content['new-0f3abb26-46a1-435d-b778-9260a7b46890'] = $pane;
    $display->panels['row1l'][0] = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane = new stdClass();
    $pane->pid = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nav nav-pills',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $display->content['new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d'] = $pane;
    $display->panels['row2l'][0] = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane = new stdClass();
    $pane->pid = 'new-b9c826d9-e20f-49b3-8368-5fbf019a7b2b';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'library';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '12',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Evidence',
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
    $pane->uuid = 'b9c826d9-e20f-49b3-8368-5fbf019a7b2b';
    $display->content['new-b9c826d9-e20f-49b3-8368-5fbf019a7b2b'] = $pane;
    $display->panels['row3l'][0] = 'new-b9c826d9-e20f-49b3-8368-5fbf019a7b2b';
    $pane = new stdClass();
    $pane->pid = 'new-2e1ee934-3d09-46dc-bd43-5e1d00f23ab1';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Links',
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
    $pane->uuid = '2e1ee934-3d09-46dc-bd43-5e1d00f23ab1';
    $display->content['new-2e1ee934-3d09-46dc-bd43-5e1d00f23ab1'] = $pane;
    $display->panels['row3r'][0] = 'new-2e1ee934-3d09-46dc-bd43-5e1d00f23ab1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_evidence'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_futures';
  $page->task = 'page';
  $page->admin_title = 'User Futures';
  $page->admin_description = '';
  $page->path = 'user/%user/futures';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Futures',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
      'keyword' => 'user',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_futures__panel_context_66e9e820-b570-4eff-833e-c3636a975247';
  $handler->task = 'page';
  $handler->subtask = 'user_futures';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
        'css_class' => 'nopadding',
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
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c0e8661b-2323-444f-b8d5-cc9bf45d6277';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'user_header',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f3abb26-46a1-435d-b778-9260a7b46890';
    $display->content['new-0f3abb26-46a1-435d-b778-9260a7b46890'] = $pane;
    $display->panels['row1l'][0] = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane = new stdClass();
    $pane->pid = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nav nav-pills',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $display->content['new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d'] = $pane;
    $display->panels['row2l'][0] = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane = new stdClass();
    $pane->pid = 'new-e558d178-af8e-44a4-840a-71c3df0d7092';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'futures';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Futures',
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
    $pane->uuid = 'e558d178-af8e-44a4-840a-71c3df0d7092';
    $display->content['new-e558d178-af8e-44a4-840a-71c3df0d7092'] = $pane;
    $display->panels['row3l'][0] = 'new-e558d178-af8e-44a4-840a-71c3df0d7092';
    $pane = new stdClass();
    $pane->pid = 'new-9aa48639-2b06-4b0b-8f68-2577faeb5e4e';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Links',
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
    $pane->uuid = '9aa48639-2b06-4b0b-8f68-2577faeb5e4e';
    $display->content['new-9aa48639-2b06-4b0b-8f68-2577faeb5e4e'] = $pane;
    $display->panels['row3r'][0] = 'new-9aa48639-2b06-4b0b-8f68-2577faeb5e4e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_futures'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_groups';
  $page->task = 'page';
  $page->admin_title = 'User Groups';
  $page->admin_description = '';
  $page->path = 'user/%user/groups';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Groups',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
      'keyword' => 'user',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_groups__panel_context_7387eb03-46a1-4b33-9db0-e2c7ec1265c7';
  $handler->task = 'page';
  $handler->subtask = 'user_groups';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
        'css_class' => 'nopadding',
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
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c0e8661b-2323-444f-b8d5-cc9bf45d6277';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'user_header',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f3abb26-46a1-435d-b778-9260a7b46890';
    $display->content['new-0f3abb26-46a1-435d-b778-9260a7b46890'] = $pane;
    $display->panels['row1l'][0] = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane = new stdClass();
    $pane->pid = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nav nav-pills',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $display->content['new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d'] = $pane;
    $display->panels['row2l'][0] = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane = new stdClass();
    $pane->pid = 'new-b6d8c3fd-b52e-4150-9d7d-09bfd4fd3c42';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'user_groups';
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
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Groups',
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
    $pane->uuid = 'b6d8c3fd-b52e-4150-9d7d-09bfd4fd3c42';
    $display->content['new-b6d8c3fd-b52e-4150-9d7d-09bfd4fd3c42'] = $pane;
    $display->panels['row3l'][0] = 'new-b6d8c3fd-b52e-4150-9d7d-09bfd4fd3c42';
    $pane = new stdClass();
    $pane->pid = 'new-8a8918f5-92d8-41d7-bbb2-cf7197e7b4d8';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Links',
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
    $pane->uuid = '8a8918f5-92d8-41d7-bbb2-cf7197e7b4d8';
    $display->content['new-8a8918f5-92d8-41d7-bbb2-cf7197e7b4d8'] = $pane;
    $display->panels['row3r'][0] = 'new-8a8918f5-92d8-41d7-bbb2-cf7197e7b4d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_groups'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_ideas';
  $page->task = 'page';
  $page->admin_title = 'User Ideas';
  $page->admin_description = '';
  $page->path = 'user/%user/ideas';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Ideas',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
      'keyword' => 'user',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_ideas__panel_context_862a35b6-32af-43e9-ab67-20f10949a171';
  $handler->task = 'page';
  $handler->subtask = 'user_ideas';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
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
        'css_class' => 'nopadding',
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
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
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
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c0e8661b-2323-444f-b8d5-cc9bf45d6277';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane->panel = 'row1l';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'user_header',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f3abb26-46a1-435d-b778-9260a7b46890';
    $display->content['new-0f3abb26-46a1-435d-b778-9260a7b46890'] = $pane;
    $display->panels['row1l'][0] = 'new-0f3abb26-46a1-435d-b778-9260a7b46890';
    $pane = new stdClass();
    $pane->pid = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nav nav-pills',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $display->content['new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d'] = $pane;
    $display->panels['row2l'][0] = 'new-e49d9ec2-7eb6-4fbe-bc35-1bbfd2f0c48d';
    $pane = new stdClass();
    $pane->pid = 'new-558b2aa5-b6da-4532-94e0-5fcacea39e00';
    $pane->panel = 'row3l';
    $pane->type = 'views';
    $pane->subtype = 'ideas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Ideas',
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
    $pane->uuid = '558b2aa5-b6da-4532-94e0-5fcacea39e00';
    $display->content['new-558b2aa5-b6da-4532-94e0-5fcacea39e00'] = $pane;
    $display->panels['row3l'][0] = 'new-558b2aa5-b6da-4532-94e0-5fcacea39e00';
    $pane = new stdClass();
    $pane->pid = 'new-99fe7a62-3f1f-4997-8374-b8bb913a0caf';
    $pane->panel = 'row3r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_isa_extras-contextualized_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Links',
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
    $pane->uuid = '99fe7a62-3f1f-4997-8374-b8bb913a0caf';
    $display->content['new-99fe7a62-3f1f-4997-8374-b8bb913a0caf'] = $pane;
    $display->panels['row3r'][0] = 'new-99fe7a62-3f1f-4997-8374-b8bb913a0caf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_ideas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about__panel';
  $handler->task = 'page';
  $handler->subtask = 'about';
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
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
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e53db3c8-d04e-492b-b834-b554f52153d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-90dcdcea-3b50-4e80-912a-fabe71b27d80';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Title',
      'title' => '',
      'body' => '<h1>About Futurium</h1>

  Futurium is the online platform developed by the European Commission to facilitate citizen engagement in policy conversations. It combines the informal character of social networks with the support of evidence data to engage stakeholders in shaping the futures and the policy ideas that matter to them. ',
      'format' => 'full',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '90dcdcea-3b50-4e80-912a-fabe71b27d80';
    $display->content['new-90dcdcea-3b50-4e80-912a-fabe71b27d80'] = $pane;
    $display->panels['row1l'][0] = 'new-90dcdcea-3b50-4e80-912a-fabe71b27d80';
    $pane = new stdClass();
    $pane->pid = 'new-631be3c3-320c-4e40-8e60-0fa3a496b522';
    $pane->panel = 'row2l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Content',
      'title' => '',
      'body' => '<h2>Engagement in policy making</h2><p>The Futurium aims to respond to the growing demand for civic participation in policy matters. Its structured approach to content co-creation and synthesis allows streamlining otherwise complex and expensive processes.&nbsp; Stakeholders use the platform to co-create visions (for instance the future of their city), anticipate possible challenges and opportunities, upload evidence (e.g. references to studies, statistics, etc.) to support their opinions, and propose ideas to their governments.&nbsp;</p><p>The online engagement process can be naturally combined with in-person conversations or brainstorming events. The content generated during the in-person events follows the same Futurium content\'s structure (visions, policies,…) and can therefore be easily integrated into the online platform.</p><p>This facilitates the creation of a viral process to attract more and more stakeholders into the online platform.</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">Policy making as a collective intelligence process<o:p></o:p></h2><p>The Futurium is based on the metaphor of "collective brain" (or collective intelligence) according to which stakeholders and policy makers form a social network to co-create policies on the basis of:</p><p>1.&nbsp;&nbsp; &nbsp;The aspirations of the social network, i.e. how participants imagine the future of their town, country, organisation, etc.<br>2.&nbsp;&nbsp; &nbsp;The evidence, stemming from the observation of the real world and elicited through data (e.g. trends, statistics,...).<br>3.&nbsp;&nbsp; &nbsp;The boundary constraints posed by the legal framework, i.e. policies have to comply with the rules and law.<br>4.&nbsp;&nbsp; &nbsp;Other factors reflecting the interest of the stakeholders reflecting their emotional reaction to a particular topic.&nbsp;</p><p>Once adopted and executed, the policies are expected to produce impacts on the real world (on people, economy, environment, etc.), that can in turn be monitored and reflected back into the policy making cycle, thus closing the loop.</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">A simple data model<o:p></o:p></h2><p>To facilitate the collaborative process between policymakers and stakeholders, the Futurium frames the co-creation process into small pieces of content corresponding to common policy concepts (visions, challenges, opportunities, policies, impacts,…).</p><p>This is where the platform differs from popular social media: it adds a thin layer of "semantic" structure to the content that can be posted in order to make the conversations clearer and more manageable.</p><p>Thanks to this framed approach, it becomes much easier to draw summaries, provide feedback the stakeholders and make policy making more open and participatory.</p><p>The platform\'s members can co-create (wiki) and vote four different types of content:</p><ul><li><u>Future</u>: a vision of what the world might look like at any given point in time, and the challenges and opportunities associated with it. A member can vote the desirability (similar to the popular "I Like") and likelihood of a future (the probability that it will materialise.</li><li><u>Policy</u>: an action designed to realise a chosen future. A policy may produce an impact and may be more or less plausible (e.g. depending on costs or legal constraints). Both concepts can be voted by the platform\'s members.</li><li><u>Evidence</u>: A reference to a data source used to provide evidence to futures and policy ideas (e.g. a bibliographic link, statistical data,…).</li><li><u>Events</u>: bringing together stakeholders to discuss futures and policy ideas.</li></ul><p>Futurium offers standard tools available in most of the social network (blogs, surveys, etc.), the possibility to manage thematic groups as well as to structure the conversation into a configurable workflow.</p><p>Futurium provides also links to social media and the possibility to integrate data from various sources under the form of \'evidence\'.</p><p>The content can be structured into themes or topics so as to facilitate navigation and search. The use of tags provides full flexibility to organise content.</p><p>The platform\'s owners can select the themes and shape the content in the way they want (e.g. urban mobility, health services, education, etc.).</p><p>The platform offers both stakeholders and policy makers the possibility analyse the content co-created by the members, including the possibility to draw semi-automatic summaries of the content (organised by themes, groups or other variables).</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">Community management<o:p></o:p></h2><p>In order to facilitate the engagement and co-creation process, the platform offers a dashboard of tools to community managers, i.e. users with the special role of ensuring a good "housekeeping" of the platform (curating content, resolving potential controversies, removing offensive comments, inviting new users to join, sending messages to group of users, etc.).&nbsp;</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">An evolving platform<o:p></o:p></h2><p>The Futurium is an open source project under the ISA (Interoperable Solutions for public Administration) programme.</p><p>It is work in progress. Everyone can contribute to its further improvement or use it freely.&nbsp;&nbsp;</p><p>&nbsp;</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '631be3c3-320c-4e40-8e60-0fa3a496b522';
    $display->content['new-631be3c3-320c-4e40-8e60-0fa3a496b522'] = $pane;
    $display->panels['row2l'][0] = 'new-631be3c3-320c-4e40-8e60-0fa3a496b522';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  return $pages;

}
