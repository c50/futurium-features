<?php
/**
 * @file
 * Classes to handle the users pictures.
 */

/**
 * Class views_futurium_d4eu_handler_field_user_picture.
 *
 * Extends views_handler_field_user_picture.
 */
class ViewsFuturiumD4euHandlerFieldUserPicture extends views_handler_field_user_picture {

  /**
   * Overrides image render function.
   */
  public function render($values) {
    if ($this->options['image_style'] && module_exists('image')) {
      // @todo: Switch to always using theme('user_picture') when it starts
      // supporting image styles. See http://drupal.org/node/1021564
      $account = user_load($this->get_value($values, 'uid'));
      $alt = t("@user", array('@user' => format_username($account)));
      if ($picture_fid = $this->get_value($values)) {
        $picture          = file_load($picture_fid);
        $picture_filepath = $picture->uri;
      }
      else {
        $picture_filepath = variable_get('user_picture_default', '');
      }
      if (file_valid_uri($picture_filepath)) {
        $output = theme('image_style', array(
          'style_name' => $this->options['image_style'],
          'path'       => $picture_filepath,
          'alt'        => $alt,
        ));
        if ($this->options['link_photo_to_profile'] && user_access('access user profiles')) {
          $uid    = $this->get_value($values, 'uid');
          $output = l($output, "user/$uid", array('html' => TRUE));
        }
      }
      else {
        $output = '';
      }
    }
    else {
      // Fake an account object.
      $account = new stdClass();
      if ($this->options['link_photo_to_profile']) {
        // Prevent template_preprocess_user_picture from adding a link
        // by not setting the uid.
        $account->uid = $this->get_value($values, 'uid');
      }
      $account->name    = $this->get_value($values, 'name');
      $account->mail    = $this->get_value($values, 'mail');
      $account->picture = $this->get_value($values);
      $output           = theme('user_picture', array('account' => $account));
    }

    return $output;
  }

}
