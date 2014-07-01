<?php
/**
 * @file
 * permission.create_polis_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create polis content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.polis' => 'content_type.polis',
);

$optional = array();

$modules = array(
  0 => 'node',
);
