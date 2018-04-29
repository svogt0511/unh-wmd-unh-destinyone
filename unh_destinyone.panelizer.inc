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
  $pane->pid = 'new-cb4cb80a-c96f-4dd5-b431-329fb957dac0';
  $pane->panel = 'lefttop';
  $pane->type = 'course_overview_pane';
  $pane->subtype = 'course_overview_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Overview',
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-e0XlUsP6vv7mdKJeb2zFElMpkCysscdn5RNeDE7KNkA',
    'form_token' => '_8PCwD0aHHfsCDYLM-wYwAnk3HDOy_PpOVnxuziQSV4',
    'form_id' => 'course_overview_pane_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cb4cb80a-c96f-4dd5-b431-329fb957dac0';
  $display->content['new-cb4cb80a-c96f-4dd5-b431-329fb957dac0'] = $pane;
  $display->panels['lefttop'][0] = 'new-cb4cb80a-c96f-4dd5-b431-329fb957dac0';
  $pane = new stdClass();
  $pane->pid = 'new-f6c68e06-07e4-4a3a-8202-dda0f0eaf7d2';
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
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'What You Will Learn',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f6c68e06-07e4-4a3a-8202-dda0f0eaf7d2';
  $display->content['new-f6c68e06-07e4-4a3a-8202-dda0f0eaf7d2'] = $pane;
  $display->panels['lefttop'][1] = 'new-f6c68e06-07e4-4a3a-8202-dda0f0eaf7d2';
  $pane = new stdClass();
  $pane->pid = 'new-889c8992-2a02-4aa1-9112-c9f5a3962f22';
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
$field1 = field_get_items(\'node\', $node, \'field_course_address\');
if (empty($field) && empty($field1)) {
  return FALSE;
} else {
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Travel Information',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '889c8992-2a02-4aa1-9112-c9f5a3962f22';
  $display->content['new-889c8992-2a02-4aa1-9112-c9f5a3962f22'] = $pane;
  $display->panels['lefttop'][2] = 'new-889c8992-2a02-4aa1-9112-c9f5a3962f22';
  $pane = new stdClass();
  $pane->pid = 'new-11637b1c-bf34-4f1b-ac7e-8d0fd437695e';
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
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'What to Bring',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '11637b1c-bf34-4f1b-ac7e-8d0fd437695e';
  $display->content['new-11637b1c-bf34-4f1b-ac7e-8d0fd437695e'] = $pane;
  $display->panels['lefttop'][3] = 'new-11637b1c-bf34-4f1b-ac7e-8d0fd437695e';
  $pane = new stdClass();
  $pane->pid = 'new-b5084306-a7c9-4abd-a0e1-555991e680cb';
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
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Program Staff',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b5084306-a7c9-4abd-a0e1-555991e680cb';
  $display->content['new-b5084306-a7c9-4abd-a0e1-555991e680cb'] = $pane;
  $display->panels['lefttop'][4] = 'new-b5084306-a7c9-4abd-a0e1-555991e680cb';
  $pane = new stdClass();
  $pane->pid = 'new-b7dac23c-ca04-49b5-be07-264aa345aee1';
  $pane->panel = 'lefttop';
  $pane->type = 'views_panes';
  $pane->subtype = 'course-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b7dac23c-ca04-49b5-be07-264aa345aee1';
  $display->content['new-b7dac23c-ca04-49b5-be07-264aa345aee1'] = $pane;
  $display->panels['lefttop'][5] = 'new-b7dac23c-ca04-49b5-be07-264aa345aee1';
  $pane = new stdClass();
  $pane->pid = 'new-1a86949a-6115-4958-bb54-c0270435047d';
  $pane->panel = 'right';
  $pane->type = 'course_sections_pane';
  $pane->subtype = 'course_sections_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'section_sort' => array(
      'sort' => 1,
      'options' => '0',
      'direction' => '0',
    ),
    'body_section_fields' => array(
      'section_dates' => array(
        'show' => 1,
        'options' => '1',
      ),
      'section_times' => array(
        'show' => 1,
        'options' => '1',
      ),
      'section_tuition' => array(
        'show' => 1,
        'label' => 'Cost:',
        'published_code' => 1,
      ),
      'action_button' => 1,
      'section_locations' => 0,
      'section_instructors' => 1,
      'section_contact_hours' => 1,
      'section_discounts' => 1,
      'section_notes' => 1,
      'section_ceus' => 1,
      'section_course_code' => 1,
      'section_number' => 1,
    ),
    'disp_open' => 0,
    'section_status_noncached' => 0,
    'form_build_id' => 'form-hpYnSa7N9gHJw7WiNoS3uRcF-wV_9ZbkXJdbbZ26gj0',
    'form_token' => 'NhIXqzghppIY55z_-4HzfWo3GP-GcGvbKvbCLIsDW30',
    'form_id' => 'course_sections_pane_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a86949a-6115-4958-bb54-c0270435047d';
  $display->content['new-1a86949a-6115-4958-bb54-c0270435047d'] = $pane;
  $display->panels['right'][0] = 'new-1a86949a-6115-4958-bb54-c0270435047d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:course:juggernaut_display_v55'] = $panelizer;

  return $export;
}
