<?php
/**
 * @file
 * unh_destinyone.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function unh_destinyone_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_17';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['webform_client_form_17'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_18';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['webform_client_form_18'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_19';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['webform_client_form_19'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_21';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['webform_client_form_21'] = $captcha;

  return $export;
}
