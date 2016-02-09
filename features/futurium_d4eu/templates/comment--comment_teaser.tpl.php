<?php

/**
 * @file
 * Default theme implementation to display a comment-teaser.
 */
?>

<div class="<?php print $classes; ?> clearfix quoteComment"<?php print $attributes; ?>>
  <div class="quoteComIntro">
    <?php print l('<span>' . $comment_span . '</span>', $node_link, $coml_options); ?>
  </div>
  <div class="quoteComItem"><small>in</small>
    <?php print l($node_span, $node_link, $nodl_options); ?>
  </div>
  <div class="quoteComDate"><?php print format_interval(time() - $comment->changed, 1); ?> ago</div>
</div>
