<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['row1l'] || $content['row1r']): ?>
  <div class="container-fullwidth row1">
    <div class="container row1">
      <div class="row row1">
        <?php if ($content['row1l']): ?>
          <?php print $content['row1l']; ?>
        <?php endif; ?>
        <?php if ($content['row1r']): ?>
          <?php print $content['row1r']; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['row2l'] || $content['row2r']): ?>
  <div class="container-fullwidth row2">
    <div class="container row2">
      <div class="row row2">
        <?php if ($content['row2l']): ?>
          <?php print $content['row2l']; ?>
        <?php endif; ?>
        <?php if ($content['row2r']): ?>
          <?php print $content['row2r']; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['row3l'] || $content['row3r']): ?>
  <div class="container-fullwidth row3">
    <div class="container row3">
      <div class="row row3">
        <?php if ($content['row3l']): ?>
          <?php print $content['row3l']; ?>
        <?php endif; ?>
        <?php if ($content['row3r']): ?>
          <?php print $content['row3r']; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['row4l'] || $content['row4r']): ?>
  <div class="container-fullwidth row4">
    <div class="container row4">
      <div class="row row4">
        <?php if ($content['row4l']): ?>
          <?php print $content['row4l']; ?>
        <?php endif; ?>
        <?php if ($content['row4r']): ?>
          <?php print $content['row4r']; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['row5l'] || $content['row5r']): ?>
  <div class="container-fullwidth row5">
    <div class="container row5">
      <div class="row row5">
        <?php if ($content['row5l']): ?>
          <?php print $content['row5l']; ?>
        <?php endif; ?>
        <?php if ($content['row5r']): ?>
          <?php print $content['row5r']; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

</div>
