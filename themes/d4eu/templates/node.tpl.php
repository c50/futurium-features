<?php
/**
 * @file
 * Custom theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $display_user_picture: Whether node author's picture should be displayed.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print filter_xss($node_url); ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if ($prefix_display): ?>
    <div class="node-private label label-default clearfix">
      <span class="glyphicon glyphicon-lock"></span>
      <?php print t('This content is private'); ?>
    </div>
    <?php endif; ?>

    <?php
      foreach ($content as $key => $value):
        if (in_array($key, $show)):
          print render($content[$key]);
        endif;
      endforeach;
    ?>

    <div id="js-contentFilterContainer"></div>

    <?php
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_rate_ideas']);
    hide($content['field_rate_issue']);
    ?>

    <?php print render($content); ?>

    <?php if ($suffix_display): ?>
      <div class="row node-info">
        <div class="node-info-submitted col-lg-6 col-md-6 col-sm-6 col-xs-12 col-lg-offset-6 col-md-offset-6 col-sm-offset-6">
          <div class="well well-sm node-submitted clearfix">
            <small>
              <?php print $user_picture; ?>
              <?php print $submitted; ?>
            </small>
          </div>
        </div>
      </div>
      <div class="node-info-footer">
        <?php if (isset($subscriptions_node_flag)): ?>
          <?php print $subscriptions_node_flag ?>
        <?php endif; ?>
        <?php
        print render($content['field_rate_ideas']);
        print render($content['field_rate_issue']);
        ?>
      </div>
    <?php endif;?>

    <div class="linkedContent view-recent-activity">
      <?php print views_embed_view('relations_to_nodes', 'parents'); ?>
      <?php print views_embed_view('relations_to_nodes', 'evidence'); ?>
      <?php print views_embed_view('relations_to_nodes', 'relationteaser'); ?>
    </div>
    <?php if (user_is_logged_in()): ?>
      <div class="linkingForm"><?php print render($select_relation) ?></div>
    <?php endif; ?>

    <?php if ((user_is_logged_in() == FALSE) && ($open_to_comments == TRUE)): ?>
      <div id='comment-form-container'><figure class='loginToCommentCTA'>
          <h2 class='title comment-form'><?php print $comment_login_title ?></h2>
                        <span class='form-item'>
                          <label><?php print $comment_login_subject ?> </label><input class='form-control form-text' type='text' size='60'>
                        </span>
                        <span>
                        <span class='form-item'>
                          <label><?php print $comment_login_comment ?>
                            <span class='form-required'>*</span>
                          </label>
                          <textarea class='form-control' cols='60' rows='5'></textarea>
                         </span>
                       </span>
                       <span class='form-item'>
                         <button class='btn btn-default'><?php print $comment_login_save ?></button>
                       </span>
          <figcaption class='loginToCommentCTAMask'>
            <p><?php print $comment_login ?></p>
          </figcaption>
        </figure></div>
    <?php endif;?>
    <?php print render($content['comments']); ?>

  </div>
</div>
