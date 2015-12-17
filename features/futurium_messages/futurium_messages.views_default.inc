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

  /* Display: Node Activity */
  $handler = $view->new_display('block', 'Node Activity', 'block_1');
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
  $export['messages'] = $view;

  return $export;
}
