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
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
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
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
  /* Field: Content: What You Will Learn */
  $handler->display->display_options['fields']['field_what_you_will_learn']['id'] = 'field_what_you_will_learn';
  $handler->display->display_options['fields']['field_what_you_will_learn']['table'] = 'field_data_field_what_you_will_learn';
  $handler->display->display_options['fields']['field_what_you_will_learn']['field'] = 'field_what_you_will_learn';
  $handler->display->display_options['fields']['field_what_you_will_learn']['label'] = '';
  $handler->display->display_options['fields']['field_what_you_will_learn']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course Travel and Site Information Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Travel and Site Information Tab (pane)', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Travel & Site Information';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

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

  /* Display: Course Agenda Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Agenda Tab (pane)', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course Tools and Materials Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Tools and Materials Tab (pane)', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tools & Materials';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
  /* Field: Content: Tools & Materials */
  $handler->display->display_options['fields']['field_tools_materials']['id'] = 'field_tools_materials';
  $handler->display->display_options['fields']['field_tools_materials']['table'] = 'field_data_field_tools_materials';
  $handler->display->display_options['fields']['field_tools_materials']['field'] = 'field_tools_materials';
  $handler->display->display_options['fields']['field_tools_materials']['label'] = '';
  $handler->display->display_options['fields']['field_tools_materials']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course Related Items Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Related Items Tab (pane)', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Items';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
  /* Field: Content: Related Items */
  $handler->display->display_options['fields']['field_related_items']['id'] = 'field_related_items';
  $handler->display->display_options['fields']['field_related_items']['table'] = 'field_data_field_related_items';
  $handler->display->display_options['fields']['field_related_items']['field'] = 'field_related_items';
  $handler->display->display_options['fields']['field_related_items']['label'] = '';
  $handler->display->display_options['fields']['field_related_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course Speakers Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course Speakers Tab (pane)', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course FAQ Tab (pane) */
  $handler = $view->new_display('panel_pane', 'Course FAQ Tab (pane)', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FAQ';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'course-overview';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View (Course View - Course Tab Header Pane) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Global: View (Course View - Course Tab Header Pane)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'course';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_9';
  /* Field: Content: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['label'] = '';
  $handler->display->display_options['fields']['field_faq']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course Required Forms (pane) */
  $handler = $view->new_display('panel_pane', 'Course Required Forms (pane)', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Required Forms */
  $handler->display->display_options['fields']['field_required_forms']['id'] = 'field_required_forms';
  $handler->display->display_options['fields']['field_required_forms']['table'] = 'field_data_field_required_forms';
  $handler->display->display_options['fields']['field_required_forms']['field'] = 'field_required_forms';
  $handler->display->display_options['fields']['field_required_forms']['label'] = '';
  $handler->display->display_options['fields']['field_required_forms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_required_forms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_required_forms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_required_forms']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_required_forms']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_required_forms']['separator'] = '<br>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="required-forms-block">
  <div class="card">
    <div class="card-header required-forms-header">
      Required Forms
    </div>
    <div class="card-block">
  [field_required_forms]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
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
  /* Filter criterion: Content: Required Forms (field_required_forms:url) */
  $handler->display->display_options['filters']['field_required_forms_url']['id'] = 'field_required_forms_url';
  $handler->display->display_options['filters']['field_required_forms_url']['table'] = 'field_data_field_required_forms';
  $handler->display->display_options['filters']['field_required_forms_url']['field'] = 'field_required_forms_url';
  $handler->display->display_options['filters']['field_required_forms_url']['operator'] = 'not empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['course'] = $view;

  $view = new view();
  $view->name = 'person';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_photo';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'body';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'person',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
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
    'person' => 'person',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'nothing_1';
  $handler->display->display_options['style_options']['heading_field'] = 'nothing_2';
  $handler->display->display_options['style_options']['body_field'] = 'nothing';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = '<div class="photo-field">[field_photo] </div>';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'person',
    'image_link' => '',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content:  Curriculum Vitae */
  $handler->display->display_options['fields']['field_cv']['id'] = 'field_cv';
  $handler->display->display_options['fields']['field_cv']['table'] = 'field_data_field_cv';
  $handler->display->display_options['fields']['field_cv']['field'] = 'field_cv';
  $handler->display->display_options['fields']['field_cv']['label'] = '';
  $handler->display->display_options['fields']['field_cv']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cv']['alter']['text'] = '<div class="cv-field"><a class="btn btn-primary btn-download-cv" style="margin-top: 10px;"  href="[field_cv]" target="_blank">Download CV</a></div>';
  $handler->display->display_options['fields']['field_cv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cv']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cv']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cv']['type'] = 'file_url_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text (Photo/Info Block) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Global: Custom text (Photo/Info Block)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_photo]
[field_cv]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text (Body) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Custom text (Body)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text (Title/Email) */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Global: Custom text (Title/Email)';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[title]
<div class="instructor-email">[field_email]</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: List Persons with Professional Title Set (Block) */
  $handler = $view->new_display('block', 'List Persons with Professional Title Set (Block)', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Professional Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Professional Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'not empty';

  /* Display: Content pane - Clone */
  $handler = $view->new_display('panel_pane', 'Content pane - Clone', 'panel_pane_2');
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
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'person',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $export['person'] = $view;

  $view = new view();
  $view->name = 'testimonial';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonial';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonial';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Person Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_name']['element_label_colon'] = FALSE;
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_student_title']['id'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['table'] = 'field_data_field_student_title';
  $handler->display->display_options['fields']['field_student_title']['field'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['label'] = '';
  $handler->display->display_options['fields']['field_student_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_title']['element_label_colon'] = FALSE;
  /* Field: Content: Program / Camp / Town */
  $handler->display->display_options['fields']['field_student_company']['id'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['table'] = 'field_data_field_student_company';
  $handler->display->display_options['fields']['field_student_company']['field'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['label'] = '';
  $handler->display->display_options['fields']['field_student_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_company']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = 'function get_my_value_t() {
  return 1;
}
';
  $handler->display->display_options['fields']['php']['php_value'] = '//get_field_value($data->nid, \'field_student_name\');

$output = \'ABC\';
return $output;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'article_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Person Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_name']['element_label_colon'] = FALSE;
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_student_title']['id'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['table'] = 'field_data_field_student_title';
  $handler->display->display_options['fields']['field_student_title']['field'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['label'] = '';
  $handler->display->display_options['fields']['field_student_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_title']['element_label_colon'] = FALSE;
  /* Field: Content: Program / Camp / Town */
  $handler->display->display_options['fields']['field_student_company']['id'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['table'] = 'field_data_field_student_company';
  $handler->display->display_options['fields']['field_student_company']['field'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['label'] = '';
  $handler->display->display_options['fields']['field_student_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_company']['element_label_colon'] = FALSE;
  /* Field: Global: PHP (Testimonial Signature) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (Testimonial Signature)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'testimonial-signature';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(unh_d1_drupal_testimonialView_signature($data->nid));
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Landing Page Content Pane */
  $handler = $view->new_display('panel_pane', 'Landing Page Content Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'testimonial-block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'article_thumb',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Person Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_name']['element_label_colon'] = FALSE;
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_student_title']['id'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['table'] = 'field_data_field_student_title';
  $handler->display->display_options['fields']['field_student_title']['field'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['label'] = '';
  $handler->display->display_options['fields']['field_student_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_title']['element_label_colon'] = FALSE;
  /* Field: Content: Program / Camp / Town */
  $handler->display->display_options['fields']['field_student_company']['id'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['table'] = 'field_data_field_student_company';
  $handler->display->display_options['fields']['field_student_company']['field'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['label'] = '';
  $handler->display->display_options['fields']['field_student_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_company']['element_label_colon'] = FALSE;
  /* Field: Global: PHP (Testimonial Signature) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP (Testimonial Signature)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'testimonial-signature';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '/* Needs to have d1pdt module enabled. */
return(unh_d1_drupal_testimonialView_signature($data->nid));
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?=$value?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'title' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Please type the full testimonial title:',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '256',
  );
  /* Field: Content: Person Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_name']['element_label_colon'] = FALSE;
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_student_title']['id'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['table'] = 'field_data_field_student_title';
  $handler->display->display_options['fields']['field_student_title']['field'] = 'field_student_title';
  $handler->display->display_options['fields']['field_student_title']['label'] = '';
  $handler->display->display_options['fields']['field_student_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_title']['element_label_colon'] = FALSE;
  /* Field: Content: Program / Camp / Town */
  $handler->display->display_options['fields']['field_student_company']['id'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['table'] = 'field_data_field_student_company';
  $handler->display->display_options['fields']['field_student_company']['field'] = 'field_student_company';
  $handler->display->display_options['fields']['field_student_company']['label'] = '';
  $handler->display->display_options['fields']['field_student_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_company']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'testimonial';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
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
    'testimonial' => 'testimonial',
  );
  $handler->display->display_options['path'] = 'testimonials';
  $export['testimonial'] = $view;

  return $export;
}
