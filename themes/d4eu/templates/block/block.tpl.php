<?php

/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<?php if ($exposed_block): ?>
<div class="exposed_form_outer_container">
  <div class="exposed_form_inner_container">
<?php endif;?>
    <div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> <?php if ($with_panel): print 'panel panel-default clearfix'; endif; ?>">

      <?php print render($title_prefix); ?>
      <?php if ($with_title && $block->subject): ?>
        <div class="<?php if ($with_panel): print 'panel-heading'; endif; ?>">
          <?php print $block->subject ?>
        </div>
      <?php endif;?>
      <?php print render($title_suffix); ?>

      <div class="<?php if ($with_panel && $body_class): print 'panel-body'; endif; ?> content"<?php print $content_attributes; ?>>
        <?php print $content; ?>
      </div>
    </div>

<?php if ($exposed_block): ?>
  </div>
</div>
<?php endif;?>
