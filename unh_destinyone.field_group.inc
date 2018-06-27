<?php
/**
 * @file
 * unh_destinyone.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function unh_destinyone_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_course_tabs|node|course|form';
  $field_group->group_name = 'group_additional_course_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Course Tabs (Non-D1 Course Settings)',
    'weight' => '5',
    'children' => array(
      0 => 'group_course_settings',
      1 => 'group_overview',
      2 => 'group_search_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-additional-course-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_additional_course_tabs|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agenda|node|course|form';
  $field_group->group_name = 'group_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Agenda',
    'weight' => '10',
    'children' => array(
      0 => 'field_agenda',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Agenda',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_agenda|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_associated_files_and_forms|node|course|form';
  $field_group->group_name = 'group_associated_files_and_forms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Associated Files and Forms',
    'weight' => '13',
    'children' => array(
      0 => 'field_more_info_webform',
      1 => 'field_brochure_link',
      2 => 'field_required_forms',
      3 => 'field_housing_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_associated_files_and_forms|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certificate_list|node|course|form';
  $field_group->group_name = 'group_certificate_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_certificates';
  $field_group->data = array(
    'label' => 'Certificate List',
    'weight' => '56',
    'children' => array(
      0 => 'field_certificate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Certificate List',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_certificate_list|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certificates|node|course|form';
  $field_group->group_name = 'group_certificates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'D1 Certificates',
    'weight' => '14',
    'children' => array(
      0 => 'group_certificate_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'D1 Certificates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Select the DestinyOne certificate(s) you want to be displayed with the course.  The D1 certificate code will be populated automatically.  Provide a url to the page to be displayed when the certificate title is clicked on.  

(This is a D1-only feature: certificates will only show ip in D1 course pages.)',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_certificates|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_schedule|node|course|form';
  $field_group->group_name = 'group_course_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_settings';
  $field_group->data = array(
    'label' => 'Course Schedule',
    'weight' => '59',
    'children' => array(
      0 => 'field_course_dates_times',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Course Schedule',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-schedule field-group-fieldset',
        'description' => 'Non-D1 Course dates and times.  To get only one date or time, you must enter the same value in both start/end fields.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_course_schedule|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_settings|node|course|form';
  $field_group->group_name = 'group_course_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_course_tabs';
  $field_group->data = array(
    'label' => 'Right Rail Settings',
    'weight' => '65',
    'children' => array(
      0 => 'field_course_enrollment_link',
      1 => 'field_course_availability',
      2 => 'field_course_location_name',
      3 => 'field_course_tuition',
      4 => 'field_course_contact_hours',
      5 => 'field_course_ceus',
      6 => 'field_course_type',
      7 => 'group_course_schedule',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_course_settings|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_tabs|node|course|form';
  $field_group->group_name = 'group_course_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course Tabs',
    'weight' => '4',
    'children' => array(
      0 => 'group_agenda',
      1 => 'group_associated_files_and_forms',
      2 => 'group_certificates',
      3 => 'group_faq',
      4 => 'group_instructor_bios',
      5 => 'group_related_items',
      6 => 'group_speakers',
      7 => 'group_testimonials',
      8 => 'group_tools_and_materials',
      9 => 'group_travel_and_site_info',
      10 => 'group_what_you_will_learn',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-course-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_course_tabs|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|node|course|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'FAQ',
    'weight' => '12',
    'children' => array(
      0 => 'field_faq',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faq|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructor_bios|node|course|form';
  $field_group->group_name = 'group_instructor_bios';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Instructor Bios',
    'weight' => '7',
    'children' => array(
      0 => 'field_instructor_bio',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-instructor-bios field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_instructor_bios|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|course|form';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_course_tabs';
  $field_group->data = array(
    'label' => 'Locations',
    'weight' => '67',
    'children' => array(
      0 => 'field_loc_address',
      1 => 'field_location',
      2 => 'field_location_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-locations field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_locations|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|course|form';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_course_tabs';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '64',
    'children' => array(
      0 => 'field_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-overview field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_overview|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_items|node|course|form';
  $field_group->group_name = 'group_related_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Related Items',
    'weight' => '9',
    'children' => array(
      0 => 'field_related_items',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Related Items',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_related_items|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_search_settings|node|course|form';
  $field_group->group_name = 'group_search_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_course_tabs';
  $field_group->data = array(
    'label' => 'Search Settings',
    'weight' => '67',
    'children' => array(
      0 => 'field_keywords',
      1 => 'field_filters',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Search Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-search-settings field-group-htab',
        'description' => 'For NON-D1 courses.  Choose a set of keywords to make your course a part of the keyword search.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_search_settings|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speakers|node|course|form';
  $field_group->group_name = 'group_speakers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Speakers',
    'weight' => '11',
    'children' => array(
      0 => 'field_speakers',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-speakers field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_speakers|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_testimonials|node|course|form';
  $field_group->group_name = 'group_testimonials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Testimonials',
    'weight' => '8',
    'children' => array(
      0 => 'field_testimonial',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-testimonials field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_testimonials|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tools_and_materials|node|course|form';
  $field_group->group_name = 'group_tools_and_materials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Tools & Materials',
    'weight' => '6',
    'children' => array(
      0 => 'field_tools_materials',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tools_and_materials|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_travel_and_site_info|node|course|form';
  $field_group->group_name = 'group_travel_and_site_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'Travel & Site Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_course_address',
      1 => 'field_travel_site_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-travel-and-site-info field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_travel_and_site_info|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_what_you_will_learn|node|course|form';
  $field_group->group_name = 'group_what_you_will_learn';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_course_tabs';
  $field_group->data = array(
    'label' => 'What You Will Learn',
    'weight' => '4',
    'children' => array(
      0 => 'field_what_you_will_learn',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_what_you_will_learn|node|course|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Course Tabs (Non-D1 Course Settings)');
  t('Agenda');
  t('Associated Files and Forms');
  t('Certificate List');
  t('Course Schedule');
  t('Course Tabs');
  t('D1 Certificates');
  t('FAQ');
  t('Instructor Bios');
  t('Locations');
  t('Overview');
  t('Related Items');
  t('Right Rail Settings');
  t('Search Settings');
  t('Speakers');
  t('Testimonials');
  t('Tools & Materials');
  t('Travel & Site Information');
  t('What You Will Learn');

  return $field_groups;
}
