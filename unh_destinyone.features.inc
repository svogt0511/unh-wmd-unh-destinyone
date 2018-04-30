<?php
/**
 * @file
 * unh_destinyone.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unh_destinyone_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unh_destinyone_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function unh_destinyone_image_default_styles() {
  $styles = array();

  // Exported image style: course_image__1600w_.
  $styles['course_image__1600w_'] = array(
    'label' => 'Course Image (1600w)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1600,
          'height' => 685,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: person__150w_.
  $styles['person__150w_'] = array(
    'label' => 'Person (150w)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person__250w_.
  $styles['person__250w_'] = array(
    'label' => 'Person (250w)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'weight' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: testimonial__200w_.
  $styles['testimonial__200w_'] = array(
    'label' => 'Testimonial (200w)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: testimonial__300w_.
  $styles['testimonial__300w_'] = array(
    'label' => 'Testimonial (300w)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: testimonial_thumb__160x160_.
  $styles['testimonial_thumb__160x160_'] = array(
    'label' => 'Testimonial Thumb (160x160)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function unh_destinyone_node_info() {
  $items = array(
    'boilerplate' => array(
      'name' => t('Boilerplate'),
      'base' => 'node_content',
      'description' => t('Boilerplate used on articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A DestinyOne course.  Links to a course on the DestinyOne server.  Contains additional information and settings to be presented to the user from the Drupal front end.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Content type to collect information about staff, faculty, and contacts.'),
      'has_title' => '1',
      'title_label' => t('Display Name'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Testimonials from students. (How are these input?)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
