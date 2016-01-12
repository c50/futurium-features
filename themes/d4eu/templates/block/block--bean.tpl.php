<?php
/**
 * @file
 * Bean block template.
 */
 if ($visible): ?>
  <div id="<?php print $block_html_id; ?>" class="panel user-block <?php print $classes; ?>">
    <div class="panel-body contextual-links-region">
      <?php print render($title_suffix); ?>
      <?php if(!empty($bean->title)): ?>
        <div class="block-title views-field-title">
          <span class="field-content">
            <?php print $bean->title ?>
          </span>
        </div>
      <?php endif; ?>
      <div class="block-body">
        <div class="field-content">
          <?php
            print render($bean->field_block_body[LANGUAGE_NONE][0]['safe_value']);
          ?>
          <?php
            print $formatted_link;
          ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>
