<?php
/**
 * @file
 * unh_destinyone.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function unh_destinyone_webform_defaults() {
$webforms = array();
  $webforms['contact_us'] = array(
  'uid' => 1,
  'title' => 'Contact Us',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '542532a6-75bb-415a-9d17-50a7109a2f1c',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd4961cb9-cc1a-425e-aeff-5ce0982f3e7c',
  'revision_uid' => 1,
  'field_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>To join our Summer Youth Program email list, please submit the information below:</p>

<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>To join our Summer Youth Program email list, please submit the information below:</p>
<p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'contact_us',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'cathy.leach@unh.edu',
        'subject' => 'youth programs contact us response',
        'from_name' => 'contact_us-last_name',
        'from_address' => 'contact_us-e_mail',
        'template' => 'Submitted on [submission:date:long]
Submitted values are:
[submission:values]

',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => TRUE,
          'from_address' => TRUE,
        ),
      ),
    ),
    'components' => array(
      'contact_us-first_name' => array(
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'contact_us-first_name',
        'page_num' => 1,
      ),
      'contact_us-last_name' => array(
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'contact_us-last_name',
        'page_num' => 1,
      ),
      'contact_us-e_mail' => array(
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'contact_us-e_mail',
        'page_num' => 1,
      ),
      'contact_us-request_or_comment' => array(
        'form_key' => 'request_or_comment',
        'name' => 'Request or comment',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => 'contact_us-request_or_comment',
        'page_num' => 1,
      ),
      'contact_us-specific_program_interests' => array(
        'form_key' => 'specific_program_interests',
        'name' => 'List any Specific Youth Program Interest(s)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'minlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'contact_us-specific_program_interests',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'locations' => array(),
  'location' => array(),
  'name' => 'webadm',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
);
  $webforms['request_information_and_or_brochures'] = array(
  'uid' => 1,
  'title' => 'Request Information and/or Brochures',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '245678bc-dcda-4599-aea3-503b1a64e09e',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e4d7ce42-5ec9-4e0d-9172-b1cbe4395886',
  'revision_uid' => 1,
  'field_body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '<p>Thank you for your information request.</p>',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 0,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => NULL,
    'progressbar_label_confirmation' => NULL,
    'preview' => 0,
    'preview_next_button_label' => NULL,
    'preview_prev_button_label' => NULL,
    'preview_title' => NULL,
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'request_information_and_or_brochures',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'linda.conti@unh.edu',
        'subject' => 'default',
        'from_name' => 'PD&T Brochure Request',
        'from_address' => 'request_information_and_or_brochures-email_address',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => TRUE,
        ),
      ),
      1 => array(
        'email' => 'professional.development@unh.edu',
        'subject' => 'default',
        'from_name' => 'PD&T Brochure Request',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'request_information_and_or_brochures-first_name' => array(
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 0,
        'machine_name' => 'request_information_and_or_brochures-first_name',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-last_name' => array(
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 1,
        'machine_name' => 'request_information_and_or_brochures-last_name',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-title' => array(
        'form_key' => 'title',
        'name' => 'Title',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 2,
        'machine_name' => 'request_information_and_or_brochures-title',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-employer' => array(
        'form_key' => 'employer',
        'name' => 'Employer',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => 'request_information_and_or_brochures-employer',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-email_address' => array(
        'form_key' => 'email_address',
        'name' => 'Email Address',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'machine_name' => 'request_information_and_or_brochures-email_address',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-address_1' => array(
        'form_key' => 'address_1',
        'name' => 'Address 1',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 5,
        'machine_name' => 'request_information_and_or_brochures-address_1',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-address_2' => array(
        'form_key' => 'address_2',
        'name' => 'Address 2',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 6,
        'machine_name' => 'request_information_and_or_brochures-address_2',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-city' => array(
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 7,
        'machine_name' => 'request_information_and_or_brochures-city',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-state' => array(
        'form_key' => 'state',
        'name' => 'State',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'AL|Alabama
AK|Alaska
AS|American Samoa
AZ|Arizona
AR|Arkansas
CA|California
CO|Colorado
CT|Connecticut
DE|Delaware
DC|District of Columbia
FL|Florida
GA|Georgia
GU|Guam
HI|Hawaii
ID|Idaho
IL|Illinois
IN|Indiana
IA|Iowa
KS|Kansas
KY|Kentucky
LA|Louisiana
ME|Maine
MH|Marshall Islands
MD|Maryland
MA|Massachusetts
MI|Michigan
MN|Minnesota
MS|Mississippi
MO|Missouri
MT|Montana
NE|Nebraska
NV|Nevada
NH|New Hampshire
NJ|New Jersey
NM|New Mexico
NY|New York
NC|North Carolina
ND|North Dakota
MP|Northern Marianas Islands
OH|Ohio
OK|Oklahoma
OR|Oregon
PW|Palau
PA|Pennsylvania
PR|Puerto Rico
RI|Rhode Island
SC|South Carolina
SD|South Dakota
TN|Tennessee
TX|Texas
UT|Utah
VT|Vermont
VI|Virgin Islands
VA|Virginia
WA|Washington
WV|West Virginia
WI|Wisconsin
WY|Wyoming
',
          'options_source' => 'united_states',
          'multiple' => 0,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'analysis' => TRUE,
          'empty_option' => '',
          'description_above' => FALSE,
        ),
        'required' => 1,
        'weight' => 8,
        'machine_name' => 'request_information_and_or_brochures-state',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-zip' => array(
        'form_key' => 'zip',
        'name' => 'Zip',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 9,
        'machine_name' => 'request_information_and_or_brochures-zip',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-country' => array(
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'AF|Afghanistan
AX|Aland Islands
AL|Albania
DZ|Algeria
AS|American Samoa
AD|Andorra
AO|Angola
AI|Anguilla
AQ|Antarctica
AG|Antigua and Barbuda
AR|Argentina
AM|Armenia
AW|Aruba
AU|Australia
AT|Austria
AZ|Azerbaijan
BS|Bahamas
BH|Bahrain
BD|Bangladesh
BB|Barbados
BY|Belarus
BE|Belgium
BZ|Belize
BJ|Benin
BM|Bermuda
BT|Bhutan
BO|Bolivia
BA|Bosnia and Herzegovina
BW|Botswana
BV|Bouvet Island
BR|Brazil
IO|British Indian Ocean Territory
VG|British Virgin Islands
BN|Brunei
BG|Bulgaria
BF|Burkina Faso
BI|Burundi
KH|Cambodia
CM|Cameroon
CA|Canada
CV|Cape Verde
KY|Cayman Islands
CF|Central African Republic
TD|Chad
CL|Chile
CN|China
CX|Christmas Island
CC|Cocos (Keeling) Islands
CO|Colombia
KM|Comoros
CG|Congo (Brazzaville)
CD|Congo (Kinshasa)
CK|Cook Islands
CR|Costa Rica
HR|Croatia
CU|Cuba
CW|Curaçao
CY|Cyprus
CZ|Czech Republic
DK|Denmark
DJ|Djibouti
DM|Dominica
DO|Dominican Republic
EC|Ecuador
EG|Egypt
SV|El Salvador
GQ|Equatorial Guinea
ER|Eritrea
EE|Estonia
ET|Ethiopia
FK|Falkland Islands
FO|Faroe Islands
FJ|Fiji
FI|Finland
FR|France
GF|French Guiana
PF|French Polynesia
TF|French Southern Territories
GA|Gabon
GM|Gambia
GE|Georgia
DE|Germany
GH|Ghana
GI|Gibraltar
GR|Greece
GL|Greenland
GD|Grenada
GP|Guadeloupe
GU|Guam
GT|Guatemala
GG|Guernsey
GN|Guinea
GW|Guinea-Bissau
GY|Guyana
HT|Haiti
HM|Heard Island and McDonald Islands
HN|Honduras
HK|Hong Kong S.A.R., China
HU|Hungary
IS|Iceland
IN|India
ID|Indonesia
IR|Iran
IQ|Iraq
IE|Ireland
IM|Isle of Man
IL|Israel
IT|Italy
CI|Ivory Coast
JM|Jamaica
JP|Japan
JE|Jersey
JO|Jordan
KZ|Kazakhstan
KE|Kenya
KI|Kiribati
KW|Kuwait
KG|Kyrgyzstan
LA|Laos
LV|Latvia
LB|Lebanon
LS|Lesotho
LR|Liberia
LY|Libya
LI|Liechtenstein
LT|Lithuania
LU|Luxembourg
MO|Macao S.A.R., China
MK|Macedonia
MG|Madagascar
MW|Malawi
MY|Malaysia
MV|Maldives
ML|Mali
MT|Malta
MH|Marshall Islands
MQ|Martinique
MR|Mauritania
MU|Mauritius
YT|Mayotte
MX|Mexico
FM|Micronesia
MD|Moldova
MC|Monaco
MN|Mongolia
ME|Montenegro
MS|Montserrat
MA|Morocco
MZ|Mozambique
MM|Myanmar
NA|Namibia
NR|Nauru
NP|Nepal
NL|Netherlands
AN|Netherlands Antilles
NC|New Caledonia
NZ|New Zealand
NI|Nicaragua
NE|Niger
NG|Nigeria
NU|Niue
NF|Norfolk Island
MP|Northern Mariana Islands
KP|North Korea
NO|Norway
OM|Oman
PK|Pakistan
PW|Palau
PS|Palestinian Territory
PA|Panama
PG|Papua New Guinea
PY|Paraguay
PE|Peru
PH|Philippines
PN|Pitcairn
PL|Poland
PT|Portugal
PR|Puerto Rico
QA|Qatar
RE|Reunion
RO|Romania
RU|Russia
RW|Rwanda
BL|Saint Barthélemy
SH|Saint Helena
KN|Saint Kitts and Nevis
LC|Saint Lucia
MF|Saint Martin (French part)
PM|Saint Pierre and Miquelon
VC|Saint Vincent and the Grenadines
WS|Samoa
SM|San Marino
ST|Sao Tome and Principe
SA|Saudi Arabia
SN|Senegal
RS|Serbia
SC|Seychelles
SL|Sierra Leone
SG|Singapore
SK|Slovakia
SI|Slovenia
SB|Solomon Islands
SO|Somalia
ZA|South Africa
GS|South Georgia and the South Sandwich Islands
KR|South Korea
ES|Spain
LK|Sri Lanka
SD|Sudan
SR|Suriname
SJ|Svalbard and Jan Mayen
SZ|Swaziland
SE|Sweden
CH|Switzerland
SY|Syria
TW|Taiwan
TJ|Tajikistan
TZ|Tanzania
TH|Thailand
TL|Timor-Leste
TG|Togo
TK|Tokelau
TO|Tonga
TT|Trinidad and Tobago
TN|Tunisia
TR|Turkey
TM|Turkmenistan
TC|Turks and Caicos Islands
TV|Tuvalu
VI|U.S. Virgin Islands
UG|Uganda
UA|Ukraine
AE|United Arab Emirates
GB|United Kingdom
US|United States
UM|United States Minor Outlying Islands
UY|Uruguay
UZ|Uzbekistan
VU|Vanuatu
VA|Vatican
VE|Venezuela
VN|Vietnam
WF|Wallis and Futuna
EH|Western Sahara
YE|Yemen
ZM|Zambia
ZW|Zimbabwe
',
          'options_source' => 'countries',
          'multiple' => 0,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'analysis' => TRUE,
          'empty_option' => '',
          'description_above' => FALSE,
        ),
        'required' => 1,
        'weight' => 10,
        'machine_name' => 'request_information_and_or_brochures-country',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-is_this_a_home_or_work_address' => array(
        'form_key' => 'is_this_a_home_or_work_address',
        'name' => 'Is this a home or work address?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Home|Home
Work|Work',
          'multiple' => 0,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
          'empty_option' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'machine_name' => 'request_information_and_or_brochures-is_this_a_home_or_work_address',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-topic_of_interest' => array(
        'form_key' => 'topic_of_interest',
        'name' => 'Topic(s) of Interest',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'key|Name',
          'options_source' => 'vid_4',
          'multiple' => 1,
          'title_display' => 'inline',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'analysis' => TRUE,
          'empty_option' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'machine_name' => 'request_information_and_or_brochures-topic_of_interest',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-indicate_other_information_you_would_like' => array(
        'form_key' => 'indicate_other_information_you_would_like',
        'name' => 'Indicate Other Information You Would Like',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 13,
        'machine_name' => 'request_information_and_or_brochures-indicate_other_information_you_would_like',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-other_information' => array(
        'form_key' => 'other_information',
        'name' => 'I would like:',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'business_catalog|<strong>Business and Industry Seminar Catalog</strong> - describing one-day seminars and certificate programs in management, supervision, HR, computers and other associated topics in Durham, Manchester and Portsmouth
teaching_catalog|<strong>Teaching and School Administration Catalog</strong> describing one-day workshops and short courses for teachers and school administrators in Durham, Manchester and Portsmouth',
          'multiple' => 1,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
          'empty_option' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'machine_name' => 'request_information_and_or_brochures-other_information',
        'page_num' => 1,
        'parent_machine_name' => 'request_information_and_or_brochures-indicate_other_information_you_would_like',
      ),
      'request_information_and_or_brochures-conference_or_spcial_program_in' => array(
        'form_key' => 'conference_or_spcial_program_in',
        'name' => 'Conference or Special Program in:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 12,
        'machine_name' => 'request_information_and_or_brochures-conference_or_spcial_program_in',
        'page_num' => 1,
        'parent_machine_name' => 'request_information_and_or_brochures-indicate_other_information_you_would_like',
      ),
      'request_information_and_or_brochures-other_brochures' => array(
        'form_key' => 'other_brochures',
        'name' => 'Other Brochure(s)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'describing professional workshops, conferences or short-term Certificate programs in:',
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 13,
        'machine_name' => 'request_information_and_or_brochures-other_brochures',
        'page_num' => 1,
        'parent_machine_name' => 'request_information_and_or_brochures-indicate_other_information_you_would_like',
      ),
      'request_information_and_or_brochures-where_did_you_hear_about_this_website_fieldset' => array(
        'form_key' => 'where_did_you_hear_about_this_website_fieldset',
        'name' => 'Where did you hear about this website?',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 14,
        'machine_name' => 'request_information_and_or_brochures-where_did_you_hear_about_this_website_fieldset',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-where_did_you_hear_about_this_website' => array(
        'form_key' => 'where_did_you_hear_about_this_website',
        'name' => 'Where did you hear about this website?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'ad|Ad
article|Article
brochure|Brochure or postcard
search|Internet Search
friend|Friend or Relative
other|Other',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
          'empty_option' => '',
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 15,
        'machine_name' => 'request_information_and_or_brochures-where_did_you_hear_about_this_website',
        'page_num' => 1,
        'parent_machine_name' => 'request_information_and_or_brochures-where_did_you_hear_about_this_website_fieldset',
      ),
      'request_information_and_or_brochures-please_specify' => array(
        'form_key' => 'please_specify',
        'name' => 'Please Specify',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'placeholder' => '',
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 16,
        'machine_name' => 'request_information_and_or_brochures-please_specify',
        'page_num' => 1,
        'parent_machine_name' => 'request_information_and_or_brochures-where_did_you_hear_about_this_website_fieldset',
      ),
      'request_information_and_or_brochures-additional_comments' => array(
        'form_key' => 'additional_comments',
        'name' => 'Additional Comments/Questions',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 16,
        'machine_name' => 'request_information_and_or_brochures-additional_comments',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-course_name' => array(
        'form_key' => 'course_name',
        'name' => 'Course Title (if requesting information for a specific course)',
        'type' => 'textfield',
        'value' => '[current-page:query:course_title]',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'disabled' => 1,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 17,
        'machine_name' => 'request_information_and_or_brochures-course_name',
        'page_num' => 1,
      ),
      'request_information_and_or_brochures-course_code' => array(
        'form_key' => 'course_code',
        'name' => 'Course Code',
        'type' => 'textfield',
        'value' => '[current-page:query:course_code]',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'disabled' => 1,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 18,
        'machine_name' => 'request_information_and_or_brochures-course_code',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'locations' => array(),
  'location' => array(),
  'name' => 'webadm',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'path' => NULL,
);
  $webforms['website_feedback_form'] = array(
  'uid' => 1,
  'title' => 'Website Feedback Form',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1feeb32b-a393-4c8e-9ad7-5dedf345a6af',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '638d5b8a-6ef7-44e0-9974-c69387d7da93',
  'revision_uid' => 1,
  'field_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We welcome your feedback about this website!</p>

<p>If you experience problems viewing items on the website, have suggestions for improving readability, want to express positive feedback, or have other comments you would like to convey regarding Professional Development &amp; Training, please don\'t hesitate to let us know. You can submit your comments using the form below. You can also reach us by phone or email:</p>

<p>Linda Conti<br />
Marketing Director<br />
UNH Professional Development &amp; Training<br />
linda.conti@unh.edu<br />
(603) 431-5674</p>

<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>We welcome your feedback about this website!</p>
<p>If you experience problems viewing items on the website, have suggestions for improving readability, want to express positive feedback, or have other comments you would like to convey regarding Professional Development &amp; Training, please don\'t hesitate to let us know. You can submit your comments using the form below. You can also reach us by phone or email:</p>
<p>Linda Conti<br />
Marketing Director<br />
UNH Professional Development &amp; Training<br /><a href="mailto:linda.conti@unh.edu">linda.conti@unh.edu</a><br />
(603) 431-5674</p>
<p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 0,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => NULL,
    'progressbar_label_confirmation' => NULL,
    'preview' => 0,
    'preview_next_button_label' => NULL,
    'preview_prev_button_label' => NULL,
    'preview_title' => NULL,
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'website_feedback_form',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'linda.conti@unh.edu',
        'subject' => 'default',
        'from_name' => 'PD&T Website Feedback',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'website_feedback_form-comments' => array(
        'form_key' => 'comments',
        'name' => 'Comments',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'website_feedback_form-comments',
        'page_num' => 1,
      ),
      'website_feedback_form-name' => array(
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => TRUE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'website_feedback_form-name',
        'page_num' => 1,
      ),
      'website_feedback_form-email' => array(
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => TRUE,
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'website_feedback_form-email',
        'page_num' => 1,
      ),
      'website_feedback_form-phone' => array(
        'form_key' => 'phone',
        'name' => 'Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'description_above' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => 'website_feedback_form-phone',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'locations' => array(),
  'location' => array(),
  'name' => 'webadm',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
);
  $webforms['youth_program_pre_registration_form'] = array(
  'uid' => 1,
  'title' => 'Youth Program Pre-Registration Form',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '542532a6-75bb-415a-9d17-50a7109a2f1c',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '68484e90-a762-4cda-9413-b154d100de16',
  'revision_uid' => 1,
  'field_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Please submit the information requested and a staff member will reply shortly.</p>

<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Please submit the information requested and a staff member will reply shortly.</p>
<p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'youth_program_pre_registration_form',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'youth_program_pre_registration_form-first_name' => array(
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'youth_program_pre_registration_form-first_name',
        'page_num' => 1,
      ),
      'youth_program_pre_registration_form-last_name' => array(
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'youth_program_pre_registration_form-last_name',
        'page_num' => 1,
      ),
      'youth_program_pre_registration_form-e_mail' => array(
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'youth_program_pre_registration_form-e_mail',
        'page_num' => 1,
      ),
      'youth_program_pre_registration_form-request_or_comment' => array(
        'form_key' => 'request_or_comment',
        'name' => 'Request or comment',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'machine_name' => 'youth_program_pre_registration_form-request_or_comment',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'locations' => array(),
  'location' => array(),
  'name' => 'webadm',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
);
return $webforms;
}
