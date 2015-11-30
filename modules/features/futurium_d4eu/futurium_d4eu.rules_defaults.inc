<?php
/**
 * @file
 * futurium_d4eu.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function futurium_d4eu_default_rules_configuration() {
  $items = array();
  $items['rules_new_user_registered'] = entity_import('rules_config', '{ "rules_new_user_registered" : {
      "LABEL" : "New user registered",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "register" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [], "user_registrationpassword_activated" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "account" ], "field" : "field_register_url" } },
        { "AND" : [] },
        { "NOT data_is_empty" : { "data" : [ "account:field-register-url" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[account:field_register_url]", "destination" : "1" } },
        { "data_set" : { "data" : [ "account:field-register-url" ] } }
      ]
    }
  }');
  $items['rules_notify_on_node_commented'] = entity_import('rules_config', '{ "rules_notify_on_node_commented" : {
      "LABEL" : "Notify commented node",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [ { "data_is" : { "data" : [ "comment:node:status" ], "value" : "1" } } ],
      "DO" : [
        { "mail" : {
            "to" : [ "comment:node:author:mail" ],
            "subject" : "Comment [comment:title] by [comment:author]",
            "message" : "Dear [user:field_firstname],\\r\\n\\r\\nA post you created ([node:title]) has a new comment by [comment:name] on the Digital Single Market website:\\r\\n\\r\\n[comment:url]\\r\\n\\r\\nFuturium team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
