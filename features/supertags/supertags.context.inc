<?php
/**
 * @file
 * supertags.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function supertags_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_flavors_landing_pages';
  $context->description = '';
  $context->tag = 'All Flavors';
  $context->conditions = array(
    'flavor_landing_page_condition' => array(
      'values' => array(
        'digital4eu' => 'digital4eu',
        'digital4science' => 'digital4science',
        'egovernment4eu' => 'egovernment4eu',
        'innovation4eu' => 'innovation4eu',
        'simplify-esif' => 'simplify-esif',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'identity',
          'weight' => '-10',
        ),
        'views-flavors_whats_new-block_1' => array(
          'module' => 'views',
          'delta' => 'flavors_whats_new-block_1',
          'region' => 'home_main',
          'weight' => '10',
        ),
        'views-flavor_misc_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'flavor_misc_blocks-block_1',
          'region' => 'home_sidebar',
          'weight' => '-10',
        ),
        'views-latest_comments-flavor_comm' => array(
          'module' => 'views',
          'delta' => 'latest_comments-flavor_comm',
          'region' => 'home_sidebar',
          'weight' => '-9',
        ),
        'supertags-social_links' => array(
          'module' => 'supertags',
          'delta' => 'social_links',
          'region' => 'home_sidebar',
          'weight' => '-6',
        ),
        'supertags-twitter_feed' => array(
          'module' => 'supertags',
          'delta' => 'twitter_feed',
          'region' => 'home_sidebar',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All Flavors');
  $export['all_flavors_landing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_flavors_listings';
  $context->description = '';
  $context->tag = 'All Flavors';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*/ideas' => '*/ideas',
        '*/issues' => '*/issues',
        '*/evidence' => '*/evidence',
        '*/videos' => '*/videos',
        '*/blogs' => '*/blogs',
        '*/polls' => '*/polls',
        '*/events' => '*/events',
        '*/articles' => '*/articles',
        '*/pages' => '*/pages',
        '*/ideas/*' => '*/ideas/*',
        '*/issues/*' => '*/issues/*',
        '*/evidence/*' => '*/evidence/*',
        '*/videos/*' => '*/videos/*',
        '*/blogs/*' => '*/blogs/*',
        '*/polls/*' => '*/polls/*',
        '*/events/*' => '*/events/*',
        '*/articles/*' => '*/articles/*',
        '*/pages/*' => '*/pages/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'supertags-ctas' => array(
          'module' => 'supertags',
          'delta' => 'ctas',
          'region' => 'identity',
          'weight' => '-10',
        ),
        'supertags-supertags' => array(
          'module' => 'supertags',
          'delta' => 'supertags',
          'region' => 'sidebar_right',
          'weight' => '-57',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All Flavors');
  $export['all_flavors_listings'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'digital4eu';
  $context->description = 'All pages for Digital4EU flavor.';
  $context->tag = 'Flavors';
  $context->conditions = array(
    'flavor_condition' => array(
      'values' => array(
        0 => 'digital4eu',
      ),
    ),
    'flavor_landing_page_condition' => array(
      'values' => array(
        0 => 'digital4eu',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-digital4eu-menu' => array(
          'module' => 'menu',
          'delta' => 'digital4eu-menu',
          'region' => 'main_navigation',
          'weight' => -10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages for Digital4EU flavor.');
  t('Flavors');
  $export['digital4eu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'digital4eu_landing_page';
  $context->description = '';
  $context->tag = 'Flavors';
  $context->conditions = array(
    'flavor_landing_page_condition' => array(
      'values' => array(
        'digital4eu' => 'digital4eu',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-our-vision' => array(
          'module' => 'bean',
          'delta' => 'our-vision',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-share-ideas' => array(
          'module' => 'bean',
          'delta' => 'share-ideas',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'bean-anonymous-share-ideas-digital4eu' => array(
          'module' => 'bean',
          'delta' => 'anonymous-share-ideas-digital4eu',
          'region' => 'content_top',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Flavors');
  $export['digital4eu_landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_pages';
  $context->description = '';
  $context->tag = 'All Flavors';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
        'document' => 'document',
        'event_d4eu' => 'event_d4eu',
        'ideas' => 'ideas',
        'issue' => 'issue',
        'links' => 'links',
        'poll' => 'poll',
        'video_d4eu' => 'video_d4eu',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'supertags-ctas' => array(
          'module' => 'supertags',
          'delta' => 'ctas',
          'region' => 'identity',
          'weight' => '-10',
        ),
        'supertags-tag_cloud_tags' => array(
          'module' => 'supertags',
          'delta' => 'tag_cloud_tags',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All Flavors');
  $export['node_pages'] = $context;

  return $export;
}
