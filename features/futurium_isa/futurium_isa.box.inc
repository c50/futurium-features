<?php
/**
 * @file
 * futurium_isa.box.inc
 */

/**
 * Implements hook_default_box().
 */
function futurium_isa_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'building_a_better_future';
  $box->plugin_key = 'simple';
  $box->title = 'Building a better future together';
  $box->description = 'Building a better future';
  $box->options = array(
    'body' => array(
      'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas vitae sem at est aliquam fringilla non in risus. Suspendisse nec orci eu elit suscipit varius. Donec finibus purus a congue placerat. In laoreet eros a maximus interdum. Curabitur bibendum et ipsum id maximus. In vel justo suscipit, sollicitudin justo id, varius nisl. Donec quis mauris vitae velit congue tempor. Phasellus dapibus nulla sit amet ligula tincidunt, et congue nibh dapibus. Nulla vel sapien eget velit tempor efficitur porttitor nec lacus.',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col',
  );
  $export['building_a_better_future'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'building_a_better_future_cta';
  $box->plugin_key = 'simple';
  $box->title = 'Building a better future together';
  $box->description = 'Building a better future CTA';
  $box->options = array(
    'body' => array(
      'value' => 'Aliquam dapibus dui id varius malesuada. Aenean ac risus vel est vehicula vehicula vel at tellus. Morbi tempus neque at diam vulputate mattis. Sed imperdiet dui id ipsum porttitor venenatis. Cras id cursus mauris. Sed vulputate arcu et metus lobortis, vitae efficitur nulla lobortis. Duis et sem urna.

<div>
  <a href="/node/add/event">Organize an Event</a>
</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col',
  );
  $export['building_a_better_future_cta'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'events';
  $box->plugin_key = 'simple';
  $box->title = 'Events';
  $box->description = 'Events Landing page';
  $box->options = array(
    'body' => array(
      'value' => 'Donec nec pellentesque nisl, quis luctus tellus. Nunc bibendum quam erat, ut fermentum neque viverra ac. Ut id neque lobortis, pharetra arcu sed, bibendum enim. Nulla rhoncus ullamcorper dapibus. Aenean nec interdum mauris. Sed luctus augue sagittis commodo vulputate. Maecenas auctor purus diam, vel ornare dolor varius at. Fusce auctor dolor eget est ullamcorper sagittis. Phasellus semper ut enim vel dignissim.
',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col',
  );
  $export['events'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_social_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer Social Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="social-icons">
<li class="facebook"><a href="#"><span>Facebook</span></a></div>
<li class="twitter"><a href="#"><span>Twitter</span></a></div>
<li class="contact"><a href="#"><span>Contact</span></a></div>
</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col',
  );
  $export['footer_social_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'futurium_events_home_intro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Events Home Intro';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Events</h2>

Quisque id fringilla sapien. Nulla fermentum imperdiet elit, vitae finibus sapien euismod vitae. Donec aliquet, ante id consectetur vulputate, elit purus tempus mi, nec volutpat risus orci id dolor.',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col col-md-4 grid-4 omega',
  );
  $export['futurium_events_home_intro'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'futurium_futures_home_intro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Futures Home Intro';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Futures</h2>

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed ultrices ac dui non sodales. Mauris rhoncus, sem non ullamcorper pretium, tellus lacus iaculis orci, at volutpat arcu mauris vestibulum ipsum.',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col col-md-4 grid-4 alpha',
  );
  $export['futurium_futures_home_intro'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'futurium_ideas_home_intro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Ideas Home Intro';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Ideas</h2>

Mauris pulvinar euismod lacus id placerat. Nunc dolor sem, congue quis auctor sed, condimentum a augue.',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col col-md-4 grid-4',
  );
  $export['futurium_ideas_home_intro'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'sharing_box';
  $box->plugin_key = 'simple';
  $box->title = 'Sharing ideas make it better';
  $box->description = 'Sharing Box';
  $box->options = array(
    'body' => array(
      'value' => 'Proin ultrices nec mi ut malesuada. Proin interdum odio quis urna feugiat tempus. Morbi massa elit, blandit a justo id, molestie blandit lectus.',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col',
  );
  $export['sharing_box'] = $box;

  return $export;
}
