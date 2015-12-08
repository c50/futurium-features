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
  $context->name = 'site-wide';
  $context->description = 'A site-wide context';
  $context->tag = 'ISA';
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
  t('A site-wide context');
  t('ISA');

  $export['site-wide'] = $context;

  return $export;
}
