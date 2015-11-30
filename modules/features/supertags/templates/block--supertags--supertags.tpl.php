<?php
/**
 * @file
 * Template file for supertags block.
 */
?>
<div class="exposed_form_outer_container">
  <div class="exposed_form_inner_container">
    <div id="<?php print $block_html_id; ?>" class="panel panel-default clearfix <?php print $classes; ?>">

      <?php print render($title_prefix); ?>
      <?php if ($title && $block->subject): ?>
        <h3 class="panel-heading">
          <?php print $block->subject ?>
        </h3>
      <?php endif;?>
      <?php print render($title_suffix); ?>

      <div class="panel-body content"<?php print $content_attributes; ?>>
        <?php print $content; ?>
      </div>
    </div>
  </div>
</div>
