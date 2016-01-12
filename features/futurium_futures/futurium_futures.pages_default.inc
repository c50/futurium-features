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
  $handler->weight = -26;
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
      'row1l' => NULL,
      'row1r' => NULL,
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
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9bf23f04-99ad-4ace-a4e2-ec886831c3cf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0ac992f2-d4db-410b-a6ee-e1e432ee86f4';
    $pane->panel = 'row1l';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
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
    $pane->uuid = '0ac992f2-d4db-410b-a6ee-e1e432ee86f4';
    $display->content['new-0ac992f2-d4db-410b-a6ee-e1e432ee86f4'] = $pane;
    $display->panels['row1l'][0] = 'new-0ac992f2-d4db-410b-a6ee-e1e432ee86f4';
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
    $pane->pid = 'new-ea1b0933-d9ce-4c52-9e6a-de5f15c82060';
    $pane->panel = 'row2l';
    $pane->type = 'block';
    $pane->subtype = 'futurium_linker-futurium_linker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Relations',
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
    $pane->uuid = 'ea1b0933-d9ce-4c52-9e6a-de5f15c82060';
    $display->content['new-ea1b0933-d9ce-4c52-9e6a-de5f15c82060'] = $pane;
    $display->panels['row2l'][4] = 'new-ea1b0933-d9ce-4c52-9e6a-de5f15c82060';
    $pane = new stdClass();
    $pane->pid = 'new-a4bbacd7-666f-4fbf-9013-98bdac434f64';
    $pane->panel = 'row2r';
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
        'format_type' => 'day_fullmonth_year',
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
    $display->panels['row2r'][0] = 'new-a4bbacd7-666f-4fbf-9013-98bdac434f64';
    $pane = new stdClass();
    $pane->pid = 'new-43eea5f7-c4c7-4fe2-a2fc-6076cce98a5c';
    $pane->panel = 'row2r';
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
    $display->panels['row2r'][1] = 'new-43eea5f7-c4c7-4fe2-a2fc-6076cce98a5c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-066e497e-dfbb-4edf-ab14-9f0509786a59';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a5ff0abd-4cbe-4e62-87ce-5b1e69ab5fd7'] = $handler;

  return $export;
}
