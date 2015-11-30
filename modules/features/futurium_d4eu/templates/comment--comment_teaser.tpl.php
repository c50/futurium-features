<?php

/**
 * @file
 * Default theme implementation to display a comment-teaser.
 */
?>

<div class="<?php print $classes; ?> clearfix quoteComment"<?php print $attributes; ?>>
  <div class="quoteComIntro"><a href="<?php print $comment->rdf_data['nid_uri']; ?>#comment-<?php print $comment->cid; ?>">
      <span><?php print $trimmed_comment; ?></span>
    </a></div>
  <div class="quoteComDate"><?php print format_interval(time() - $comment->changed, 1); ?> ago</div>
  <div class="quoteComItem"><small>in</small> <a href="<?php print $comment->rdf_data['nid_uri']; ?>"><?php print $node->title; ?></a></div>
</div>
