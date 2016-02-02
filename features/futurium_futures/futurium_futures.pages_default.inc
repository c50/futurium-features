<?php
/**
 * @file
 * futurium_futures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function futurium_futures_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a5ff0abd-4cbe-4e62-87ce-5b1e69ab5fd7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Future',
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
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'future' => 'future',
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
      'row2r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
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
    'row3l' => array(
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
  $display->uuid = '9bf23f04-99ad-4ace-a4e2-ec886831c3cf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13575007-3555-4c26-88f6-50142d241f95';
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
    $pane->uuid = '13575007-3555-4c26-88f6-50142d241f95';
    $display->content['new-13575007-3555-4c26-88f6-50142d241f95'] = $pane;
    $display->panels['row1l'][0] = 'new-13575007-3555-4c26-88f6-50142d241f95';
    $pane = new stdClass();
    $pane->pid = 'new-a4bbacd7-666f-4fbf-9013-98bdac434f64';
    $pane->panel = 'row1r';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_time_horizon';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'fullmonth_year',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_remaining_days' => 0,
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
    $pane->uuid = 'a4bbacd7-666f-4fbf-9013-98bdac434f64';
    $display->content['new-a4bbacd7-666f-4fbf-9013-98bdac434f64'] = $pane;
    $display->panels['row1r'][0] = 'new-a4bbacd7-666f-4fbf-9013-98bdac434f64';
    $pane = new stdClass();
    $pane->pid = 'new-43eea5f7-c4c7-4fe2-a2fc-6076cce98a5c';
    $pane->panel = 'row1r';
    $pane->type = 'rate_widget';
    $pane->subtype = 'rate_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'build_mode' => '1',
      'widget_name' => '1',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Desirability',
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
    $pane->uuid = '43eea5f7-c4c7-4fe2-a2fc-6076cce98a5c';
    $display->content['new-43eea5f7-c4c7-4fe2-a2fc-6076cce98a5c'] = $pane;
    $display->panels['row1r'][1] = 'new-43eea5f7-c4c7-4fe2-a2fc-6076cce98a5c';
    $pane = new stdClass();
    $pane->pid = 'new-e6383812-7d9d-4f96-a5fa-03032daf4b81';
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
    $pane->uuid = 'e6383812-7d9d-4f96-a5fa-03032daf4b81';
    $display->content['new-e6383812-7d9d-4f96-a5fa-03032daf4b81'] = $pane;
    $display->panels['row1r'][2] = 'new-e6383812-7d9d-4f96-a5fa-03032daf4b81';
    $pane = new stdClass();
    $pane->pid = 'new-066e497e-dfbb-4edf-ab14-9f0509786a59';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_description';
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
    $pane->uuid = '066e497e-dfbb-4edf-ab14-9f0509786a59';
    $display->content['new-066e497e-dfbb-4edf-ab14-9f0509786a59'] = $pane;
    $display->panels['row2l'][0] = 'new-066e497e-dfbb-4edf-ab14-9f0509786a59';
    $pane = new stdClass();
    $pane->pid = 'new-0be42eb3-b979-4a2a-ba78-dd362521e288';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_opportunity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0be42eb3-b979-4a2a-ba78-dd362521e288';
    $display->content['new-0be42eb3-b979-4a2a-ba78-dd362521e288'] = $pane;
    $display->panels['row2l'][1] = 'new-0be42eb3-b979-4a2a-ba78-dd362521e288';
    $pane = new stdClass();
    $pane->pid = 'new-cf93a28f-569a-4322-9be7-9a8987474b6a';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_challenge';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cf93a28f-569a-4322-9be7-9a8987474b6a';
    $display->content['new-cf93a28f-569a-4322-9be7-9a8987474b6a'] = $pane;
    $display->panels['row2l'][2] = 'new-cf93a28f-569a-4322-9be7-9a8987474b6a';
    $pane = new stdClass();
    $pane->pid = 'new-c80b6507-81dc-432e-a4b0-ae16fb9d4cc9';
    $pane->panel = 'row2l';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c80b6507-81dc-432e-a4b0-ae16fb9d4cc9';
    $display->content['new-c80b6507-81dc-432e-a4b0-ae16fb9d4cc9'] = $pane;
    $display->panels['row2l'][3] = 'new-c80b6507-81dc-432e-a4b0-ae16fb9d4cc9';
    $pane = new stdClass();
    $pane->pid = 'new-2bd4f214-ffcb-4461-a9c1-f7a98cdc273e';
    $pane->panel = 'row2r';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linkafter-relation_link_add';
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
    $pane->uuid = '2bd4f214-ffcb-4461-a9c1-f7a98cdc273e';
    $display->content['new-2bd4f214-ffcb-4461-a9c1-f7a98cdc273e'] = $pane;
    $display->panels['row2r'][0] = 'new-2bd4f214-ffcb-4461-a9c1-f7a98cdc273e';
    $pane = new stdClass();
    $pane->pid = 'new-955c7b7e-d18b-43c2-a396-322767ac864b';
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
    $pane->uuid = '955c7b7e-d18b-43c2-a396-322767ac864b';
    $display->content['new-955c7b7e-d18b-43c2-a396-322767ac864b'] = $pane;
    $display->panels['row2r'][1] = 'new-955c7b7e-d18b-43c2-a396-322767ac864b';
    $pane = new stdClass();
    $pane->pid = 'new-c2903b28-a841-4a10-9e45-7643fe90a944';
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
    $pane->uuid = 'c2903b28-a841-4a10-9e45-7643fe90a944';
    $display->content['new-c2903b28-a841-4a10-9e45-7643fe90a944'] = $pane;
    $display->panels['row2r'][2] = 'new-c2903b28-a841-4a10-9e45-7643fe90a944';
    $pane = new stdClass();
    $pane->pid = 'new-eb78c4f8-920e-40a2-b6b7-3b317e59430f';
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
    $pane->uuid = 'eb78c4f8-920e-40a2-b6b7-3b317e59430f';
    $display->content['new-eb78c4f8-920e-40a2-b6b7-3b317e59430f'] = $pane;
    $display->panels['row2r'][3] = 'new-eb78c4f8-920e-40a2-b6b7-3b317e59430f';
    $pane = new stdClass();
    $pane->pid = 'new-3b770367-95c3-45b3-b155-242b450988cd';
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
    $pane->uuid = '3b770367-95c3-45b3-b155-242b450988cd';
    $display->content['new-3b770367-95c3-45b3-b155-242b450988cd'] = $pane;
    $display->panels['row2r'][4] = 'new-3b770367-95c3-45b3-b155-242b450988cd';
    $pane = new stdClass();
    $pane->pid = 'new-eb167954-f8c0-473b-b372-48ef2cb75348';
    $pane->panel = 'row3l';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->uuid = 'eb167954-f8c0-473b-b372-48ef2cb75348';
    $display->content['new-eb167954-f8c0-473b-b372-48ef2cb75348'] = $pane;
    $display->panels['row3l'][0] = 'new-eb167954-f8c0-473b-b372-48ef2cb75348';
    $pane = new stdClass();
    $pane->pid = 'new-64ae6372-32d7-44b1-b550-e188a2463d9c';
    $pane->panel = 'row3l';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64ae6372-32d7-44b1-b550-e188a2463d9c';
    $display->content['new-64ae6372-32d7-44b1-b550-e188a2463d9c'] = $pane;
    $display->panels['row3l'][1] = 'new-64ae6372-32d7-44b1-b550-e188a2463d9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-066e497e-dfbb-4edf-ab14-9f0509786a59';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a5ff0abd-4cbe-4e62-87ce-5b1e69ab5fd7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_futures_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'futures';
  $page->task = 'page';
  $page->admin_title = 'Futures';
  $page->admin_description = '';
  $page->path = 'futures';
  $page->access = array(
    'type' => 'none',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Futures',
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
  $handler->name = 'page_futures__panel';
  $handler->task = 'page';
  $handler->subtask = 'futures';
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
  $display->uuid = 'f8978758-5432-4cbe-9a3d-6feb56892361';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
    $pane->panel = 'row1l';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Share your vision of what the world might look like</h1><div class="intro">and the chalenges and opportunities associated with it.</div>',
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
    $pane->uuid = 'effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
    $display->content['new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c'] = $pane;
    $display->panels['row1l'][0] = 'new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
    $pane = new stdClass();
    $pane->pid = 'new-ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91';
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
            'perm' => 'create future content',
          ),
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a class="btn" href="node/add/future">Add a Future</a>',
      'format' => 'simple_wysiwig',
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
    $pane->uuid = 'ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91';
    $display->content['new-ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91'] = $pane;
    $display->panels['row1l'][1] = 'new-ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91';
    $pane = new stdClass();
    $pane->pid = 'new-bc6e6520-3b38-4fff-93d4-8bc820a39342';
    $pane->panel = 'row2l';
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
    $pane->uuid = 'bc6e6520-3b38-4fff-93d4-8bc820a39342';
    $display->content['new-bc6e6520-3b38-4fff-93d4-8bc820a39342'] = $pane;
    $display->panels['row2l'][0] = 'new-bc6e6520-3b38-4fff-93d4-8bc820a39342';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['futures'] = $page;

  return $pages;

}
