(function ($) {

  /**
   * Puts the currently highlighted suggestion into the autocomplete field.
   * Overridden from misc/autocomplete.js to add an event trigger on autocomplete
   */
  if (Drupal.jsAC) {
    
    /**
     * Fills the suggestion popup with any matches received.
     */
    Drupal.jsAC.prototype.found = function (matches) {
      // If no value in the textfield, do not show the popup.
      if (!this.input.value.length) {
        return false;
      }

      // Prepare matches.
      var ul = $('<ul></ul>');
      var ac = this;
      for (var key in matches) {
        if (matches[key] !== null && typeof matches[key] === 'object') {
          $('<li class="'+matches[key].class+'"></li>')
            .html($('<a href="#linker"></a>').html(matches[key].label))
            .mousedown(function () { ac.select(this); })
            .mouseover(function () { ac.highlight(this); })
            .mouseout(function () { ac.unhighlight(this); })
            .data('autocompleteValue', key)
            .appendTo(ul);
        }
        else{
          $('<li></li>')
            .html($('<a href="#linker"></a>').html(matches[key]))
            .mousedown(function () { ac.select(this); })
            .mouseover(function () { ac.highlight(this); })
            .mouseout(function () { ac.unhighlight(this); })
            .data('autocompleteValue', key)
            .appendTo(ul);
        }
      }

      // Show popup with matches, if any.
      if (this.popup) {
        if (ul.children().length) {
          $(this.popup).empty().append(ul).show();
          $(this.ariaLive).html(Drupal.t('Autocomplete popup'));
        }
        else {
          $(this.popup).css({ visibility: 'hidden' });
          this.hidePopup();
        }
      }
    };
  }
})(jQuery);