<?php
/**
 * @file
 * Ec_resp's theme implementation for comments.
 *
 * Available variables:
 * - $author: Comment author. Can be link or plain text.
 * - $content: An array of comment items. Use render($content) to print them all
 *   , or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $created: Formatted date and time for when the comment was created.
 *   Preprocess functions can reformat it by calling format_date() with the
 *   desired parameters on the $comment->created variable.
 * - $changed: Formatted date and time for when the comment was last changed.
 *   Preprocess functions can reformat it by calling format_date() with the
 *   desired parameters on the $comment->changed variable.
 * - $new: New comment marker.
 * - $permalink: Comment permalink.
 * - $submitted: Submission information created from $author and $created during
 *   template_preprocess_comment().
 * - $picture: Authors picture.
 * - $signature: Authors signature.
 * - $status: Comment status. Possible values are:
 *   comment-unpublished, comment-published or comment-preview.
 * - $title: Linked title.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be the following:
 *   - comment: The current template type, i.e., "theming hook".
 *   - comment-by-anonymous: Comment by an unregistered user.
 *   - comment-by-node-author: Comment by the author of the parent node.
 *   - comment-preview: When previewing a new or edited comment.
 *   The following applies only to viewers who are registered users:
 *   - comment-unpublished: An unpublished comment visible only to admin.
 *   - comment-by-viewer: Comment by the user currently viewing the page.
 *   - comment-new: New comment since last the visit.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * These two variables are provided for context:
 * - $comment: Full comment object.
 * - $node: Node object the comments are attached to.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_comment()
 * @see template_process()
 * @see theme_comment()
 */
?>
<li class="<?php print $classes; ?> media"<?php print $attributes; ?>>

  <div class="attribution pull-right">
    <?php print $picture; ?>
  </div>

  <div class="comment-text media-body">
    <div class="panel panel-info">

      <?php print render($title_prefix); ?>
      <div class="panel-heading">
      <h4 class="panel-title">
        <?php if ($new): ?>
        <span class="label label-info"><?php print $new; ?></span>
        <?php endif; ?>
        <?php print $title; ?>
      </h4>
      </div>
      <?php print render($title_suffix); ?>

      <div class="panel-body content"<?php print $content_attributes; ?>>
        <?php
          hide($content['links']);
          print render($content);
        ?>
        <?php if ($signature): ?>
        <div class="user-signature clearfix">
          <?php print $signature; ?>
        </div>
        <?php endif; ?>

        <div class="comment-links row">
          <div class="col-lg-6 col-md-5 col-sm-12 col-xs-12">
            <?php print render($content['links']); ?>
          </div>

          <div class="clearfix visible-sm visible-xs"></div>

          <div class="col-lg-6 col-md-7 col-sm-12 col-xs-12 submitted text-right">
            <small>
              <div class="commenter-name"><?php print $author; ?></div>
              <?php print $comment_user['organisation']; ?>
              <div class="comment-time text-muted"><?php print $comment_created; ?></div>
           </small>
          </div>      
          
        </div> <!-- /.comment-links -->
      </div> <!-- /.content -->
    </div> <!-- /.panel -->
  </div> <!-- /.comment-text -->
</li>
