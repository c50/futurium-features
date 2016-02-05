<?php
/**
 * @file
 * tests.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tests_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quant_chart';
  $strongarm->value = 'chart';
  $export['quant_chart'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quant_chartapi_palette';
  $strongarm->value = array(
    0 => 'FF8000',
    1 => 'FFC080',
    2 => 'FFDFBF',
    3 => 'FFC080',
    4 => 'FFCC00',
    5 => 'FFE500',
    6 => 'FFF9BF',
    7 => '78C0E9',
    8 => '179CE8',
    9 => '30769E',
    10 => 'C8E9FC',
    11 => 'ECF8FF',
    12 => '00CCFF',
    13 => '4086AA',
    14 => '91C3DC',
    15 => '87907D',
    16 => 'AAB6A2',
    17 => '555555',
    18 => '666666',
    19 => '21B6A8',
    20 => '177F75',
    21 => 'B6212D',
    22 => '7F171F',
    23 => 'B67721',
    24 => '7F5417',
  );
  $export['quant_chartapi_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quant_height';
  $strongarm->value = '200';
  $export['quant_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quant_visible';
  $strongarm->value = array(
    'user_creation' => 'user_creation',
    'content_creation' => 'content_creation',
    'comment_creation' => 'comment_creation',
    'node_creation_by_type' => 'node_creation_by_type',
    'node_creation_aggregate_by_type' => 'node_creation_aggregate_by_type',
    'group_joins' => 'group_joins',
  );
  $export['quant_visible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quant_width';
  $strongarm->value = '500';
  $export['quant_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_bootstrap_warning';
  $strongarm->value = TRUE;
  $export['radioactivity_bootstrap_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_checksum_salt';
  $strongarm->value = 'undefined';
  $export['radioactivity_checksum_salt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_config_warning';
  $strongarm->value = TRUE;
  $export['radioactivity_config_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_drupal_root';
  $strongarm->value = '/usr/share/nginx/html/futurium_isa';
  $export['radioactivity_drupal_root'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_protection';
  $strongarm->value = 1;
  $export['radioactivity_flood_protection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_timeout';
  $strongarm->value = '15';
  $export['radioactivity_flood_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_temp_dir';
  $strongarm->value = '/tmp';
  $export['radioactivity_temp_dir'] = $strongarm;

  return $export;
}
