<?php
/**
 * @file
 * futurium_relations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function futurium_relations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'node_relations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Relations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related content';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'nopadding';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: supports (node → node) */
  $handler->display->display_options['relationships']['relation_supports_node']['id'] = 'relation_supports_node';
  $handler->display->display_options['relationships']['relation_supports_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_supports_node']['field'] = 'relation_supports_node';
  $handler->display->display_options['relationships']['relation_supports_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_supports_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_supports_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = 'Related [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[type_1]';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Supports */
  $handler = $view->new_display('block', 'Supports', 'support');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: supports (node → node) */
  $handler->display->display_options['relationships']['relation_supports_node']['id'] = 'relation_supports_node';
  $handler->display->display_options['relationships']['relation_supports_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_supports_node']['field'] = 'relation_supports_node';
  $handler->display->display_options['relationships']['relation_supports_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_supports_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_supports_node']['entity_deduplication_right'] = 0;
  /* Relationship: Content: Relation: supports (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_supports']['id'] = 'relation_base_left_supports';
  $handler->display->display_options['relationships']['relation_base_left_supports']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_supports']['field'] = 'relation_base_left_supports';
  $handler->display->display_options['relationships']['relation_base_left_supports']['relationship'] = 'relation_supports_node';
  $handler->display->display_options['relationships']['relation_base_left_supports']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_supports']['entity_deduplication_left'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = 'Related [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[type_1]';
  /* Field: Relation: Delete link */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['relationship'] = 'relation_base_left_supports';
  $handler->display->display_options['fields']['delete']['label'] = '';
  $handler->display->display_options['fields']['delete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete']['element_wrapper_class'] = 'relation-delete-link';
  $handler->display->display_options['fields']['delete']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete']['text'] = '✖';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_supports_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Implemented by */
  $handler = $view->new_display('block', 'Implemented by', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: implemented by (node → node) */
  $handler->display->display_options['relationships']['relation_implemented_by_node']['id'] = 'relation_implemented_by_node';
  $handler->display->display_options['relationships']['relation_implemented_by_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_implemented_by_node']['field'] = 'relation_implemented_by_node';
  $handler->display->display_options['relationships']['relation_implemented_by_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_implemented_by_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_implemented_by_node']['entity_deduplication_right'] = 0;
  /* Relationship: Content: Relation: implemented by (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_implemented_by']['id'] = 'relation_base_left_implemented_by';
  $handler->display->display_options['relationships']['relation_base_left_implemented_by']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_implemented_by']['field'] = 'relation_base_left_implemented_by';
  $handler->display->display_options['relationships']['relation_base_left_implemented_by']['relationship'] = 'relation_implemented_by_node';
  $handler->display->display_options['relationships']['relation_base_left_implemented_by']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_implemented_by']['entity_deduplication_left'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = 'Related [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[type_1]';
  /* Field: Relation: Delete link */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['relationship'] = 'relation_base_left_implemented_by';
  $handler->display->display_options['fields']['delete']['label'] = '';
  $handler->display->display_options['fields']['delete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete']['element_wrapper_class'] = 'relation-delete-link';
  $handler->display->display_options['fields']['delete']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete']['text'] = '✖';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_implemented_by_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Discuss */
  $handler = $view->new_display('block', 'Discuss', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: to discuss (node → node) */
  $handler->display->display_options['relationships']['relation_to_discuss_node']['id'] = 'relation_to_discuss_node';
  $handler->display->display_options['relationships']['relation_to_discuss_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_to_discuss_node']['field'] = 'relation_to_discuss_node';
  $handler->display->display_options['relationships']['relation_to_discuss_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_to_discuss_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_to_discuss_node']['entity_deduplication_right'] = 0;
  /* Relationship: Content: Relation: to discuss (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_to_discuss']['id'] = 'relation_base_left_to_discuss';
  $handler->display->display_options['relationships']['relation_base_left_to_discuss']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_to_discuss']['field'] = 'relation_base_left_to_discuss';
  $handler->display->display_options['relationships']['relation_base_left_to_discuss']['relationship'] = 'relation_to_discuss_node';
  $handler->display->display_options['relationships']['relation_base_left_to_discuss']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_to_discuss']['entity_deduplication_left'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = 'Related [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[type_1]';
  /* Field: Relation: Delete link */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['relationship'] = 'relation_base_left_to_discuss';
  $handler->display->display_options['fields']['delete']['label'] = '';
  $handler->display->display_options['fields']['delete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete']['element_wrapper_class'] = 'relation-delete-link';
  $handler->display->display_options['fields']['delete']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete']['text'] = '✖';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_to_discuss_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['node_relations'] = $view;

  return $export;
}
