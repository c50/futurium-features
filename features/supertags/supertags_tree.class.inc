<?php
/**
 * @file
 * Classes to handle the tree structure for supertags.
 */

/**
 * Class SupertagsNode.
 *
 * Represents a node of the tree.
 */
class SupertagsNode {

  public $parentNode = NULL;
  public $text = '';
  public $depth = 0;
  public $children = array();
  public $tid = 0;

  /**
   * Constructor function.
   *
   * @param object $params
   *   Parameters.
   */
  public function __construct($params = NULL) {
    foreach ($params as $key => $val) {
      $this->$key = $val;
    }

    if (isset($this->parentNode)) {
      $this->parentNode->addChild($this);
    }
  }

  /**
   * Add a child to a node.
   *
   * @param SupertagsNode $node
   *   Object of class node.
   */
  public function addChild(SupertagsNode $node) {
    $this->children[] = $node;
  }

  /**
   * Get all ids of children nodes.
   *
   * @param array $children
   *   Children.
   *
   * @return array
   *   Array of children ids.
   */
  public function findChildren(&$children = array()) {
    $children[] = $this->tid;
    foreach ($this->children as $child) {
      $child->findChildren($children);
    }
    if (!empty($children)) {
      return $children;
    }
  }

  /**
   * Print a node.
   *
   * @param string $link_path
   *   Related link.
   *
   * @return string
   *   Print result.
   */
  public function printNode($link_path = NULL, $selected = FALSE) {
    $markup = '';
    $term = taxonomy_term_load($this->tid);

    $children_tids = $this->findChildren();
    $link = _supertags_tree_replace_path_argument($link_path, $term, $children_tids);

    $classes = $selected ? $this->depth . " selected-tree-item" : $this->depth;

    $markup .= '<li class="depth-' . $classes . '">' . $link;
    return $markup;
  }

  /**
   * Print node children.
   *
   * @param string $link_path
   *   Path to children.
   *
   * @return string
   *   Print result.
   */
  public function printNodeChildren($link_path = NULL) {
    $markup = '';
    $depth = $this->depth + 1;
    $markup .= '<ul class="depth-' . $depth . '">';

    foreach ($this->children as $child) {
      $term = taxonomy_term_load($child->tid);

      $children_tids = $child->findChildren();
      $link = _supertags_tree_replace_path_argument($link_path, $term, $children_tids);

      $markup .= '<li class="depth-' . $child->depth . '">' . $link . '</li>';
    }
    $markup .= '</ul>';
    return $markup;
  }

}

/**
 * Class Tree.
 *
 * A tree data structure. Branches are objects of type Node.
 */
class SupertagsTree {

  public $root = NULL;

  /**
   * Constructor.
   *
   * @param int $node
   *   Root node.
   */
  public function __construct($node) {
    $this->root = $node;
  }

  // Public methods.
  /**
   * Add a node.
   *
   * @param int $tid
   *   Term id.
   * @param int $pid
   *   Prent node id.
   */
  public function addNode($tid, $pid = NULL) {
    if ($pid == NULL) {
      $parent_node = $this->root;
    }
    else {
      $parent_node = $this->findNode($pid);
    }

    $term = taxonomy_term_load($tid);
    $node_properties = array(
      'tid' => $tid,
      'text' => $term->name,
      'parentNode' => $parent_node,
      'depth' => isset($parent_node->depth) ? $parent_node->depth + 1 : 1,
    );
    $node = new SupertagsNode($node_properties);
  }

  /**
   * Print all tree markup.
   *
   * @param string $link_path
   *   Relative Path.
   *
   * @return string
   *   HTML markup.
   */
  public function printTree($link_path = NULL) {
    $markup = $this->privatePrintTree($this->root, $link_path);
    return $markup;
  }

  /**
   * Print sub-tree markup.
   *
   * @param object $node
   *   Node object.
   * @param string $link_path
   *   Node relative path.
   *
   * @return string
   *   HTML markup.
   */
  public function printToPath($node, $link_path = NULL) {
    $markup = '<ul class="depth-1">';
    $path = $this->getPath($node);
    $root = $this->root;
    $open_tags = 0;

    $at_top = count($path) == 1;

    foreach ($root->children as $child) {
      $n = NULL;
      if (in_array($child->tid, $path)) {
        $selected = ($child === $node);
        $path_pos = array_search($child->tid, $path);
        $markup .= $child->printNode($link_path, $selected);
        if (count($path) == 1) {
          $markup .= $child->printNodeChildren($link_path);
        }
        else {
          $next_item = array_shift($path);
          while (!empty($path)) {
            $n = $this->findNode($path[0]);
            if (!empty($n)) {
              $selected = ($n === $node);
              $markup .= '<ul class="depth-' . $n->depth . '" >' . $n->printNode($link_path, $selected);
              $open_tags++;
            }
            $next_item = array_shift($path);
          }
          if (!empty($n)) {
            if (!empty($n->children)) {
              $markup .= $n->printNodeChildren($link_path);
            }
          }
        }
      }
    }
    return $markup;
  }

  /**
   * Print first level if nothing selected.
   *
   * @param string $link_path
   *   Relative path.
   *
   * @return mixed
   *   Print first level tags.
   */
  public function printFirstLevel($link_path = NULL) {
    return $this->root->printNodeChildren($link_path);
  }

  /**
   * Find a node by the id.
   *
   * @param int $id
   *   Term id to find.
   * @param object $node
   *   Node to find.
   *
   * @return mixed
   *   Searched node.
   */
  public function findNode($id, $node = NULL) {
    if ($node == NULL) {
      $node = $this->root;
    }
    if ($node->tid == $id) {
      return $node;
    }
    else {
      foreach ($node->children as $child) {
        $node = $this->findNode($id, $child);
        if ($node != NULL) {
          return $node;
        }
      }
    }
    return NULL;
  }

  /**
   * Find Children.
   *
   * @param int $id
   *   Children term Id.
   * @param object $node
   *   Children Node.
   *
   * @return array
   *   Children array.
   */
  public function findChildren($id, $node = NULL, &$children = NULL) {
    if ($node == NULL) {
      $node = $this->findNode($id);
    }
    foreach ($node->children as $child) {
      $children[] = $child->tid;
      $this->findChildren($child->tid, $child, $children);
    }
    return $children;
  }

  /**
   * Get path to node.
   *
   * @param object $node
   *   Node object.
   *
   * @return array
   *   Result as an array.
   */
  public function getPath($node) {
    while ($node->parentNode != NULL) {
      $path[] = $node->tid;
      $node = $node->parentNode;
    }
    $path = array_reverse($path);
    return $path;
  }


  // Private methods.
  /**
   * Print terms tree.
   *
   * @param object $node
   *   Node object.
   * @param string $link_path
   *   Relative path.
   *
   * @return string
   *   Markup result.
   */
  private function privatePrintTree($node, $link_path = NULL) {
    static $last_depth = 0;

    $markup = "";
    $open_tag = "";
    $closing_tag = "";

    if ($node->depth != 0) {
      $term = taxonomy_term_load($node->tid);

      $link = _supertags_tree_replace_path_argument($link_path, $term);

      if ($last_depth < $node->depth) {
        $open_tag = '<ul class="depth-' . $node->depth . '">';
      }
      if ($last_depth > $node->depth) {
        $open_tag = str_repeat("</ul>", $last_depth - $node->depth);
        $closing_tag = "</li>";
      }
      $markup .= $open_tag . '<li class="depth-' . $node->depth . '">' . $link . $closing_tag;
      $last_depth = $node->depth;
    }
    foreach ($node->children as $child) {
      $markup .= $this->privatePrintTree($child, $link_path);
    }
    $markup = str_repeat("</li></ul>", $node->depth);
    return $markup;
  }

}

/**
 * Replace Path argument.
 *
 * @param string $link_path
 *   Relative path.
 * @param object $term_object
 *   Term object.
 *
 * @return string
 *   Result links.
 */
function _supertags_tree_replace_path_argument($link_path, $term_object) {
  $query_components = array();

  $tags_desired_width = variable_get('tags_desired_width', 30);

  if ($link_path == NULL) {
    $link_path = "taxonomy/term/%tid";
  }

  while (strpos($link_path, '%tid')) {
    $link_path = str_replace("%tid", $term_object->tid, $link_path);
  }
  while (strpos($link_path, '%name')) {
    $link_path = str_replace("%name", $term_object->name, $link_path);
  }

  $parts = explode('?', $link_path);

  $url = $parts[0];

  if (!empty($parts[1])) {
    $query_string = $parts[1];
    $query = explode('&', $query_string);
    foreach ($query as $value) {
      $c = explode('=', $value);
      $query_components[$c[0]] = $c[1];
    }
  }

  $alter    = array(
    'max_length'    => $tags_desired_width,
    'ellipsis'      => TRUE,
    'word_boundary' => TRUE,
    'html'          => TRUE,
  );

  $term_object->name = views_trim_text($alter, $term_object->name);

  $link = l($term_object->name, $url, array('query' => $query_components));

  return $link;
}
