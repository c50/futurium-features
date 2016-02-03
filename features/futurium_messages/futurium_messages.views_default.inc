<?php
/**
 * @file
 * futurium_messages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function futurium_messages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activity';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'nopadding';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: OG membership from Message */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'message';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: All */
  $handler = $view->new_display('block', 'All', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 1;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Message: Logged In User Groups/No Group content */
  $handler->display->display_options['filters']['user_og_nid']['id'] = 'user_og_nid';
  $handler->display->display_options['filters']['user_og_nid']['table'] = 'message';
  $handler->display->display_options['filters']['user_og_nid']['field'] = 'user_og_nid';
  $handler->display->display_options['filters']['user_og_nid']['value']['value'] = 1;

  /* Display: Node Activity */
  $handler = $view->new_display('block', 'Node Activity', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 1;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Message: Node ref (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: User Activity */
  $handler = $view->new_display('block', 'User Activity', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No activity yet.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 1;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
  /* Field: Message: Node ref */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_node_ref']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['element_wrapper_class'] = 'notitle';
  $handler->display->display_options['fields']['field_node_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
    'use_content_language' => 0,
  );
  /* Field: Content: Ideas and experience */
  $handler->display->display_options['fields']['field_ideas']['id'] = 'field_ideas';
  $handler->display->display_options['fields']['field_ideas']['table'] = 'field_data_field_ideas';
  $handler->display->display_options['fields']['field_ideas']['field'] = 'field_ideas';
  $handler->display->display_options['fields']['field_ideas']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['fields']['field_ideas']['label'] = '';
  $handler->display->display_options['fields']['field_ideas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ideas']['element_label_colon'] = FALSE;
  /* Field: Content: Opportunity */
  $handler->display->display_options['fields']['field_opportunity']['id'] = 'field_opportunity';
  $handler->display->display_options['fields']['field_opportunity']['table'] = 'field_data_field_opportunity';
  $handler->display->display_options['fields']['field_opportunity']['field'] = 'field_opportunity';
  $handler->display->display_options['fields']['field_opportunity']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['fields']['field_opportunity']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Evidence */
  $handler->display->display_options['fields']['field_evidence_body']['id'] = 'field_evidence_body';
  $handler->display->display_options['fields']['field_evidence_body']['table'] = 'field_data_field_evidence_body';
  $handler->display->display_options['fields']['field_evidence_body']['field'] = 'field_evidence_body';
  $handler->display->display_options['fields']['field_evidence_body']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['fields']['field_evidence_body']['label'] = '';
  $handler->display->display_options['fields']['field_evidence_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_evidence_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Message: User ref (field_user_ref) */
  $handler->display->display_options['arguments']['field_user_ref_target_id']['id'] = 'field_user_ref_target_id';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['table'] = 'field_data_field_user_ref';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['field'] = 'field_user_ref_target_id';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_user_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_node_ref_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_d4eu' => 'event_d4eu',
    'evidence' => 'evidence',
    'ideas' => 'ideas',
    'poll' => 'poll',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_ideas' => 'field_ideas',
    'field_opportunity' => 'field_opportunity',
    'title' => 'title',
    'field_evidence_body' => 'field_evidence_body',
    'term_node_tid' => 'term_node_tid',
  );
  $export['messages'] = $view;

  return $export;
}
