<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Columns Tower'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_twocol_tower.png',
  'theme' => 'bootstrap_twocol_tower',
  'admin css' => 'bootstrap-twocol-tower.admin.css',
  'regions' => array(
    'row1l' => t('Row 1 Left'),
    'row1r' => t('Row 1 Right'),
    'row2l' => t('Row 2 Left'),
    'row2r' => t('Row 2 Right'),
    'row3l' => t('Row 3 Left'),
    'row3r' => t('Row 3 Right'),
    'row4l' => t('Row 4 Left'),
    'row4r' => t('Row 4 Right'),
    'row5l' => t('Row 5 Left'),
    'row5r' => t('Row 5 Right'),
  ),
);
