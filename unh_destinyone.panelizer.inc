<?php
/**
 * @file
 * unh_destinyone.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function unh_destinyone_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'course';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:course:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'course-page';
  $panelizer->css = '';
  $panelizer->no_blocks = TRUE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'unh7_12_twocol_8_4_stacked_5_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'lefttop' => array(
        'tab_type' => 'nav-tabs',
      ),
      'right' => NULL,
      'bottomleft' => NULL,
      'bottomright' => NULL,
      'bottom' => NULL,
    ),
    'lefttop' => array(
      'style' => 'bootstrap_tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '609d4bde-8689-4ec8-b692-e8e0898e991c';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:course:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0e049f7b-a1e6-4e6b-96da-cdbc3fb039ce';
  $pane->panel = 'bottom';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0e049f7b-a1e6-4e6b-96da-cdbc3fb039ce';
  $display->content['new-0e049f7b-a1e6-4e6b-96da-cdbc3fb039ce'] = $pane;
  $display->panels['bottom'][0] = 'new-0e049f7b-a1e6-4e6b-96da-cdbc3fb039ce';
  $pane = new stdClass();
  $pane->pid = 'new-cbfde2b5-e00f-49d0-ad7d-ee205b236195';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cbfde2b5-e00f-49d0-ad7d-ee205b236195';
  $display->content['new-cbfde2b5-e00f-49d0-ad7d-ee205b236195'] = $pane;
  $display->panels['lefttop'][0] = 'new-cbfde2b5-e00f-49d0-ad7d-ee205b236195';
  $pane = new stdClass();
  $pane->pid = 'new-cbbe58ad-4bba-4698-a1ea-c811fcfef831';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide What You Will Learn Tab (if no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_what_you_will_learn\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cbbe58ad-4bba-4698-a1ea-c811fcfef831';
  $display->content['new-cbbe58ad-4bba-4698-a1ea-c811fcfef831'] = $pane;
  $display->panels['lefttop'][1] = 'new-cbbe58ad-4bba-4698-a1ea-c811fcfef831';
  $pane = new stdClass();
  $pane->pid = 'new-9dab0aeb-e152-4323-8834-4e79a7ce8729';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Travel and Site Info Tab (if no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_travel_site_information\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9dab0aeb-e152-4323-8834-4e79a7ce8729';
  $display->content['new-9dab0aeb-e152-4323-8834-4e79a7ce8729'] = $pane;
  $display->panels['lefttop'][2] = 'new-9dab0aeb-e152-4323-8834-4e79a7ce8729';
  $pane = new stdClass();
  $pane->pid = 'new-6a58e622-b0ef-4f59-a985-04d0f2fe6d80';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Tools and Materials Tab (if no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_tools_materials\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6a58e622-b0ef-4f59-a985-04d0f2fe6d80';
  $display->content['new-6a58e622-b0ef-4f59-a985-04d0f2fe6d80'] = $pane;
  $display->panels['lefttop'][3] = 'new-6a58e622-b0ef-4f59-a985-04d0f2fe6d80';
  $pane = new stdClass();
  $pane->pid = 'new-0a50cbfe-9aa9-4d05-a352-705cf5b0d854';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Instructor Bios Tab (if no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_instructor_bio\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0a50cbfe-9aa9-4d05-a352-705cf5b0d854';
  $display->content['new-0a50cbfe-9aa9-4d05-a352-705cf5b0d854'] = $pane;
  $display->panels['lefttop'][4] = 'new-0a50cbfe-9aa9-4d05-a352-705cf5b0d854';
  $pane = new stdClass();
  $pane->pid = 'new-7430083a-a9db-497e-97b4-4909c4baff0c';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Testimonials Tab (if no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_testimonial\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7430083a-a9db-497e-97b4-4909c4baff0c';
  $display->content['new-7430083a-a9db-497e-97b4-4909c4baff0c'] = $pane;
  $display->panels['lefttop'][5] = 'new-7430083a-a9db-497e-97b4-4909c4baff0c';
  $pane = new stdClass();
  $pane->pid = 'new-1400bffe-4959-404e-a892-4be8b203aca8';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_15';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide FAQ Tab (if no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_faq\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1400bffe-4959-404e-a892-4be8b203aca8';
  $display->content['new-1400bffe-4959-404e-a892-4be8b203aca8'] = $pane;
  $display->panels['lefttop'][6] = 'new-1400bffe-4959-404e-a892-4be8b203aca8';
  $pane = new stdClass();
  $pane->pid = 'new-97e59417-30ad-496f-887e-849df4a6dd9b';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Locations (If no available content)',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_loc_address\');
$field2 = field_get_items(\'node\', $node, \'field_location_information\');
if (empty($field) && empty($field2)) {
  return FALSE;
} else {
  return TRUE;
}
',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '97e59417-30ad-496f-887e-849df4a6dd9b';
  $display->content['new-97e59417-30ad-496f-887e-849df4a6dd9b'] = $pane;
  $display->panels['lefttop'][7] = 'new-97e59417-30ad-496f-887e-849df4a6dd9b';
  $pane = new stdClass();
  $pane->pid = 'new-51e12d65-6af6-4402-baf6-f6dbe160c195';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'video_embed_field',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'video_style' => 'normal',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '51e12d65-6af6-4402-baf6-f6dbe160c195';
  $display->content['new-51e12d65-6af6-4402-baf6-f6dbe160c195'] = $pane;
  $display->panels['right'][0] = 'new-51e12d65-6af6-4402-baf6-f6dbe160c195';
  $pane = new stdClass();
  $pane->pid = 'new-004d95bf-44fd-41f3-9ba6-3f76e186650c';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '004d95bf-44fd-41f3-9ba6-3f76e186650c';
  $display->content['new-004d95bf-44fd-41f3-9ba6-3f76e186650c'] = $pane;
  $display->panels['right'][1] = 'new-004d95bf-44fd-41f3-9ba6-3f76e186650c';
  $pane = new stdClass();
  $pane->pid = 'new-a2695a9a-c047-463d-b3cb-f42cb6e001bb';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Sections for Non-D1 courses',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_course_code\');
if (empty($field)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a2695a9a-c047-463d-b3cb-f42cb6e001bb';
  $display->content['new-a2695a9a-c047-463d-b3cb-f42cb6e001bb'] = $pane;
  $display->panels['right'][2] = 'new-a2695a9a-c047-463d-b3cb-f42cb6e001bb';
  $pane = new stdClass();
  $pane->pid = 'new-cd9ca88c-bf36-4fd5-9c25-7083385bd54a';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_14';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide Course Info for D1 Courses',
          'php' => '$node = node_load($contexts[\'panelizer\']->data->nid);
$field = field_get_items(\'node\', $node, \'field_course_code\');
if (empty($field)) {
  return TRUE;
} else {
  return FALSE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cd9ca88c-bf36-4fd5-9c25-7083385bd54a';
  $display->content['new-cd9ca88c-bf36-4fd5-9c25-7083385bd54a'] = $pane;
  $display->panels['right'][3] = 'new-cd9ca88c-bf36-4fd5-9c25-7083385bd54a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:course:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Juggernaut Display v55';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'course';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:course:juggernaut_display_v55';
  $panelizer->css_id = '';
  $panelizer->css_class = 'course-page';
  $panelizer->css = '';
  $panelizer->no_blocks = TRUE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'unh7_12_twocol_8_4_stacked_5_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'lefttop' => NULL,
      'right' => NULL,
      'bottomleft' => NULL,
      'bottomright' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f21e2af6-8518-4a77-82a9-9da6002bce72';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:course:juggernaut_display_v55';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e80a664-23d4-4016-a25b-d9c6fcf0843d';
  $pane->panel = 'bottom';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e80a664-23d4-4016-a25b-d9c6fcf0843d';
  $display->content['new-2e80a664-23d4-4016-a25b-d9c6fcf0843d'] = $pane;
  $display->panels['bottom'][0] = 'new-2e80a664-23d4-4016-a25b-d9c6fcf0843d';
  $pane = new stdClass();
  $pane->pid = 'new-f06c73c6-1f8c-4f46-a83e-15a9e89a2232';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'TEST CUSTOM CONTENT',
    'title' => 'Test Custom Content',
    'title_heading' => 'h2',
    'body' => '<p>Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Mauris blandit aliquet elit, eget tincidunt nibh pulvinar a. Proin eget tortor risus. Sed porttitor lectus nibh. Curabitur non nulla sit amet nisl tempus convallis quis ac lectus. Proin eget tortor risus. Curabitur aliquet quam id dui posuere blandit. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Pellentesque in ipsum id orci porta dapibus.</p>

<p>Curabitur aliquet quam id dui posuere blandit. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Donec rutrum congue leo eget malesuada. Donec rutrum congue leo eget malesuada. Cras ultricies ligula sed magna dictum porta. Nulla porttitor accumsan tincidunt. Donec sollicitudin molestie malesuada. Cras ultricies ligula sed magna dictum porta. Cras ultricies ligula sed magna dictum porta.</p>

<p>Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Curabitur arcu erat, accumsan id imperdiet et, porttitor at sem. Cras ultricies ligula sed magna dictum porta. Donec sollicitudin molestie malesuada. Curabitur aliquet quam id dui posuere blandit. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Vivamus suscipit tortor eget felis porttitor volutpat. Nulla quis lorem ut libero malesuada feugiat. Sed porttitor lectus nibh. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui.</p>

<p>Donec rutrum congue leo eget malesuada. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Curabitur non nulla sit amet nisl tempus convallis quis ac lectus. Curabitur non nulla sit amet nisl tempus convallis quis ac lectus. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Cras ultricies ligula sed magna dictum porta. Cras ultricies ligula sed magna dictum porta. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>

<p>Cras ultricies ligula sed magna dictum porta. Mauris blandit aliquet elit, eget tincidunt nibh pulvinar a. Mauris blandit aliquet elit, eget tincidunt nibh pulvinar a. Sed porttitor lectus nibh. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Nulla quis lorem ut libero malesuada feugiat. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Mauris blandit aliquet elit, eget tincidunt nibh pulvinar a. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque velit nisi, pretium ut lacinia in, elementum id enim.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f06c73c6-1f8c-4f46-a83e-15a9e89a2232';
  $display->content['new-f06c73c6-1f8c-4f46-a83e-15a9e89a2232'] = $pane;
  $display->panels['top'][0] = 'new-f06c73c6-1f8c-4f46-a83e-15a9e89a2232';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:course:juggernaut_display_v55'] = $panelizer;

  return $export;
}
