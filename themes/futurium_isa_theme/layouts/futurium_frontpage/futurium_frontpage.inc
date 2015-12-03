<?php

function futurium_isa_panels_layouts() {

  // Plugin definition
  $plugin = array(
    'title' => t('Futurium Frontpage'),
    'category' => t('Bootstrap'),
    'icon' => 'twocol.png',
    'theme' => 'futurium_frontpage',
    'css' => 'futurium_frontpage.css',
    'regions' => array(
      'slide' => t('Slideshow'),
      'intro_left' => t('Intro Left'),
      'intro_center' => t('Intro Center'),
      'intro_right' => t('Intro Right'),
      'column' => t('Column'),
    ),
  );
  return $plugin;

}
