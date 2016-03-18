<?php
/**
 * @file
 * futurium_d4eu.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function futurium_d4eu_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_blog_post-field_important_or_conclusion'.
  $field_instances['comment-comment_node_blog_post-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_blog_post-field_rate_comment'.
  $field_instances['comment-comment_node_blog_post-field_rate_comment'] = array(
    'bundle' => 'comment_node_blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_document-field_important_or_conclusion'.
  $field_instances['comment-comment_node_document-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_document-field_rate_comment'.
  $field_instances['comment-comment_node_document-field_rate_comment'] = array(
    'bundle' => 'comment_node_document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_event_d4eu-comment_body'.
  $field_instances['comment-comment_node_event_d4eu-comment_body'] = array(
    'bundle' => 'comment_node_event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_event_d4eu-field_important_or_conclusion'.
  $field_instances['comment-comment_node_event_d4eu-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_event_d4eu-field_rate_comment'.
  $field_instances['comment-comment_node_event_d4eu-field_rate_comment'] = array(
    'bundle' => 'comment_node_event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_ideas-comment_body'.
  $field_instances['comment-comment_node_ideas-comment_body'] = array(
    'bundle' => 'comment_node_ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_ideas-field_important_or_conclusion'.
  $field_instances['comment-comment_node_ideas-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'comment-comment_node_ideas-field_rate_comment'.
  $field_instances['comment-comment_node_ideas-field_rate_comment'] = array(
    'bundle' => 'comment_node_ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_issue-field_important_or_conclusion'.
  $field_instances['comment-comment_node_issue-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'comment-comment_node_issue-field_rate_comment'.
  $field_instances['comment-comment_node_issue-field_rate_comment'] = array(
    'bundle' => 'comment_node_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_poll-field_important_or_conclusion'.
  $field_instances['comment-comment_node_poll-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_poll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'comment-comment_node_poll-field_rate_comment'.
  $field_instances['comment-comment_node_poll-field_rate_comment'] = array(
    'bundle' => 'comment_node_poll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_video_d4eu-comment_body'.
  $field_instances['comment-comment_node_video_d4eu-comment_body'] = array(
    'bundle' => 'comment_node_video_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_video_d4eu-field_important_or_conclusion'.
  $field_instances['comment-comment_node_video_d4eu-field_important_or_conclusion'] = array(
    'bundle' => 'comment_node_video_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_important_or_conclusion',
    'label' => 'Important or conclusion',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_video_d4eu-field_rate_comment'.
  $field_instances['comment-comment_node_video_d4eu-field_rate_comment'] = array(
    'bundle' => 'comment_node_video_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate the user\'s comment.',
    'display' => array(
      'comment_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rate_comment',
    'label' => 'Rate',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-blog_post-field_evidence'.
  $field_instances['node-blog_post-field_evidence'] = array(
    'bundle' => 'blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 6,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-blog_post-field_related'.
  $field_instances['node-blog_post-field_related'] = array(
    'bundle' => 'blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 7,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-document-field_evidence'.
  $field_instances['node-document-field_evidence'] = array(
    'bundle' => 'document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 12,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-document-field_related'.
  $field_instances['node-document-field_related'] = array(
    'bundle' => 'document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 13,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-event_d4eu-body'.
  $field_instances['node-event_d4eu-body'] = array(
    'bundle' => 'event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'mini_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event_d4eu-field_date_time'.
  $field_instances['node-event_d4eu-field_date_time'] = array(
    'bundle' => 'event_d4eu',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'mini_teaser' => array(
        'label' => 'hidden',
        'module' => 'futurium_d4eu',
        'settings' => array(),
        'type' => 'tear_off_calendar',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_time',
    'label' => 'Date & time',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_d4eu-field_evidence'.
  $field_instances['node-event_d4eu-field_evidence'] = array(
    'bundle' => 'event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 13,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-event_d4eu-field_related'.
  $field_instances['node-event_d4eu-field_related'] = array(
    'bundle' => 'event_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 14,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-ideas-field_evidence'.
  $field_instances['node-ideas-field_evidence'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 8,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-ideas-field_ideas'.
  $field_instances['node-ideas-field_ideas'] = array(
    'bundle' => 'ideas',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Your ideas and experience.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ideas',
    'label' => 'Ideas and experience',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic_html' => 'basic_html',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic_html' => array(
              'weight' => 5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ideas-field_rate_ideas'.
  $field_instances['node-ideas-field_rate_ideas'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate that idea.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rate_ideas',
    'label' => 'Vote',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ideas-field_related'.
  $field_instances['node-ideas-field_related'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 9,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-ideas-field_related_documents'.
  $field_instances['node-ideas-field_related_documents'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_documents',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-ideas-field_related_events'.
  $field_instances['node-ideas-field_related_events'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_events',
    'label' => 'Event',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-ideas-field_related_polls'.
  $field_instances['node-ideas-field_related_polls'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_polls',
    'label' => 'Poll',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-ideas-field_related_videos'.
  $field_instances['node-ideas-field_related_videos'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_videos',
    'label' => 'Videos',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-issue-field_evidence'.
  $field_instances['node-issue-field_evidence'] = array(
    'bundle' => 'issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 62,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-issue-field_issue'.
  $field_instances['node-issue-field_issue'] = array(
    'bundle' => 'issue',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Issue.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue',
    'label' => 'Issue',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic_html' => 'basic_html',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic_html' => array(
              'weight' => 5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-issue-field_rate_issue'.
  $field_instances['node-issue-field_rate_issue'] = array(
    'bundle' => 'issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rate that issue.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/futurium/themes/d4eu/fivestar/widgets/futurium/futurium.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rate_issue',
    'label' => 'Vote',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'entity_translation_sync' => FALSE,
      'stars' => 5,
      'target' => 'none',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-issue-field_related'.
  $field_instances['node-issue-field_related'] = array(
    'bundle' => 'issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 63,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-issue-field_tags'.
  $field_instances['node-issue-field_tags'] = array(
    'bundle' => 'issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please separate tags with commas. For example <i>broadband, geoblocking, quantum mechanics, italy</i>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-links-field_evidence'.
  $field_instances['node-links-field_evidence'] = array(
    'bundle' => 'links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 3,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-links-field_related'.
  $field_instances['node-links-field_related'] = array(
    'bundle' => 'links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 4,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-poll-field_evidence'.
  $field_instances['node-poll-field_evidence'] = array(
    'bundle' => 'poll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 8,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-poll-field_related'.
  $field_instances['node-poll-field_related'] = array(
    'bundle' => 'poll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 9,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-video_d4eu-body'.
  $field_instances['node-video_d4eu-body'] = array(
    'bundle' => 'video_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'mini_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-video_d4eu-field_evidence'.
  $field_instances['node-video_d4eu-field_evidence'] = array(
    'bundle' => 'video_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 8,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evidence',
    'label' => 'Evidence',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'has_evidence' => 'has_evidence',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-video_d4eu-field_related'.
  $field_instances['node-video_d4eu-field_related'] = array(
    'bundle' => 'video_d4eu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_dummy_field',
        'settings' => array(),
        'type' => 'relation_default',
        'weight' => 9,
      ),
      'mini_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_to' => 'related_to',
      ),
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'relation-has_evidence-endpoints'.
  $field_instances['relation-has_evidence-endpoints'] = array(
    'bundle' => 'has_evidence',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'bean' => 'default',
            'comment' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'flagging' => 'default',
            'i18n_translation' => 'default',
            'invite' => 'default',
            'invite_type' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'tmgmt_job' => 'default',
            'tmgmt_job_item' => 'default',
            'tmgmt_message' => 'default',
            'tmgmt_remote' => 'default',
            'tmgmt_translator' => 'default',
            'user' => 'default',
            'workbench_moderation_transition' => 'default',
            'wysiwyg_profile' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-related_to-endpoints'.
  $field_instances['relation-related_to-endpoints'] = array(
    'bundle' => 'related_to',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'bean' => 'default',
            'comment' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'flagging' => 'default',
            'i18n_translation' => 'default',
            'invite' => 'default',
            'invite_type' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'tmgmt_job' => 'default',
            'tmgmt_job_item' => 'default',
            'tmgmt_message' => 'default',
            'tmgmt_remote' => 'default',
            'tmgmt_translator' => 'default',
            'user' => 'default',
            'workbench_moderation_transition' => 'default',
            'wysiwyg_profile' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_organisation'.
  $field_instances['user-user-field_organisation'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organisation',
    'label' => 'Organisation',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic_html' => 'basic_html',
          'block_html' => 'block_html',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic_html' => array(
              'weight' => -8,
            ),
            'block_html' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_field_privacy' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'user-user-field_register_url'.
  $field_instances['user-user-field_register_url'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_register_url',
    'label' => 'register url',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic_html' => 'basic_html',
          'block_html' => 'block_html',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic_html' => array(
              'weight' => -8,
            ),
            'block_html' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_field_privacy' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 51,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Comment');
  t('Date & time');
  t('Event');
  t('Evidence');
  t('Ideas and experience');
  t('Important or conclusion');
  t('Issue');
  t('Issue.');
  t('Organisation');
  t('Please separate tags with commas. For example <i>broadband, geoblocking, quantum mechanics, italy</i>.');
  t('Poll');
  t('Rate');
  t('Rate that idea.');
  t('Rate that issue.');
  t('Rate the user\'s comment.');
  t('Related content');
  t('Tags');
  t('Videos');
  t('Vote');
  t('Your ideas and experience.');
  t('endpoints');
  t('register url');

  return $field_instances;
}
