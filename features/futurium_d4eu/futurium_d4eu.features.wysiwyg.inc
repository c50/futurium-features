<?php
/**
 * @file
 * futurium_d4eu.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function futurium_d4eu_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: basic_html
  $profiles['basic_html'] = (object) array(
    'format' => 'basic_html',
    'editor' => 'ckeditor',
    'settings' => FALSE,
    'rdf_mapping' => array(),
  );

  // Exported profile: filtered_html
  $profiles['filtered_html'] = (object) array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div,blockquote',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = (object) array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => TRUE,
      'user_choose' => FALSE,
      'show_toggle' => TRUE,
      'theme' => 'advanced',
      'language' => 'en',
      'access' => 1,
      'access_pages' => 'node/*
user/*
comment/*',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'Format' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Smiley' => 1,
          'Maximize' => 1,
        ),
        'drupal_path' => array(
          'Link' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
        'lite' => array(
          'lite_AcceptAll' => 1,
          'lite_RejectAll' => 1,
          'lite_AcceptOne' => 1,
          'lite_RejectOne' => 1,
          'lite_ToggleShow' => 1,
          'lite_ToggleTracking' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => TRUE,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'verify_html' => TRUE,
      'preformatted' => FALSE,
      'convert_fonts_to_spans' => TRUE,
      'remove_linebreaks' => TRUE,
      'apply_source_formatting' => FALSE,
      'paste_auto_cleanup_on_paste' => FALSE,
      'css_setting' => 'theme',
      'css_path' => NULL,
      'css_classes' => NULL,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
