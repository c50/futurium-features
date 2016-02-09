<?php

class futurium_isa_extras_sort_count_comments extends views_handler_sort {

  function query() {
    $this->query->orderby[] = array(
      'field' => 'comment_count',
      'direction' => strtoupper($this->options['order'])
    );
  }

}
