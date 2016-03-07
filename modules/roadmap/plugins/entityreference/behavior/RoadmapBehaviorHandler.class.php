<?php

/**
 * Roadmap behavior handler.
 */
class RoadmapBehaviorHandler extends EntityReference_BehaviorHandler_Abstract {

  public function schema_alter(&$schema, $field) {

    $schema['columns']['start_date'] = array(
      'description' => 'A timestamp defining a end date.',
      'type' => 'int',
      'not null' => TRUE,
      'default' => 0,
    );

    $schema['columns']['duration'] = array(
      'description' => 'A timespan in days.',
      'type' => 'int',
      'not null' => FALSE,
      'default' => 0,
    );

  }

  public function views_data_alter(&$data, $field) {
  }

  public function presave($entity_type, $entity, $field, $instance, $langcode, &$items) {
    foreach ($items as $key => $value) {
      $date = $items[$key]['start_date'];
      $items[$key]['start_date'] = strtotime($date);
    }
  }

}
