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
      'center' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
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
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
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
      'bottom' => NULL,
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
      'middle' => NULL,
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
          'xs' => '8',
          'sm' => '8',
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
          'xs' => '4',
          'sm' => '4',
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
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
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
    $pane->pid = 'new-159bcf64-0b50-4a48-b001-e2302215eed2';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '600',
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
    $pane->uuid = '159bcf64-0b50-4a48-b001-e2302215eed2';
    $display->content['new-159bcf64-0b50-4a48-b001-e2302215eed2'] = $pane;
    $display->panels['row2l'][0] = 'new-159bcf64-0b50-4a48-b001-e2302215eed2';
    $pane = new stdClass();
    $pane->pid = 'new-1d523f52-ae44-426b-a346-d432049f5dd0';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-futurium_linker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related content',
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
    $pane->uuid = '1d523f52-ae44-426b-a346-d432049f5dd0';
    $display->content['new-1d523f52-ae44-426b-a346-d432049f5dd0'] = $pane;
    $display->panels['row2l'][1] = 'new-1d523f52-ae44-426b-a346-d432049f5dd0';
    $pane = new stdClass();
    $pane->pid = 'new-cbe1d2c9-2f9d-48d7-a995-98e992e48d73';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
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
    $pane->uuid = 'cbe1d2c9-2f9d-48d7-a995-98e992e48d73';
    $display->content['new-cbe1d2c9-2f9d-48d7-a995-98e992e48d73'] = $pane;
    $display->panels['row2l'][2] = 'new-cbe1d2c9-2f9d-48d7-a995-98e992e48d73';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4c0054ea-42ad-42f9-bda7-fed05fe208ab';
    $display->content['new-4c0054ea-42ad-42f9-bda7-fed05fe208ab'] = $pane;
    $display->panels['row2l'][3] = 'new-4c0054ea-42ad-42f9-bda7-fed05fe208ab';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a4a65293-e53d-45e4-b521-8b43caf09e52';
    $display->content['new-a4a65293-e53d-45e4-b521-8b43caf09e52'] = $pane;
    $display->panels['row2l'][4] = 'new-a4a65293-e53d-45e4-b521-8b43caf09e52';
    $pane = new stdClass();
    $pane->pid = 'new-98244a54-a0db-48cf-8826-1b24e7e5453c';
    $pane->panel = 'row2r';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date_time';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '98244a54-a0db-48cf-8826-1b24e7e5453c';
    $display->content['new-98244a54-a0db-48cf-8826-1b24e7e5453c'] = $pane;
    $display->panels['row2r'][0] = 'new-98244a54-a0db-48cf-8826-1b24e7e5453c';
    $pane = new stdClass();
    $pane->pid = 'new-d579a732-0838-487a-8449-f96c44f80fa7';
    $pane->panel = 'row2r';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd579a732-0838-487a-8449-f96c44f80fa7';
    $display->content['new-d579a732-0838-487a-8449-f96c44f80fa7'] = $pane;
    $display->panels['row2r'][1] = 'new-d579a732-0838-487a-8449-f96c44f80fa7';
    $pane = new stdClass();
    $pane->pid = 'new-bec0da8a-0003-4d8d-b5fc-fb01f26f5af6';
    $pane->panel = 'row2r';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_coordinates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'geofield_map_map',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'geofield_map_width' => '100%',
        'geofield_map_height' => '300px',
        'geofield_map_zoom' => '8',
        'geofield_map_min_zoom' => '0',
        'geofield_map_max_zoom' => '0',
        'geofield_map_controltype' => 'default',
        'geofield_map_mtc' => 'standard',
        'geofield_map_pancontrol' => 1,
        'geofield_map_maptype' => 'map',
        'geofield_map_baselayers_map' => 1,
        'geofield_map_baselayers_satellite' => 1,
        'geofield_map_baselayers_hybrid' => 1,
        'geofield_map_baselayers_physical' => 0,
        'geofield_map_scale' => 0,
        'geofield_map_overview' => 0,
        'geofield_map_overview_opened' => 0,
        'geofield_map_scrollwheel' => 0,
        'geofield_map_draggable' => 0,
        'geofield_map_streetview_show' => 0,
        'geofield_map_center' => array(
          'lat' => '',
          'lon' => '',
          'geocode' => 'Find my location',
        ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bec0da8a-0003-4d8d-b5fc-fb01f26f5af6';
    $display->content['new-bec0da8a-0003-4d8d-b5fc-fb01f26f5af6'] = $pane;
    $display->panels['row2r'][2] = 'new-bec0da8a-0003-4d8d-b5fc-fb01f26f5af6';
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
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
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
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
      'row2r' => NULL,
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
      'style' => '-1',
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
    $pane->pid = 'new-d12d4fa2-e9dc-4bd0-8396-be83f86050c7';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-futurium_linker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related content',
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
    $pane->uuid = 'd12d4fa2-e9dc-4bd0-8396-be83f86050c7';
    $display->content['new-d12d4fa2-e9dc-4bd0-8396-be83f86050c7'] = $pane;
    $display->panels['row2l'][2] = 'new-d12d4fa2-e9dc-4bd0-8396-be83f86050c7';
    $pane = new stdClass();
    $pane->pid = 'new-b265a268-d831-47e7-b7b7-03f35f7ccc9b';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
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
    $pane->uuid = 'b265a268-d831-47e7-b7b7-03f35f7ccc9b';
    $display->content['new-b265a268-d831-47e7-b7b7-03f35f7ccc9b'] = $pane;
    $display->panels['row2l'][3] = 'new-b265a268-d831-47e7-b7b7-03f35f7ccc9b';
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
      'center' => NULL,
      'top' => array(
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
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
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
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
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
      'bottom' => NULL,
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
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8dc41bbb-7faa-4476-843e-5f977a854684';
    $display->content['new-8dc41bbb-7faa-4476-843e-5f977a854684'] = $pane;
    $display->panels['row1r'][0] = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
    $pane = new stdClass();
    $pane->pid = 'new-064e630b-0850-4bdd-a66f-8493133ca695';
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
    $pane->uuid = '064e630b-0850-4bdd-a66f-8493133ca695';
    $display->content['new-064e630b-0850-4bdd-a66f-8493133ca695'] = $pane;
    $display->panels['row2l'][0] = 'new-064e630b-0850-4bdd-a66f-8493133ca695';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $display->content['new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858'] = $pane;
    $display->panels['row2l'][1] = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane = new stdClass();
    $pane->pid = 'new-72d65fa8-cad6-4f9d-92a1-397515104430';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-futurium_linker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related content',
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
    $pane->uuid = '72d65fa8-cad6-4f9d-92a1-397515104430';
    $display->content['new-72d65fa8-cad6-4f9d-92a1-397515104430'] = $pane;
    $display->panels['row2l'][2] = 'new-72d65fa8-cad6-4f9d-92a1-397515104430';
    $pane = new stdClass();
    $pane->pid = 'new-5bed97ee-aed4-44e1-8ead-223dc95dc6f8';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
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
    $pane->uuid = '5bed97ee-aed4-44e1-8ead-223dc95dc6f8';
    $display->content['new-5bed97ee-aed4-44e1-8ead-223dc95dc6f8'] = $pane;
    $display->panels['row2l'][3] = 'new-5bed97ee-aed4-44e1-8ead-223dc95dc6f8';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '187e3f2c-a257-4459-953b-ed3da549df42';
    $display->content['new-187e3f2c-a257-4459-953b-ed3da549df42'] = $pane;
    $display->panels['row2l'][5] = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane = new stdClass();
    $pane->pid = 'new-abe1d303-516d-42e9-b9ac-a7e79e7b2ed5';
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
    $pane->uuid = 'abe1d303-516d-42e9-b9ac-a7e79e7b2ed5';
    $display->content['new-abe1d303-516d-42e9-b9ac-a7e79e7b2ed5'] = $pane;
    $display->panels['row2r'][0] = 'new-abe1d303-516d-42e9-b9ac-a7e79e7b2ed5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__idea'] = $handler;

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
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
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
  $display->uuid = 'e5c8b57b-54de-42f1-915e-20adff354536';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86523247-cd7f-459b-bc85-ce0059d4b9f3';
    $pane->panel = 'row2l';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
      'center' => NULL,
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '2',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '2',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'row1l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
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
          'xs' => '8',
          'sm' => '8',
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
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
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
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1c' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_firstname %user:field_lastname';
  $display->uuid = '69e2cbf7-423b-4507-86a4-70ad4d326738';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-37c465e7-891c-406d-8394-011fb29ff658';
    $pane->panel = 'row1c';
    $pane->type = 'token';
    $pane->subtype = 'user:name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '37c465e7-891c-406d-8394-011fb29ff658';
    $display->content['new-37c465e7-891c-406d-8394-011fb29ff658'] = $pane;
    $display->panels['row1c'][0] = 'new-37c465e7-891c-406d-8394-011fb29ff658';
    $pane = new stdClass();
    $pane->pid = 'new-cff41d88-c4d3-4b58-a1de-82ab49636217';
    $pane->panel = 'row1c';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="%user:edit-url">Edit</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cff41d88-c4d3-4b58-a1de-82ab49636217';
    $display->content['new-cff41d88-c4d3-4b58-a1de-82ab49636217'] = $pane;
    $display->panels['row1c'][1] = 'new-cff41d88-c4d3-4b58-a1de-82ab49636217';
    $pane = new stdClass();
    $pane->pid = 'new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
    $pane->panel = 'row1l';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
    $display->content['new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb'] = $pane;
    $display->panels['row1l'][0] = 'new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
    $pane = new stdClass();
    $pane->pid = 'new-23dced38-5182-43d9-96d2-0df5dee6ba9f';
    $pane->panel = 'row1r';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Facebook</p>
<p>Twitter</p>
<p>Linkedin</p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23dced38-5182-43d9-96d2-0df5dee6ba9f';
    $display->content['new-23dced38-5182-43d9-96d2-0df5dee6ba9f'] = $pane;
    $display->panels['row1r'][0] = 'new-23dced38-5182-43d9-96d2-0df5dee6ba9f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_isa_default_page_manager_pages() {
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
      'center' => NULL,
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
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
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
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Discover the next event near you</h1><div class="intro">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris et neque metus. Sed aliquet ullamcorper sapien, vitae scelerisque nulla facilisis non. Cras lobortis eros non risus scelerisque tincidunt. Donec et felis sit amet nisl tincidunt tincidunt eget et ligula.</div>',
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
    $pane->pid = 'new-a4080d0d-6874-4724-b2a0-e00c3d7b54fc';
    $pane->panel = 'row2l';
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
      'display' => 'upcoming',
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
    $pane->uuid = 'a4080d0d-6874-4724-b2a0-e00c3d7b54fc';
    $display->content['new-a4080d0d-6874-4724-b2a0-e00c3d7b54fc'] = $pane;
    $display->panels['row2l'][0] = 'new-a4080d0d-6874-4724-b2a0-e00c3d7b54fc';
    $pane = new stdClass();
    $pane->pid = 'new-0d67d5e5-4968-4833-8186-05d2e69f57d2';
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
      'display' => 'block_1',
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
    $pane->uuid = '0d67d5e5-4968-4833-8186-05d2e69f57d2';
    $display->content['new-0d67d5e5-4968-4833-8186-05d2e69f57d2'] = $pane;
    $display->panels['row3l'][0] = 'new-0d67d5e5-4968-4833-8186-05d2e69f57d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

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
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-1',
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
      'row2c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '6',
          'sm' => '6',
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
    $pane->pid = 'new-d1c09831-147b-4e02-8691-2ee50dcabd60';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Banner Image',
      'title' => '',
      'body' => '<div class="slide-image-wrapper">
      <img src="http://www.opentaxconsultancy.co.uk/img/banner.jpg">

      <div class="shadow-content">
        <h1>Some random idea</h1>
        <div class="more-link"><a href="#">Learn more</a></div>
      </div>
      <div class="shadow">
      </div>
    </div>',
      'format' => 'nowysiwig',
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
    $pane->uuid = 'd1c09831-147b-4e02-8691-2ee50dcabd60';
    $display->content['new-d1c09831-147b-4e02-8691-2ee50dcabd60'] = $pane;
    $display->panels['row1l'][0] = 'new-d1c09831-147b-4e02-8691-2ee50dcabd60';
    $pane = new stdClass();
    $pane->pid = 'new-b7f8fe00-3b1f-443b-b634-c432fd0b6319';
    $pane->panel = 'row2c';
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
    $display->panels['row2c'][0] = 'new-b7f8fe00-3b1f-443b-b634-c432fd0b6319';
    $pane = new stdClass();
    $pane->pid = 'new-eb571c94-187d-4641-be18-43bfd228cb1f';
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
    $pane->uuid = 'eb571c94-187d-4641-be18-43bfd228cb1f';
    $display->content['new-eb571c94-187d-4641-be18-43bfd228cb1f'] = $pane;
    $display->panels['row2l'][0] = 'new-eb571c94-187d-4641-be18-43bfd228cb1f';
    $pane = new stdClass();
    $pane->pid = 'new-23afba6b-bbb3-4126-9bd8-003e4b5952ce';
    $pane->panel = 'row2l';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23afba6b-bbb3-4126-9bd8-003e4b5952ce';
    $display->content['new-23afba6b-bbb3-4126-9bd8-003e4b5952ce'] = $pane;
    $display->panels['row2l'][1] = 'new-23afba6b-bbb3-4126-9bd8-003e4b5952ce';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

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
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
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
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
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
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Explore new ideas and find answers in the Ideas Market Place</h1><div class="intro">This is the place where everybody can share, discuss and support ideas</div>',
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
    $pane->pid = 'new-74ab1b6e-8e8e-422a-8c59-757601a78377';
    $pane->panel = 'row2l';
    $pane->type = 'views';
    $pane->subtype = 'ideas';
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
    $pane = new stdClass();
    $pane->pid = 'new-6d275733-e780-48e3-bc00-affbee8f8da9';
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
    $pane->uuid = '6d275733-e780-48e3-bc00-affbee8f8da9';
    $display->content['new-6d275733-e780-48e3-bc00-affbee8f8da9'] = $pane;
    $display->panels['row3l'][0] = 'new-6d275733-e780-48e3-bc00-affbee8f8da9';
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
      'top' => NULL,
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
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
      'middle' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
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
      'right' => NULL,
      'bottom' => NULL,
      'row1l' => NULL,
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
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
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
      'admin_title' => 'Intro',
      'title' => '',
      'body' => '<h1>Explore the library</h1><div class="intro"><span>Navigate through evidences, scientific papers or case studies that support ideas</span></div>',
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

  return $pages;

}
