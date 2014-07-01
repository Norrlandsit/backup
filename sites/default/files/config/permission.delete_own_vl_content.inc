<?php
/**
 * @file
 * permission.delete_own_vl_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own vl content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.vl' => 'content_type.vl',
);

$optional = array();

$modules = array(
  0 => 'node',
);
