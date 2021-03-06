<?php
/**
 * @file
 * futurium_messages.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function futurium_messages_default_rules_configuration() {
  $items = array();
  $items['rules_commented_content'] = entity_import('rules_config', '{ "rules_commented_content" : {
      "LABEL" : "Commented content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Futurium Messages" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "comment_created",
              "param_user" : [ "comment:author" ]
            },
            "PROVIDE" : { "entity_created" : { "new_message" : "New Message" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-node-ref" ],
            "value" : [ "comment:node" ]
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-user-ref" ],
            "value" : [ "comment:author" ]
          }
        },
        { "data_set" : { "data" : [ "new-message:field-comment-ref" ], "value" : [ "comment" ] } }
      ]
    }
  }');
  $items['rules_content_created'] = entity_import('rules_config', '{ "rules_content_created" : {
      "LABEL" : "Content created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Futurium Messages" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "NOT node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "futurium_group" : "futurium_group" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "content_created",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "new_message" : "New Message" } }
          }
        },
        { "data_set" : { "data" : [ "new-message:field-node-ref" ], "value" : [ "node" ] } },
        { "data_set" : { "data" : [ "new-message:field-user-ref" ], "value" : [ "node:author" ] } }
      ]
    }
  }');
  $items['rules_fill_message_with_og'] = entity_import('rules_config', '{ "rules_fill_message_with_og" : {
      "LABEL" : "Fill Message With OG",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Futurium Messages" ],
      "REQUIRES" : [ "rules", "message" ],
      "ON" : { "message_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "message" ], "field" : "field_node_ref" } },
        { "entity_has_field" : { "entity" : [ "message:field-node-ref" ], "field" : "og_group_ref" } },
        { "list_count_is" : {
            "list" : [ "message:field-node-ref:og-group-ref" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        },
        { "entity_has_field" : { "entity" : [ "message" ], "field" : "og_group_ref" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "message:og-group-ref" ],
            "value" : [ "message:field-node-ref:og-group-ref" ]
          }
        }
      ]
    }
  }');
  $items['rules_flagged_with_attending'] = entity_import('rules_config', '{ "rules_flagged_with_attending" : {
      "LABEL" : "Flagged with Attending",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Futurium Messages" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_attending" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "flagged_with_attending",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "new_message" : "New Message" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-node-ref" ],
            "value" : [ "flagged-node" ]
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-user-ref" ],
            "value" : [ "flagging-user" ]
          }
        }
      ]
    }
  }');
  $items['rules_flagged_with_like'] = entity_import('rules_config', '{ "rules_flagged_with_like" : {
      "LABEL" : "Flagged with Like",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Futurium Messages" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_like" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "flagged_with_like",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "new_message" : "New Message" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-node-ref" ],
            "value" : [ "flagged-node" ]
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-user-ref" ],
            "value" : [ "flagging-user" ]
          }
        }
      ]
    }
  }');

  return $items;
}
