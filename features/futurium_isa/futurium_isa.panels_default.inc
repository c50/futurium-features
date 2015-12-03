<?php
/**
 * @file
 * Deploy.panels_default.inc.
 */

/**
 * Implements hook_default_panels_mini().
 */
function futurium_isa_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'node_author_and_social_links';
  $mini->category = 'node';
  $mini->admin_title = 'Node author and social Links';
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
  $mini->relationships = array(
    0 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user_2',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c7677cd3-c2e4-4205-aa8d-ec46685e80ba';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6aec0428-4fe1-467e-bdbe-75440e2950df';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = '6aec0428-4fe1-467e-bdbe-75440e2950df';
  $display->content['new-6aec0428-4fe1-467e-bdbe-75440e2950df'] = $pane;
  $display->panels['bottom'][0] = 'new-6aec0428-4fe1-467e-bdbe-75440e2950df';
  $pane = new stdClass();
  $pane->pid = 'new-9fd32b54-af2d-4224-93e0-0fa5eb8a8fe0';
  $pane->panel = 'left';
  $pane->type = 'user_picture';
  $pane->subtype = 'user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'relationship_entity_from_schema:uid-node-user_1',
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
    'css_class' => 'col col-lg-3',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9fd32b54-af2d-4224-93e0-0fa5eb8a8fe0';
  $display->content['new-9fd32b54-af2d-4224-93e0-0fa5eb8a8fe0'] = $pane;
  $display->panels['left'][0] = 'new-9fd32b54-af2d-4224-93e0-0fa5eb8a8fe0';
  $pane = new stdClass();
  $pane->pid = 'new-de852abb-e205-46a9-8294-26c19ef99a90';
  $pane->panel = 'left';
  $pane->type = 'token';
  $pane->subtype = 'user:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'relationship_entity_from_schema:uid-node-user_1',
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
    'css_class' => 'col col-lg-6',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de852abb-e205-46a9-8294-26c19ef99a90';
  $display->content['new-de852abb-e205-46a9-8294-26c19ef99a90'] = $pane;
  $display->panels['left'][1] = 'new-de852abb-e205-46a9-8294-26c19ef99a90';
  $pane = new stdClass();
  $pane->pid = 'new-78d8c5d6-8410-45e7-a0ec-7b2be5bd2ee3';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => 'Add Social Share Links Here',
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
  $pane->uuid = '78d8c5d6-8410-45e7-a0ec-7b2be5bd2ee3';
  $display->content['new-78d8c5d6-8410-45e7-a0ec-7b2be5bd2ee3'] = $pane;
  $display->panels['right'][0] = 'new-78d8c5d6-8410-45e7-a0ec-7b2be5bd2ee3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['node_author_and_social_links'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'user_picture_and_name';
  $mini->category = 'node';
  $mini->admin_title = 'User picture and name';
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
  $mini->relationships = array(
    0 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'da8de42d-bfbe-4b8c-9059-ef453316e0c8';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['user_picture_and_name'] = $mini;

  return $export;
}
