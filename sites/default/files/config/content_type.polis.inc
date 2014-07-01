<?php
/**
 * @file
 * content_type.polis.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'polis',
  'name' => 'Polis',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__polis' => 'variable.field_bundle_settings_node__polis',
  'variable.node_options_polis' => 'variable.node_options_polis',
  'variable.node_preview_polis' => 'variable.node_preview_polis',
  'variable.node_submitted_polis' => 'variable.node_submitted_polis',
  'variable.comment_default_per_page_polis' => 'variable.comment_default_per_page_polis',
  'variable.comment_form_location_polis' => 'variable.comment_form_location_polis',
  'variable.comment_preview_polis' => 'variable.comment_preview_polis',
  'variable.comment_subject_field_polis' => 'variable.comment_subject_field_polis',
);

$optional = array(
  'field.node.body.polis' => 'field.node.body.polis',
  'permission.create_polis_content' => 'permission.create_polis_content',
  'permission.edit_own_polis_content' => 'permission.edit_own_polis_content',
  'permission.edit_any_polis_content' => 'permission.edit_any_polis_content',
  'permission.delete_own_polis_content' => 'permission.delete_own_polis_content',
  'permission.delete_any_polis_content' => 'permission.delete_any_polis_content',
);

$modules = array(
  0 => 'node',
);
