<?php
/**
 * @file
 * futurium_isa.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function futurium_isa_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = 'Main events page';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-events' => array(
          'module' => 'boxes',
          'delta' => 'events',
          'region' => 'content_before',
          'weight' => '-10',
        ),
        'views-events-upcoming' => array(
          'module' => 'views',
          'delta' => 'events-upcoming',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'content_after',
          'weight' => '-10',
        ),
        'boxes-building_a_better_future_cta' => array(
          'module' => 'boxes',
          'delta' => 'building_a_better_future_cta',
          'region' => 'content_after_middle',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main events page');
  t('pages');
  $export['events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'The front page';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-image' => array(
          'module' => 'boxes',
          'delta' => 'image',
          'region' => 'content_slider',
          'weight' => '-10',
        ),
        'boxes-futurium_futures_home_intro' => array(
          'module' => 'boxes',
          'delta' => 'futurium_futures_home_intro',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'boxes-futurium_ideas_home_intro' => array(
          'module' => 'boxes',
          'delta' => 'futurium_ideas_home_intro',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'boxes-futurium_events_home_intro' => array(
          'module' => 'boxes',
          'delta' => 'futurium_events_home_intro',
          'region' => 'content_top',
          'weight' => '-7',
        ),
        'views-ideas-block_1' => array(
          'module' => 'views',
          'delta' => 'ideas-block_1',
          'region' => 'content_before_middle',
          'weight' => '-10',
        ),
        'boxes-sharing_box' => array(
          'module' => 'boxes',
          'delta' => 'sharing_box',
          'region' => 'content_before',
          'weight' => '-10',
        ),
        'views-discussions-block' => array(
          'module' => 'views',
          'delta' => 'discussions-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events-upcoming' => array(
          'module' => 'views',
          'delta' => 'events-upcoming',
          'region' => 'content_after_middle',
          'weight' => '-10',
        ),
        'views-poll-block' => array(
          'module' => 'views',
          'delta' => 'poll-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'boxes-footer_social_links' => array(
          'module' => 'boxes',
          'delta' => 'footer_social_links',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The front page');
  t('pages');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ideas';
  $context->description = 'Main ideas page';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ideas' => 'ideas',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-sharing_box' => array(
          'module' => 'boxes',
          'delta' => 'sharing_box',
          'region' => 'content_before_middle',
          'weight' => '-10',
        ),
        'views-ideas-block' => array(
          'module' => 'views',
          'delta' => 'ideas-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ideas-block_1' => array(
          'module' => 'views',
          'delta' => 'ideas-block_1',
          'region' => 'content_after',
          'weight' => '-10',
        ),
        'boxes-building_a_better_future' => array(
          'module' => 'boxes',
          'delta' => 'building_a_better_future',
          'region' => 'content_after_middle',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main ideas page');
  t('pages');
  $export['ideas'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-footer_social_links' => array(
          'module' => 'boxes',
          'delta' => 'footer_social_links',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['sitewide'] = $context;

  return $export;
}
