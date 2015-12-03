<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="grid-4 col col-md-4">
  <div class="views-row-wrapper">
    <div class="vertical-align">
      <h2 class="block-title"><?php print t("Upcoming events"); ?></h2>
    </div>
  </div>
</div>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
