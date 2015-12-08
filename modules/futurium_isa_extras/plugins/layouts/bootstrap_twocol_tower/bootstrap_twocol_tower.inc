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
    'row6l' => t('Row 6 Left'),
    'row6r' => t('Row 6 Right'),
    'row7l' => t('Row 7 Left'),
    'row7r' => t('Row 7 Right'),
    'row8l' => t('Row 8 Left'),
    'row8r' => t('Row 8 Right'),
    'row9l' => t('Row 9 Left'),
    'row9r' => t('Row 9 Right'),
    'row10l' => t('Row 10 Left'),
    'row10r' => t('Row 10 Right'),
  ),
);
