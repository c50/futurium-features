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
</ul>

<ul class="util">
<li class="about"><a href="/about"><span>About</span></a></div>
</ul>

<div class="powered">Powered by <a href="#">Futurium</a></div>
',

      'format' => 'full',
    ),
    'additional_classes' => 'col',
  );
  $export['footer_social_links'] = $box;

  return $export;
}
