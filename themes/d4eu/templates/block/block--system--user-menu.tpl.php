<?php
/**
 * @file
 * Sytem user menu.
 */
?>
<div class="utility-nav">
  <?php if (isset($user_welcome)): ?>
    <div class='username'><?php print $user_welcome; ?></div>
  <?php endif; ?>
  <?php global $base_url; ?>

  <?php if ($user_menu) : ?>
  <div id="<?php echo $block_html_id; ?>" class="<?php echo $classes; ?>">
    <ul><?php print $user_menu; ?></ul>
  </div>
  <?php endif; ?>
</div>
