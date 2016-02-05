<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$row_vars = $variables['view']->result;
?>
<?php if (count($row_vars) > 0): ?>
<div id="myCarousel" class="carousel slide" data-ride="carousel">
  <!-- Indicators -->
  <ol class="carousel-indicators">
    <li data-target="#myCarousel" data-slide-to="0" class="active"></li>
    <?php for($x = 1; $x < count($row_vars); $x++): ?>
      <li data-target="#myCarousel" data-slide-to="<?php print $x; ?>"></li>
    <?php endfor; ?>
  </ol>

  <!-- Wrapper for slides -->
  <div class="carousel-inner" role="listbox">
    <?php foreach ($row_vars as $id => $row): ?>
      <div class="item <?php if ($id == 0) print 'active' ?>">

        <div class="slide-image-wrapper">
          <?php
            $var = array(
              'item' => $row->field_field_leading_picture_d4eu[0]['raw'],
              'image_style' => 'carousel_full'
            );
            print theme_image_formatter($var);
          ?>
          <div class="shadow-content">
            <h1><?php print l($row->node_title, "node/" . $row->nid); ?></h1>
          </div>
          <div class="shadow">
          </div>
        </div>
      </div>
    <?php endforeach; ?>
  </div>

  <!-- Left and right controls -->
  <a class="left carousel-control" href="#myCarousel" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#myCarousel" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
<?php endif; ?>
