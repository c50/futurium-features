/**
 * @file
 * futurium_links.js
 */

(function ($) {

  if (Drupal.ajax) {
    Drupal.ajax.prototype.commands.fadeMessages = function() {
      $('.temporary-messages').each(function() {
        element = $(this);
        setTimeout(function(){ element.fadeOut(); }, 5000)
      });
    }
  }
  // Puts the currently highlighted suggestion into the autocomplete field.
  // Overridden from misc/autocomplete.js to add an event trigger on autocomplete.
  if (Drupal.jsAC) {
    Drupal.jsAC.prototype.temporaryMessage = function () {
      $('.temporary-message').each(function() {
        element = $(this);
        setTimeout(function(){ element.fadeOut(); }, 3000)
      });
    };
    /**
     * Handler for the "keyup" event.
     */
    Drupal.jsAC.prototype.onkeyup = function (input, e) {
      if (!e) {
        e = window.event;
      }
      switch (e.keyCode) {
        case 16: // Shift.
        case 17: // Ctrl.
        case 18: // Alt.
        case 20: // Caps lock.
        case 33: // Page up.
        case 34: // Page down.
        case 35: // End.
        case 36: // Home.
        case 37: // Left arrow.
        case 38: // Up arrow.
        case 39: // Right arrow.
        case 40: // Down arrow.
          return true;
        
        case 9:  // Tab.
        case 13: // Enter.
        case 27: // Esc.
          // this.hidePopup(e.keyCode);
          return true;

        // All other keys.
        default:
          if (input.value.length > 0 && !input.readOnly) {
            this.populatePopup();
          }
          else {
            // this.hidePopup(e.keyCode);
            this.hidePreview(input);
          }
          return true;
      }
    };

    Drupal.jsAC.prototype.hidePreview = function (input) {
      $(input).closest('form').find('#edit-results').hide();
    }

    /**
     * Puts the currently highlighted suggestion into the autocomplete field.
     */
    Drupal.jsAC.prototype.select = function (node) {
      string = $(node).data('autocompleteValue');
      substring = "node/add/";
      if (string.indexOf(substring) != -1) {
        window.location.href = Drupal.settings.basePath + $(node).data('autocompleteValue');
      }
      this.input.value = $(node).data('autocompleteValue');
    };

    /**
     * Fills the suggestion popup with any matches received.
     */
    Drupal.jsAC.prototype.found = function (matches) {
      // If no value in the textfield, do not show the popup.
      if (!this.input.value.length) {
        return false;
      }

      // Prepare matches.
      var ul = $('<ul class="dropdown-menu"></ul>');
      var ac = this;
      ul.css({
        display: 'block',
        right: 0
      });
      for (var key in matches) {
        if (matches[key] !== null && typeof matches[key] === 'object') {
          $('<li class="' + matches[key].class + '"></li>')
            .html($('<a href="#"></a>').html(matches[key].label))
            .mousedown(function () { ac.select(this); })
            .mouseover(function () { ac.highlight(this); })
            .mouseout(function () { ac.unhighlight(this); })
            .data('autocompleteValue', key)
            .appendTo(ul);
        }
        else {
          $('<li></li>')
            .html($('<a href="#"></a>').html(matches[key]))
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

    /**
     * Hides the autocomplete suggestions.
     */
    Drupal.jsAC.prototype.hidePopup = function (keycode) {
      // Select item if the right key or mousebutton was pressed.
      if (this.selected && ((keycode && keycode != 46 && keycode != 8 && keycode != 27) || !keycode)) {
        this.input.value = $(this.selected).data('autocompleteValue');
      }
      // Hide popup.
      var popup = this.popup;
      if (popup) {
        this.popup = null;
        $(popup).fadeOut('fast', function () { $(popup).remove(); });
      }
      this.selected = false;
      $(this.ariaLive).empty();
      if (this.input.value.length > 3) {
        $(this.input).trigger('autocompleteHidden');
      }
    };
  }
})(jQuery);
