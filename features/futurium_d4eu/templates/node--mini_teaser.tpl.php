<?php

/**
 * @file
 * Default theme implementation to display a mini-teaser.
 */
?>

<div id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($node->type != 'video_d4eu'):
    ?>
    <?php print render($content['field_leading_picture_d4eu']); ?>
    <?php
    hide($content['field_leading_picture_d4eu']);
  endif; ?>
  <?php if ($node->type == 'video_d4eu'):
    ?>
    <div class="leading-image"><?php print render($content['field_leading_picture_d4eu']); ?></div>
    <?php
    hide($content['field_leading_picture_d4eu']);
  endif; ?>
  <div class="content-type-label">
    <?php if ($node->type == 'event_d4eu'): ?>
      <span class="event-date"><?php print render($content['field_date_time']); ?></span>
      <?php
      hide($content['field_date_time']);
    endif; ?>
    <span class="label"><?php print $type_name; ?></span>
  </div>
  <div class="listNodeUpdated"><?php print format_date($node->changed, 'custom', 'd/m/Y'); ?></div>
  <h2<?php print $title_attributes; ?>>
    <?php print l($title, $node_link, $options = array('html' => TRUE)); ?>
  </h2>
  <?php print render($title_suffix); ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    ?>
    <?php print render($content); ?>
  </div>
  <div class="listNodeComments">
    <a href="<?php print $node_url; ?>">
    <?php if ($node->comment_count != 0): ?>
      <strong><?php print $node->comment_count; ?> </strong>
      <span class='listNodeCommented'>
        <?php print $comments_text; ?>
      </span>
      <span class='commentedAgo'> (<?php print $latest_ago ?><span><?php print format_interval(time() - $node->last_comment_timestamp, 1)?> ago</span>)
      </span>
    <?php else: ?>
      <span class="notCommented">
      <?php print $no_comment_text; ?>
      </span>
    <?php endif ?>
    </a>
  </div>
</div>
