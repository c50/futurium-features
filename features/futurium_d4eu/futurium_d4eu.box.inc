<?php
/**
 * @file
 * futurium_d4eu.box.inc
 */

/**
 * Implements hook_default_box().
 */
function futurium_d4eu_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'add_poll_cta';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'CTA add poll';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="D4EU_CTAButton" href="/futurium/en/node/add/poll" rel="nofollow"><span>Add</span><span>poll</span></a></p>',
      'format' => 'full_html',
    ),
  );
  $export['add_poll_cta'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'join_here';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Join here to take part box';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="D4EU_CTAButton" href="//ec.europa.eu/futurium/en/user/register" rel="nofollow"><span>Join here</span><span>to take part</span></a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['join_here'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'join_here_homepage';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Join here to take part box (homepage)';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="D4EU_CTAButton" href="//ec.europa.eu/futurium/en/user/register" rel="nofollow"><span>Join here</span><span>to take part</span></a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['join_here_homepage'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'nodeaddanon';
  $box->plugin_key = 'simple';
  $box->title = 'You are not logged in';
  $box->description = 'Add a node if anonymous';
  $box->options = array(
    'body' => array(
      'value' => '<style type="text/css">#page-title,#block-system-main{display:none;}</style><div id="login-window"><p>&nbsp;</p><p>To contribute on Futurium you need to <a href="/futurium/user/login">log in</a></p><p>If you don\'t have a login, please <a href="/futurium/user/register">register</a>.</p></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['nodeaddanon'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social links';
  $box->options = array(
    'body' => array(
      'value' => '<div class="socialLinks">
<h3>Follow us:</h3>
<ul>
<li><a rel="nofollow" id="fb" title="Digital4EU on facebook" href="https://www.facebook.com/DigitalAgenda"><span class="element-invisible">Digital4EU on Facebook</span></a></li>
<li><a rel="nofollow" id="pi" title="Digital4EU on Pinterest" href="http://www.pinterest.com/eucommission/digitalsinglemarket"><span class="element-invisible">Digital4EU on Pinterest</span></a></li>
<li><a rel="nofollow" id="li" title="Digital4EU on linkedIn" href="http://www.linkedin.com/groups/Digital-Agenda-Europe-2010-2020-3812290"><span class="element-invisible">Digital4EU on LinkedIn</span></a></li>
<li><a rel="nofollow" id="yt" title="Digital4EU on Youtube" href="http://www.youtube.com/user/DigitalAgendaEU"><span class="element-invisible">Digital4EU on Youtube</span></a></li>
<li><a rel="nofollow" id="tw" title="Digital4EU on twitter" href="https://twitter.com/DigitalAgendaEU"><span class="element-invisible">Digital4EU on Twitter</span></a></li>
</ul>
</div>',
      'format' => 'full_html',
    ),
  );
  $export['social_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_links_homepage';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social links (homepage)';
  $box->options = array(
    'body' => array(
      'value' => '<h3>Follow us:</h3>
<h3>Follow us:</h3>
<ul>
<li><a rel="nofollow" id="fb" title="Digital4EU on facebook" href="https://www.facebook.com/DigitalAgenda"><img src="data:image/gif;base64,R0lGODlhAQABAIABAP///wAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==" width="0" height="0" alt="Facebook" class="hidden"/></a></li>
<li><a rel="nofollow" id="pi" title="Digital4EU on Pinterest" href="http://www.pinterest.com/eucommission/digitalsinglemarket"><img src="data:image/gif;base64,R0lGODlhAQABAIABAP///wAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==" width="0" height="0" alt="Pinterest" class="hidden"/> </a></li>
<li><a rel="nofollow" id="li" title="Digital4EU on linkedIn" href="http://www.linkedin.com/groups/Digital-Agenda-Europe-2010-2020-3812290"><img src="data:image/gif;base64,R0lGODlhAQABAIABAP///wAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==" width="0" height="0" alt="Linkedin" class="hidden"/> </a></li>
<li><a rel="nofollow" id="yt" title="Digital4EU on Youtube" href="http://www.youtube.com/user/DigitalAgendaEU"><img src="data:image/gif;base64,R0lGODlhAQABAIABAP///wAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==" width="0" height="0" alt="Youtube" class="hidden"/> </a></li>
<li><a rel="nofollow" id="tw" title="Digital4EU on twitter" href="https://twitter.com/DigitalAgendaEU"><img src="data:image/gif;base64,R0lGODlhAQABAIABAP///wAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==" width="0" height="0" alt="Twitter" class="hidden"/> </a></li>
</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['social_links_homepage'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'temp_fix_css';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'temporary CSS fix';
  $box->options = array(
    'body' => array(
      'value' => '<style type="text/css">@import url(/futurium/sites/futurium/files/d4eucssfix20150326.css);.temp_fix_css{display:none;}</style>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'temp_fix_css',
  );
  $export['temp_fix_css'] = $box;

  return $export;
}
