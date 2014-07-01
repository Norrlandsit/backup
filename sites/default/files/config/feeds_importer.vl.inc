<?php
/**
 * @file
 * feeds_importer.vl.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'vl';
$feeds_importer->config = array(
  'name' => 'VL',
  'description' => '',
  'fetcher' => array(
    'plugin_key' => 'FeedsHTTPFetcher',
    'config' => array(
      'auto_detect_feeds' => 0,
      'use_pubsubhubbub' => 0,
      'designated_hub' => '',
      'request_timeout' => '',
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsSyndicationParser',
    'config' => array(),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => 0,
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'title',
          'target' => 'title',
          'unique' => FALSE,
        ),
        1 => array(
          'source' => 'description',
          'target' => 'body',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '0',
      'input_format' => 'full_html',
      'skip_hash_check' => 0,
      'bundle' => 'vl',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => 1800,
  'expire_period' => 3600,
  'import_on_create' => TRUE,
  'process_in_background' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds',
);
