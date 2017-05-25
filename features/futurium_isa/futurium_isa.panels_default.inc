<?php
/**
 * @file
 * futurium_isa.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function futurium_isa_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'event_date_location';
  $mini->category = 'Events';
  $mini->admin_title = 'Event Date Location';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
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
  $display->uuid = '8015bd17-6930-40ac-a6c0-84223bbcbfd3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f04e799a-7261-4230-aa2d-2142d2cc23b3';
  $pane->panel = 'row2l';
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
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'f04e799a-7261-4230-aa2d-2142d2cc23b3';
  $display->content['new-f04e799a-7261-4230-aa2d-2142d2cc23b3'] = $pane;
  $display->panels['row2l'][0] = 'new-f04e799a-7261-4230-aa2d-2142d2cc23b3';
  $pane = new stdClass();
  $pane->pid = 'new-d07ad1c7-c58b-434a-ab08-a026ab9c06e8';
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
      'format_type' => 'day_fullmonth_year',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'd07ad1c7-c58b-434a-ab08-a026ab9c06e8';
  $display->content['new-d07ad1c7-c58b-434a-ab08-a026ab9c06e8'] = $pane;
  $display->panels['row2r'][0] = 'new-d07ad1c7-c58b-434a-ab08-a026ab9c06e8';
  $pane = new stdClass();
  $pane->pid = 'new-787e91c4-f7eb-4413-b027-b30db187a4f5';
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
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '787e91c4-f7eb-4413-b027-b30db187a4f5';
  $display->content['new-787e91c4-f7eb-4413-b027-b30db187a4f5'] = $pane;
  $display->panels['row2r'][1] = 'new-787e91c4-f7eb-4413-b027-b30db187a4f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d07ad1c7-c58b-434a-ab08-a026ab9c06e8';
  $mini->display = $display;
  $export['event_date_location'] = $mini;

  return $export;
}
