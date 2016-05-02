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
      "REQUIRES" : [ "rules", "user_registrationpassword" ],
      "ON" : { "user_login" : [], "user_registrationpassword_activated" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "account" ], "field" : "field_register_url" } },
        { "AND" : [] },
        { "NOT data_is_empty" : { "data" : [ "account:field-register-url" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "[account:field_register_url]", "destination" : "1" } }
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
  $items['rules_send_mail_to_list_of_users_on_comment'] = entity_import('rules_config', '{ "rules_send_mail_to_list_of_users_on_comment" : {
      "LABEL" : "Send mail to list of users on comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Flavour notifications" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "comment:node" ], "field" : "field_flavor_s_" } },
        { "NOT data_is_empty" : { "data" : [ "comment:node:field-flavor-s-:0" ] } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "comment:node:field-flavor-s-" ] },
            "ITEM" : { "flavour_item" : "Flavours" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "flavour-item:tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "flavour_term" : "Flavour term" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "comment:node:nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "commented_node" : "Commented Node" } }
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "flavour-item:field-notification-list" ] },
                  "ITEM" : { "user_to_notify" : "User to notify" },
                  "DO" : [
                    { "mail" : {
                        "to" : "[user-to-notify:mail]",
                        "subject" : "Futurium - New comment in [flavour-term:name]",
                        "message" : "Hi [user-to-notify:name], \\r\\n\\r\\n[comment:name] posted a new comment in [flavour-item:name] for [commented-node:content-type] [commented-node:title]\\r\\n\\r\\nClick here to view the comment\\r\\n[commented-node:url]#comment-[comment:cid]\\r\\n\\r\\nHere is a preview of the comment\\r\\n\\r\\n[comment:title]\\r\\n[comment:body]",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_mail_to_list_of_users_on_create_content'] = entity_import('rules_config', '{ "rules_send_mail_to_list_of_users_on_create_content" : {
      "LABEL" : "Send mail to list of users on create content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Flavour notifications" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_flavor_s_" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-flavor-s-:0" ] } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-flavor-s-" ] },
            "ITEM" : { "flavour_item" : "Flavours" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "flavour-item:tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "flavour_term" : "Flavour term" } }
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "flavour-item:field-notification-list" ] },
                  "ITEM" : { "user_to_notify" : "User to notify" },
                  "DO" : [
                    { "mail" : {
                        "to" : "[user-to-notify:mail]",
                        "subject" : "Futurium - New [node:type] in [flavour-term:name]",
                        "message" : "Hi [user-to-notify:name],\\r\\n\\r\\n[node:author] created new content in [flavour-item:name]\\r\\n\\r\\nClick here to view the new content\\r\\n[node:url]",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_mail_to_list_of_users_on_update_comment'] = entity_import('rules_config', '{ "rules_send_mail_to_list_of_users_on_update_comment" : {
      "LABEL" : "Send mail to list of users on update comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Flavour notifications" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_update" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "comment:node" ], "field" : "field_flavor_s_" } },
        { "NOT data_is_empty" : { "data" : [ "comment:node:field-flavor-s-:0" ] } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "comment:node:field-flavor-s-" ] },
            "ITEM" : { "flavour_item" : "Flavours" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "flavour-item:tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "flavour_term" : "Flavour term" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "comment:node:nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "commented_node" : "Commented Node" } }
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "flavour-item:field-notification-list" ] },
                  "ITEM" : { "user_to_notify" : "User to notify" },
                  "DO" : [
                    { "mail" : {
                        "to" : "[user-to-notify:mail]",
                        "subject" : "Futurium - Comment updated under [flavour-term:name]",
                        "message" : "Hi [user-to-notify:name], \\r\\n\\r\\n[comment:name] updated a comment in [flavour-item:name] for [commented-node:content-type] [commented-node:title]\\r\\n\\r\\nClick here to view the comment\\r\\n[commented-node:url]#comment-[comment:cid]\\r\\n\\r\\nHere is a preview of the comment\\r\\n\\r\\n[comment:title]\\r\\n[comment:body]",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_mail_to_list_of_users_on_update_content'] = entity_import('rules_config', '{ "rules_send_mail_to_list_of_users_on_update_content" : {
      "LABEL" : "Send mail to list of users on update content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Flavour notifications" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_flavor_s_" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-flavor-s-:0" ] } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-flavor-s-" ] },
            "ITEM" : { "flavour_item" : "Flavours" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "flavour-item:tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "flavour_term" : "Flavour term" } }
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "flavour-item:field-notification-list" ] },
                  "ITEM" : { "user_to_notify" : "User to notify" },
                  "DO" : [
                    { "mail" : {
                        "to" : "[user-to-notify:mail]",
                        "subject" : "Futurium - [flavour-term:name] [node:title] updated ",
                        "message" : "Hi [user-to-notify:name],\\r\\n\\r\\n[node:author] updated [node:type] [node:title]\\r\\n\\r\\nClick here to view the updated content\\r\\n[node:url]",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
