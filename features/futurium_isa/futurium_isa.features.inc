<?php
/**
 * @file
 * futurium_isa.features.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function futurium_isa_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: basic_html.
  $profiles['simple_wysiwig'] = (object) array(
    'format' => 'simple_wysiwig',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'PlaceholderAttribute' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 1,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_isa_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_isa_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function futurium_isa_flag_default_flags() {
  $flags = array();

  // Exported flag: "Attending".
  $flags['attending'] = array(
    'entity_type' => 'node',
    'title' => 'Attending',
    'global' => 0,
    'types' => array(
      0 => 'event_d4eu',
    ),
    'flag_short' => 'Register',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Undo registration',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'print' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'futurium_isa',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Follow User".
  $flags['follow_user'] = array(
    'entity_type' => 'user',
    'title' => 'Follow User',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'user_header' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => 'others',
    'module' => 'futurium_isa',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Like".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'ideas',
      1 => 'future',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfavorite',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Liked',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'print' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'futurium_isa',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function futurium_isa_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_full.
  $styles['carousel_full'] = array(
    'label' => 'carousel_full',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1170,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 350,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_picture_normal.
  $styles['user_picture_normal'] = array(
    'label' => 'user_picture_normal',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 170,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_picture_small.
  $styles['user_picture_small'] = array(
    'label' => 'user_picture_small',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 70,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
