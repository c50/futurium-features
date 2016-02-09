<?php

/**
 * @file
 * Contains \FeatureContext.
 */

use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\TableNode;
use Behat\Mink\Element\NodeElement;
use Behat\Mink\Exception\ExpectationException;
use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Contains generic step definitions.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Checks that a 403 Access Denied error occurred.
   *
   * @Then I should get an access denied error
   */
  public function assertAccessDenied() {
    $this->assertSession()->statusCodeEquals(403);
  }

  /**
   * Checks that the given select field has the options listed in the table.
   *
   * @Then I should have the following options for :select:
   */
  public function assertSelectOptions($select, TableNode $options) {
    // Retrieve the specified field.
    if (!$field = $this->getSession()->getPage()->findField($select)) {
      throw new ExpectationException("Field '$select' not found.", $this->getSession());
    }

    // Check that the specified field is a <select> field.
    $this->assertElementType($field, 'select');

    // Retrieve the options table from the test scenario and flatten it.
    $expected_options = $options->getColumnsHash();
    array_walk($expected_options, function (&$value) {
      $value = reset($value);
    });

    // Retrieve the actual options that are shown in the page.
    $actual_options = $field->findAll('css', 'option');

    // Convert into a flat list of option text strings.
    array_walk($actual_options, function (&$value) {
      $value = $value->getText();
    });

    // Check that all expected options are present.
    foreach ($expected_options as $expected_option) {
      if (!in_array($expected_option, $actual_options)) {
        throw new ExpectationException("Option '$expected_option' is missing from select list '$select'.", $this->getSession());
      }
    }
  }

  /**
   * Checks that the given select field doesn't have the listed options.
   *
   * @Then I should not have the following options for :select:
   */
  public function assertNoSelectOptions($select, TableNode $options) {
    // Retrieve the specified field.
    if (!$field = $this->getSession()->getPage()->findField($select)) {
      throw new ExpectationException("Field '$select' not found.", $this->getSession());
    }

    // Check that the specified field is a <select> field.
    $this->assertElementType($field, 'select');

    // Retrieve the options table from the test scenario and flatten it.
    $expected_options = $options->getColumnsHash();
    array_walk($expected_options, function (&$value) {
      $value = reset($value);
    });

    // Retrieve the actual options that are shown in the page.
    $actual_options = $field->findAll('css', 'option');

    // Convert into a flat list of option text strings.
    array_walk($actual_options, function (&$value) {
      $value = $value->getText();
    });

    // Check that none of the expected options are present.
    foreach ($expected_options as $expected_option) {
      if (in_array($expected_option, $actual_options)) {
        throw new ExpectationException("Option '$expected_option' is unexpectedly found in select list '$select'.", $this->getSession());
      }
    }
  }

  /**
   * Checks that the given element is of the given type.
   *
   * @param NodeElement $element
   *   The element to check.
   * @param string $type
   *   The expected type.
   *
   * @throws ExpectationException
   *   Thrown when the given element is not of the expected type.
   */
  public function assertElementType(NodeElement $element, $type) {
    if ($element->getTagName() !== $type) {
      throw new ExpectationException("The element is not a '$type'' field.", $this->getSession());
    }
  }

  /**
   * Creates an article and then visits the detail page of the new article.
   *
   * @param Behat\Gherkin\Node\TableNode $table
   *   A table with article data, in the following format:
   *     | title         | Reducing pollution in 2016                                                                 |
   *     | summary       | The new plan for reducing poverty has been presented by the ABC board.                     |
   *     | body          | The board of directors of ABC has presented the official plan for reducing pollution       |
   *     | tags          | actions                                                                                    |
   *
   * @Given the following article:
   */
  public function theFollowingArticle(TableNode $table) {
    $node = (object) $table->getRowsHash();
    $node->type = 'article';
    $saved = $this->nodeCreate($node);
    // Set internal page to the new node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Creates an event and then visits the detail page of the new event.
   *
   * @param Behat\Gherkin\Node\TableNode $table
   *   A table with event data, in the following format:
   *     | title         | Reducing pollution in 2016 Meeting                                                  |
   *     | summary       | The new plan for reducing pollution will be presented by the ABC board.             |
   *     | body          | The board of directors of ABC will present the official plan for reducing pollution |
   *     | tags          | actions                                                                             |
   *
   * @Given the following event:
   */
  public function theFollowingEvent(TableNode $table) {
    $node = (object) $table->getRowsHash();
    $node->type = 'event';
    $saved = $this->nodeCreate($node);
    // Set internal page to the new node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Creates an evidence and then visits the detail page of the new evidence.
   *
   * @param Behat\Gherkin\Node\TableNode $table
   *   A table with evidence data, in the following format:
   *     | title         | Reducing pollution in 2016 Meeting                                                  |
   *     | summary       | The new plan for reducing pollution will be presented by the ABC board.             |
   *     | body          | The board of directors of ABC will present the official plan for reducing pollution |
   *
   * @Given the following evidence:
   */
  public function theFollowingEvidence(TableNode $table) {
    $node = (object) $table->getRowsHash();
    $node->type = 'evidence';
    $saved = $this->nodeCreate($node);
    // Set internal page to the new node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Creates an idea and then visits the detail page of the new idea.
   *
   * @param Behat\Gherkin\Node\TableNode $table
   *   A table with idea data, in the following format:
   *     | title         | Reducing pollution in 2016 Meeting                                                  |
   *     | summary       | The new plan for reducing pollution will be presented by the ABC board.             |
   *     | body          | The board of directors of ABC will present the official plan for reducing pollution |
   *     | tags          | actions                                                                             |
   *
   * @Given the following idea:
   */
  public function theFollowingIdea(TableNode $table) {
    $node = (object) $table->getRowsHash();
    $node->type = 'idea';
    $saved = $this->nodeCreate($node);
    // Set internal page to the new node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Creates a poll and then visits the detail page of the new poll.
   *
   * @param Behat\Gherkin\Node\TableNode $table
   *   A table with poll data, in the following format:
   *     | title         | Reducing pollution in 2016 Meeting                                                  |
   *     | summary       | The new plan for reducing pollution will be presented by the ABC board.             |
   *     | body          | The board of directors of ABC will present the official plan for reducing pollution |
   *     | tags          | actions                                                                             |
   *
   * @Given the following poll:
   */
  public function theFollowingPoll(TableNode $table) {
    $node = (object) $table->getRowsHash();
    $node->type = 'poll';
    $saved = $this->nodeCreate($node);
    // Set internal page to the new node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

}
