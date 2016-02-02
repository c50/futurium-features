<?php
/**
 * @file
 * futurium_messages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_messages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_messages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function futurium_messages_default_message_type() {
  $items = array();
  $items['comment_created'] = entity_import('message_type', '{
    "name" : "comment_created",
    "description" : "Comment created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cspan class=\\u0022activity-message new-comment\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Ecommented on\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cspan class=\\u0022activity-message new-comment\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Ecommented on\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        },
        {
          "value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] commented on [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] commented on [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/h3\\u003E\\u003C\\/div\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['content_created'] = entity_import('message_type', '{
    "name" : "content_created",
    "description" : "Content created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cspan class=\\u0022activity-message new-content\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Ecreated\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cspan class=\\u0022activity-message new-content\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Ecreated\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        },
        {
          "value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] created [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] created [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/h3\\u003E\\u003C\\/div\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['flagged_with_attending'] = entity_import('message_type', '{
    "name" : "flagged_with_attending",
    "description" : "Flagged with Attending",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cspan class=\\u0022activity-message attending\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Eis going to\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cspan class=\\u0022activity-message attending\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Eis going to\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        },
        {
          "value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] is going to [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] is going to [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/h3\\u003E\\u003C\\/div\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['flagged_with_like'] = entity_import('message_type', '{
    "name" : "flagged_with_like",
    "description" : "Flagged with Like",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cspan class=\\u0022activity-message liked\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Eliked\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cspan class=\\u0022activity-message liked\\u0022\\u003E[message:field-user-ref:name] \\u003Cem\\u003Eliked\\u003C\\/em\\u003E \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        },
        {
          "value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] liked [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "full",
          "safe_value" : "\\u003Cdiv class=\\u0022node-[message:field-node-ref:content-type:machine-name]\\u0022\\u003E\\u003Ch3\\u003E\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-user-ref:name] liked [message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/h3\\u003E\\u003C\\/div\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
