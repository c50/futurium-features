<?php

/**
 * @file
 * Contains forms for the Futurium module.
 */

/**
 * Defines a form for linking ideas with documents.
 */
function futurium_idea_link_document($form, &$form_state, $node) {
  $form['link_content'] = array(
    '#title' => t('add evidence'),
    '#type' => 'textfield',
    '#size' => 12,
    '#autocomplete_path' => 'futurium_idea/related_content_autocomplete_callback/document',
    '#attributes' => array(
      'class' => array('link-document'),
    ),
  );
  $form['node'] = array(
    '#type' => 'value',
    '#value' => $node,
  );
  $form['content_type'] = array(
    '#type' => 'value',
    '#value' => 'document',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  $form['#submit'][] = '_related_content_submit';
  $form['#validate'][] = '_related_content_validate';
  return $form;
}

/**
 * Defines a form for linking ideas with videos.
 */
function futurium_idea_link_video($form, &$form_state, $node) {
  $form['link_content'] = array(
    '#title' => t('add video'),
    '#type' => 'textfield',
    '#size' => 12,
    '#autocomplete_path' => 'futurium_idea/related_content_autocomplete_callback/video_d4eu',
    '#attributes' => array(
      'class' => array('link-video'),
    ),
  );
  $form['node'] = array(
    '#type' => 'value',
    '#value' => $node,
  );
  $form['content_type'] = array(
    '#type' => 'value',
    '#value' => 'video_d4eu',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  $form['#submit'][] = '_related_content_submit';
  $form['#validate'][] = '_related_content_validate';
  return $form;
}

/**
 * Defines a form for linking ideas with events.
 */
function futurium_idea_link_event($form, &$form_state, $node) {
  $form['link_content'] = array(
    '#title' => t('add event'),
    '#type' => 'textfield',
    '#size' => 12,
    '#autocomplete_path' => 'futurium_idea/related_content_autocomplete_callback/event_d4eu',
    '#attributes' => array(
      'class' => array('link-event'),
    ),
  );
  $form['node'] = array(
    '#type' => 'value',
    '#value' => $node,
  );
  $form['content_type'] = array(
    '#type' => 'value',
    '#value' => 'event_d4eu',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  $form['#submit'][] = '_related_content_submit';
  $form['#validate'][]  = '_related_content_validate';
  return $form;
}

/**
 * Defines a form for linking ideas with polls.
 */
function futurium_idea_link_poll($form, &$form_state, $node) {
  $form['link_content'] = array(
    '#title' => t('add poll'),
    '#type' => 'textfield',
    '#size' => 12,
    '#autocomplete_path' => 'futurium_idea/related_content_autocomplete_callback/poll',
    '#attributes' => array(
      'class' => array('link-poll'),
    ),
  );
  $form['node'] = array(
    '#type' => 'value',
    '#value' => $node,
  );
  $form['content_type'] = array(
    '#type' => 'value',
    '#value' => 'poll',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  $form['#submit'][] = '_related_content_submit';
  $form['#validate'][] = '_related_content_validate';
  return $form;
}

/**
 * Submits search terms form.
 *
 * Redirects the visitor to the result.
 */
function _related_content_submit($form, &$form_state) {
  $wrapper = entity_metadata_wrapper('node', $form_state['values']['node']);
  $related_nid = $form_state['values']['related_content_nid'];
  switch ($form_state['values']['content_type']) {
    case 'document':
      $wrapper->field_related_documents[] = $related_nid;
      break;

    case 'poll':
      $wrapper->field_related_polls[] = $related_nid;
      break;

    case 'video_d4eu':
      $wrapper->field_related_videos[] = $related_nid;
      break;

    case 'event_d4eu':
      $wrapper->field_related_events[] = $related_nid;
      break;
  }
  $wrapper->save();
}

/**
 * Validates search terms form.
 *
 * Verifies & extracts node id from input texts and provides the node ID.
 */
function _related_content_validate($form, &$form_state) {
  $node    = $form_state['values']['link_content'];
  $matches = array();
  $nid = 0;

  // Matches a pattern like [33334] and if found extracts the numeric portion.
  $result = preg_match('/\[([0-9]+)\]$/', $node, $matches);
  if ($result > 0) {
    $form_state['values']['related_content_nid'] = $matches[$result];
  }
  else {
    form_error($form['node'], t('Sorry, no related content can be found'));
  }
}
