<?php
/**
 * @file
 * tests.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tests_default_rules_configuration() {
  $items = array();
  $items['rules_user_login'] = entity_import('rules_config', '{ "rules_user_login" : {
      "LABEL" : "User Login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Futurium Messages" ],
      "REQUIRES" : [ "radioactivity", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "radioactivity_emit" : {
            "data" : [ "account:field-activity-index" ],
            "value" : "0.5",
            "floodcheck" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
