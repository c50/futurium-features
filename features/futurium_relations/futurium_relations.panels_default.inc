<?php
/**
 * @file
 * futurium_relations.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function futurium_relations_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'relation_discuss';
  $mini->category = '';
  $mini->admin_title = 'Relation Discuss';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be60e0d4-4eb7-4342-809f-c4075259a6f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cec3dabf-f073-4e08-a29a-9ca3b4f07de2';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
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
      'context' => array(
        0 => 'requiredcontext_entity:node_1.nid',
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
    $pane->uuid = 'cec3dabf-f073-4e08-a29a-9ca3b4f07de2';
    $display->content['new-cec3dabf-f073-4e08-a29a-9ca3b4f07de2'] = $pane;
    $display->panels['middle'][0] = 'new-cec3dabf-f073-4e08-a29a-9ca3b4f07de2';
    $pane = new stdClass();
    $pane->pid = 'new-7b6317ad-878b-48b9-bc88-63cf84e576f5';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'futurium_links-relation_add_to_discuss';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b6317ad-878b-48b9-bc88-63cf84e576f5';
    $display->content['new-7b6317ad-878b-48b9-bc88-63cf84e576f5'] = $pane;
    $display->panels['middle'][1] = 'new-7b6317ad-878b-48b9-bc88-63cf84e576f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['relation_discuss'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'relation_implemented_by';
  $mini->category = '';
  $mini->admin_title = 'Relation Implemented by';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be60e0d4-4eb7-4342-809f-c4075259a6f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-595a04ed-ed35-465d-8f16-a3999ba03d5d';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
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
      'context' => array(
        0 => 'requiredcontext_entity:node_1.nid',
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
    $pane->uuid = '595a04ed-ed35-465d-8f16-a3999ba03d5d';
    $display->content['new-595a04ed-ed35-465d-8f16-a3999ba03d5d'] = $pane;
    $display->panels['middle'][0] = 'new-595a04ed-ed35-465d-8f16-a3999ba03d5d';
    $pane = new stdClass();
    $pane->pid = 'new-7f80080b-4c2e-48ad-9a4d-b216194b0ed6';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'futurium_links-relation_add_implemented_by';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f80080b-4c2e-48ad-9a4d-b216194b0ed6';
    $display->content['new-7f80080b-4c2e-48ad-9a4d-b216194b0ed6'] = $pane;
    $display->panels['middle'][1] = 'new-7f80080b-4c2e-48ad-9a4d-b216194b0ed6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['relation_implemented_by'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'relation_supported_by';
  $mini->category = '';
  $mini->admin_title = 'Relation Supported by ';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be60e0d4-4eb7-4342-809f-c4075259a6f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87e16570-3158-4dbf-9357-25352502a5da';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'node_relations';
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
      'display' => 'block',
      'context' => array(
        0 => 'requiredcontext_entity:node_1.nid',
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
    $pane->uuid = '87e16570-3158-4dbf-9357-25352502a5da';
    $display->content['new-87e16570-3158-4dbf-9357-25352502a5da'] = $pane;
    $display->panels['middle'][0] = 'new-87e16570-3158-4dbf-9357-25352502a5da';
    $pane = new stdClass();
    $pane->pid = 'new-3ae23c62-8a27-40e5-9d52-588843c3156d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'futurium_links-relation_add_supports';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3ae23c62-8a27-40e5-9d52-588843c3156d';
    $display->content['new-3ae23c62-8a27-40e5-9d52-588843c3156d'] = $pane;
    $display->panels['middle'][1] = 'new-3ae23c62-8a27-40e5-9d52-588843c3156d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87e16570-3158-4dbf-9357-25352502a5da';
  $mini->display = $display;
  $export['relation_supported_by'] = $mini;

  return $export;
}
