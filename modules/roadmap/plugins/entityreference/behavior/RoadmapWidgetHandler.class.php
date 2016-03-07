<?php

/**
 * Roadmap widget handler.
 */
/*
class RoadmapWidgetHandler extends EntityReference_BehaviorHandler_Abstract {
  public function schema_alter(&$schema, $field) {

    $schema['columns']['start_date'] = array(
      'description' => 'A timestamp defining a end date.',
      'type' => 'int',
      'not null' => FALSE,
      'default' => 0,
    );

    $schema['columns']['duration'] = array(
      'description' => 'A timespan in days.',
      'type' => 'int',
      'not null' => FALSE,
      'default' => 0,
    );

  }

  public function settingsForm($field, $instance) {
    $form['woot'] = array(
      '#markup' => t('The selected behavior handler is broken.'),
    );
    return $form;
  }

}
