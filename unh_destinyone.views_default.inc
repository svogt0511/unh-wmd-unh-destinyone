<?php
/**
 * @file
 * unh_destinyone.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unh_destinyone_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_course_image']['id'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['table'] = 'field_data_field_course_image';
  $handler->display->display_options['fields']['field_course_image']['field'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['label'] = '';
  $handler->display->display_options['fields']['field_course_image']['alter']['text'] = '[title]
[field_course_image]';
  $handler->display->display_options['fields']['field_course_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_course_image']['settings'] = array(
    'image_style' => 'course_image__1600w_',
    'image_link' => '',
  );
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<? echo "<p>This is where the DestinyOne course overview goes.  We make an API call from here to get the content.</p>"; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_course_image']['id'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['table'] = 'field_data_field_course_image';
  $handler->display->display_options['fields']['field_course_image']['field'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['label'] = '';
  $handler->display->display_options['fields']['field_course_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_course_image']['settings'] = array(
    'image_style' => 'course_image__1600w_',
    'image_link' => '',
  );

  /* Display: Course Overview Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Overview Tab (pane)', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_course_image']['id'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['table'] = 'field_data_field_course_image';
  $handler->display->display_options['fields']['field_course_image']['field'] = 'field_course_image';
  $handler->display->display_options['fields']['field_course_image']['label'] = '';
  $handler->display->display_options['fields']['field_course_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_course_image']['settings'] = array(
    'image_style' => 'course_image__1600w_',
    'image_link' => '',
  );
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: PHP (d1pdt module - Official Course Description) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (d1pdt module - Official Course Description)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(d1pdt_courseView_officialCourseDescriptionPane($data->nid));
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Course What You Will Learn Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course What You Will Learn Tab (pane)', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What You Will Learn';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: What You Will Learn */
  $handler->display->display_options['fields']['field_what_you_will_learn']['id'] = 'field_what_you_will_learn';
  $handler->display->display_options['fields']['field_what_you_will_learn']['table'] = 'field_data_field_what_you_will_learn';
  $handler->display->display_options['fields']['field_what_you_will_learn']['field'] = 'field_what_you_will_learn';
  $handler->display->display_options['fields']['field_what_you_will_learn']['label'] = '';
  $handler->display->display_options['fields']['field_what_you_will_learn']['element_label_colon'] = FALSE;

  /* Display: Course Travel and Site Information Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Travel and Site Information Tab (pane)', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Travel & Site Information';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Address (Travel & Site) */
  $handler->display->display_options['fields']['field_course_address']['id'] = 'field_course_address';
  $handler->display->display_options['fields']['field_course_address']['table'] = 'field_data_field_course_address';
  $handler->display->display_options['fields']['field_course_address']['field'] = 'field_course_address';
  $handler->display->display_options['fields']['field_course_address']['label'] = '';
  $handler->display->display_options['fields']['field_course_address']['element_class'] = 'location-map';
  $handler->display->display_options['fields']['field_course_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_address']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_course_address']['settings'] = array(
    'include_map' => 1,
    'include_static_map' => 0,
    'apikey' => '',
    'iframe_width' => '200',
    'iframe_height' => '200',
    'static_scale' => '1',
    'include_link' => 0,
    'link_text' => 'View larger map',
    'zoom_level' => '14',
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  /* Field: Content: Travel & Site Information */
  $handler->display->display_options['fields']['field_travel_site_information']['id'] = 'field_travel_site_information';
  $handler->display->display_options['fields']['field_travel_site_information']['table'] = 'field_data_field_travel_site_information';
  $handler->display->display_options['fields']['field_travel_site_information']['field'] = 'field_travel_site_information';
  $handler->display->display_options['fields']['field_travel_site_information']['label'] = '';
  $handler->display->display_options['fields']['field_travel_site_information']['element_label_colon'] = FALSE;

  /* Display: Course Tools and Materials Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Tools and Materials Tab (pane)', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tools & Materials';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Tools & Materials */
  $handler->display->display_options['fields']['field_tools_materials']['id'] = 'field_tools_materials';
  $handler->display->display_options['fields']['field_tools_materials']['table'] = 'field_data_field_tools_materials';
  $handler->display->display_options['fields']['field_tools_materials']['field'] = 'field_tools_materials';
  $handler->display->display_options['fields']['field_tools_materials']['label'] = '';
  $handler->display->display_options['fields']['field_tools_materials']['element_label_colon'] = FALSE;

  /* Display: Course Instructor Bios Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Instructor Bios Tab (pane)', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instructor Bios';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview instructor-bios';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'course:panel_pane_9';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity (Person) */
  $handler->display->display_options['relationships']['field_instructor_bio_target_id']['id'] = 'field_instructor_bio_target_id';
  $handler->display->display_options['relationships']['field_instructor_bio_target_id']['table'] = 'field_data_field_instructor_bio';
  $handler->display->display_options['relationships']['field_instructor_bio_target_id']['field'] = 'field_instructor_bio_target_id';
  $handler->display->display_options['relationships']['field_instructor_bio_target_id']['ui_name'] = 'Entity Reference: Referenced Entity (Person)';
  $handler->display->display_options['relationships']['field_instructor_bio_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_instructor_bio_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View (Person) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Person)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'person';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';

  /* Display: Course Testimonials Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Testimonials Tab (pane)', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview testimonials';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'course:panel_pane_9';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity (Testimonials) */
  $handler->display->display_options['relationships']['field_testimonial_target_id']['id'] = 'field_testimonial_target_id';
  $handler->display->display_options['relationships']['field_testimonial_target_id']['table'] = 'field_data_field_testimonial';
  $handler->display->display_options['relationships']['field_testimonial_target_id']['field'] = 'field_testimonial_target_id';
  $handler->display->display_options['relationships']['field_testimonial_target_id']['ui_name'] = 'Entity Reference: Referenced Entity (Testimonials)';
  $handler->display->display_options['relationships']['field_testimonial_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_testimonial_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View (Testimonials) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Testimonials)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'testimonial';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';

  /* Display: Course Buttons (pane) */
  $handler = $view->new_display('panel_pane', 'Course Buttons (pane)', 'panel_pane_7');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Global: PHP (d1pdt module - Course Buttons) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (d1pdt module - Course Buttons)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(d1pdt_courseView_buttonsPane($data->nid));';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Course Sections (pane) */
  $handler = $view->new_display('panel_pane', 'Course Sections (pane)', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: PHP (d1pdt module - Right Rail Section(s) Info) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (d1pdt module - Right Rail Section(s) Info)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(d1pdt_courseView_sectionsPane($data->nid));
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Course Tab Header (pane) */
  $handler = $view->new_display('panel_pane', 'Course Tab Header (pane)', 'panel_pane_9');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Content: Title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;

  /* Display: Course Locations Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Locations Tab (pane)', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Locations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: PHP (gmap Content: Address (Locations)) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (gmap Content: Address (Locations))';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = '0';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'embedded-google-maps';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(d1pdt_courseView_locationsPane($data->nid));';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Location Information */
  $handler->display->display_options['fields']['field_location_information']['id'] = 'field_location_information';
  $handler->display->display_options['fields']['field_location_information']['table'] = 'field_data_field_location_information';
  $handler->display->display_options['fields']['field_location_information']['field'] = 'field_location_information';
  $handler->display->display_options['fields']['field_location_information']['label'] = '';
  $handler->display->display_options['fields']['field_location_information']['element_label_colon'] = FALSE;

  /* Display: Course Related Items Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Related Items Tab (pane)', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Items';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Related Items */
  $handler->display->display_options['fields']['field_related_items']['id'] = 'field_related_items';
  $handler->display->display_options['fields']['field_related_items']['table'] = 'field_data_field_related_items';
  $handler->display->display_options['fields']['field_related_items']['field'] = 'field_related_items';
  $handler->display->display_options['fields']['field_related_items']['label'] = '';
  $handler->display->display_options['fields']['field_related_items']['element_label_colon'] = FALSE;

  /* Display: Course Agenda Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Agenda Tab (pane)', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['label'] = '';
  $handler->display->display_options['fields']['field_agenda']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Course Speakers Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Speakers Tab (pane)', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speakers */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Course Info (pane) */
  $handler = $view->new_display('panel_pane', 'Course Info (pane)', 'panel_pane_14');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: PHP (d1pdt module - Right Rail Section(s) Info) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (d1pdt module - Right Rail Section(s) Info)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(d1pdt_courseView_infoPane($data->nid));
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Course FAQ Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course FAQ Tab (pane)', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FAQ';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['label'] = '';
  $handler->display->display_options['fields']['field_faq']['element_label_colon'] = FALSE;

  /* Display: Course Info DEBUG (pane) */
  $handler = $view->new_display('panel_pane', 'Course Info DEBUG (pane)', 'panel_pane_16');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: PHP (d1pdt module - Right Rail Section(s) Info) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (d1pdt module - Right Rail Section(s) Info)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
//watchdog(\'debug\', print_r(system_get_date_types(), 1));
$node = node_load($data->nid);
$node_wrapper = entity_metadata_wrapper(\'node\', $node);
$ret_dt = array();
$ret = \'\';

foreach ($node_wrapper->field_course_dates_times as $field_collection_wrapper) {
    $course_sched = $field_collection_wrapper->value();

      $date_time = array(
        \'start_date\' => NULL,
        \'end_date\' => NULL,
        \'start_time\' => NULL,
        \'end_time\' => NULL,
      );

      if (!empty($course_sched->field_course_start_end_date)) {
        $date = $course_sched->field_course_start_end_date[\'und\'][0];

        // used datetime format - native YYYY-MM-DD HH:MM:SS
        // get unix timestamp and format using format specified in node.

        $start_timestamp = strtotime($date[\'value\'] . \' \' . $date[\'timezone_db\']);
        $end_timestamp = strtotime($date[\'value2\'] . \' \' . $date[\'timezone_db\']);

        //$formats = system_get_date_types();

        //$date_time[\'start_date\'] = format_date($start_timestamp, D1PDT_DATE_FORMAT_MACH_NAME, \'\', $date[\'timezone\']);
        $date_time[\'start_date\'] = format_date($start_timestamp, \'short_date_day_first\', \'\', $date[\'timezone\']);
        //$date_time[\'end_date\'] = (($end_timestamp != $start_timestamp) ? format_date($end_timestamp, D1PDT_DATE_FORMAT_MACH_NAME, \'\', $date[\'timezone\']) : NULL);
       //$date_time[\'end_date\'] =  format_date($end_timestamp, D1PDT_DATE_FORMAT_MACH_NAME, \'\', $date[\'timezone\']);
       $date_time[\'end_date\'] =  format_date($end_timestamp, \'short_date_day_first\', \'\', $date[\'timezone\']);

        $ret .= \'<div style="margin-bottom: 40px;"><pre>DATE:  \'  . print_r($date, 1) . \'</pre></div>\';
        $ret .= \'<div style="margin-bottom: 40px;"><pre>START TIMESTAMP:  \'  . print_r($start_timestamp, 1) . \'</pre></div>\';
        $ret .= \'<div style="margin-bottom: 40px;"><pre>END TIMESTAMP:  \'  . print_r($end_timestamp, 1) . \'</pre></div>\';
        $ret .= \'<div style="margin-bottom: 40px;"><pre>FORMAT:  \'  . print_r(D1PDT_DATE_FORMAT_MACH_NAME, 1) . \'</pre></div>\';
      }

      if (!empty($course_sched->field_course_start_end_time)) {
        $time = $course_sched->field_course_start_end_time[\'und\'][0];

        // used datetime format - native YYYY-MM-DD HH:MM:SS
        // should get unix timestamp and format using format specified in node. (how?)
        // funkiness with getting time into the correct time zone.

        $array = explode(\' \', $time[\'value\'], 2);
        $array2 = explode(\' \', $time[\'value2\'], 2);

        $start_timestamp = strtotime($array[1] . \' \' . $time[\'timezone_db\']);
        $end_timestamp = strtotime($array2[1] . \' \' . $time[\'timezone_db\']);

        //$formats = system_get_date_types();

        $date_time[\'start_time\'] = format_date($start_timestamp, D1PDT_TIME_FORMAT_MACH_NAME, \'\', $time[\'timezone\']);
        $date_time[\'end_time\'] = (($end_timestamp != $start_timestamp) ? format_date($end_timestamp, D1PDT_TIME_FORMAT_MACH_NAME, \'\', $time[\'timezone\']) : NULL);
      }

      $ret_dt[] = $date_time;

      $ret .= \'<div style="margin-bottom: 40px;"><pre>FINAL DATE/TIME:  \'  . print_r($date_time, 1) . \'</pre></div>\';
}


$ret .= \'<div style="margin-bottom: 40px;"><pre>\'  . print_r(system_get_date_types(), 1) . \'</pre></div>\';
//$ret = \'<div style="margin-bottom: 40px;"><pre>\'  . print_r(node_load($data->nid), 1) . \'</pre></div>\';

//return(d1pdt_courseView_infoPane($data->nid));
return $ret;
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Courses with Locations (DEBUG) */
  $handler = $view->new_display('block', 'Courses with Locations (DEBUG)', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Address (Locations) (field_loc_address) */
  $handler->display->display_options['filters']['field_loc_address_value']['id'] = 'field_loc_address_value';
  $handler->display->display_options['filters']['field_loc_address_value']['table'] = 'field_data_field_loc_address';
  $handler->display->display_options['filters']['field_loc_address_value']['field'] = 'field_loc_address_value';
  $handler->display->display_options['filters']['field_loc_address_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Location Information (field_location_information) */
  $handler->display->display_options['filters']['field_location_information_value']['id'] = 'field_location_information_value';
  $handler->display->display_options['filters']['field_location_information_value']['table'] = 'field_data_field_location_information';
  $handler->display->display_options['filters']['field_location_information_value']['field'] = 'field_location_information_value';
  $handler->display->display_options['filters']['field_location_information_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Location (field_location) */
  $handler->display->display_options['filters']['field_location_value']['id'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_value']['field'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['operator'] = 'empty';
  $export['course'] = $view;

  return $export;
}
