<?php
/**
 * @file
 * content_type.vl.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'vl',
  'name' => 'VL',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__vl' => 'variable.field_bundle_settings_node__vl',
  'variable.node_options_vl' => 'variable.node_options_vl',
  'variable.node_preview_vl' => 'variable.node_preview_vl',
  'variable.node_submitted_vl' => 'variable.node_submitted_vl',
  'variable.comment_default_per_page_vl' => 'variable.comment_default_per_page_vl',
  'variable.comment_form_location_vl' => 'variable.comment_form_location_vl',
  'variable.comment_preview_vl' => 'variable.comment_preview_vl',
  'variable.comment_subject_field_vl' => 'variable.comment_subject_field_vl',
);

$optional = array(
  'field.node.body.vl' => 'field.node.body.vl',
  'permission.create_vl_content' => 'permission.create_vl_content',
  'permission.edit_own_vl_content' => 'permission.edit_own_vl_content',
  'permission.edit_any_vl_content' => 'permission.edit_any_vl_content',
  'permission.delete_own_vl_content' => 'permission.delete_own_vl_content',
  'permission.delete_any_vl_content' => 'permission.delete_any_vl_content',
);

$modules = array(
  0 => 'node',
);
