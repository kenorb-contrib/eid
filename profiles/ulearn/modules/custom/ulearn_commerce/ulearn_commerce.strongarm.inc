<?php
/**
 * @file
 * ulearn_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ulearn_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_product_display';
  $strongarm->value = 0;
  $export['comment_anonymous_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_product_display';
  $strongarm->value = 0;
  $export['comment_default_mode_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_product_display';
  $strongarm->value = '50';
  $export['comment_default_per_page_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_product_display';
  $strongarm->value = 0;
  $export['comment_form_location_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_product_display';
  $strongarm->value = '0';
  $export['comment_preview_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_product_display';
  $strongarm->value = '1';
  $export['comment_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_product_display';
  $strongarm->value = 0;
  $export['comment_subject_field_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_apd_product_display';
  $strongarm->value = array(
    'accommodation' => 'accommodation_display',
    'course' => 'course_display',
    'materials' => 'product_display',
    'product' => 'product_display',
    'special_course' => 'special_course',
    'transport' => 'product_display',
  );
  $export['commerce_apd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_apd_show_product_display_form';
  $strongarm->value = '1';
  $export['commerce_apd_show_product_display_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_currency_settings';
  $strongarm->value = array(
    'EUR' => array(
      'symbol_placement' => 'before',
      'thousands_separator' => ',',
      'decimal_separator' => '.',
      'conversion_rate' => '1.3584',
    ),
  );
  $export['commerce_currency_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_default_currency';
  $strongarm->value = 'EUR';
  $export['commerce_default_currency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_enabled_currencies';
  $strongarm->value = array(
    'EUR' => 'EUR',
    'AED' => 0,
    'AFN' => 0,
    'ANG' => 0,
    'AOA' => 0,
    'ARM' => 0,
    'ARS' => 0,
    'AUD' => 0,
    'AWG' => 0,
    'AZN' => 0,
    'BAM' => 0,
    'BBD' => 0,
    'BDT' => 0,
    'BGN' => 0,
    'BHD' => 0,
    'BIF' => 0,
    'BMD' => 0,
    'BND' => 0,
    'BOB' => 0,
    'BRL' => 0,
    'BSD' => 0,
    'BTN' => 0,
    'BWP' => 0,
    'BYR' => 0,
    'BZD' => 0,
    'CAD' => 0,
    'CDF' => 0,
    'CHF' => 0,
    'CLP' => 0,
    'CNY' => 0,
    'COP' => 0,
    'CRC' => 0,
    'CUC' => 0,
    'CUP' => 0,
    'CVE' => 0,
    'CZK' => 0,
    'DJF' => 0,
    'DKK' => 0,
    'DOP' => 0,
    'DZD' => 0,
    'EEK' => 0,
    'EGP' => 0,
    'ERN' => 0,
    'ETB' => 0,
    'FJD' => 0,
    'FKP' => 0,
    'GBP' => 0,
    'GHS' => 0,
    'GIP' => 0,
    'GMD' => 0,
    'GNF' => 0,
    'GTQ' => 0,
    'GYD' => 0,
    'HKD' => 0,
    'HNL' => 0,
    'HRK' => 0,
    'HTG' => 0,
    'HUF' => 0,
    'IDR' => 0,
    'ILS' => 0,
    'INR' => 0,
    'IRR' => 0,
    'ISK' => 0,
    'JMD' => 0,
    'JOD' => 0,
    'JPY' => 0,
    'KES' => 0,
    'KGS' => 0,
    'KMF' => 0,
    'KRW' => 0,
    'KWD' => 0,
    'KYD' => 0,
    'KZT' => 0,
    'LAK' => 0,
    'LBP' => 0,
    'LKR' => 0,
    'LRD' => 0,
    'LSL' => 0,
    'LTL' => 0,
    'LVL' => 0,
    'LYD' => 0,
    'MAD' => 0,
    'MDL' => 0,
    'MMK' => 0,
    'MNT' => 0,
    'MOP' => 0,
    'MRO' => 0,
    'MTP' => 0,
    'MUR' => 0,
    'MXN' => 0,
    'MYR' => 0,
    'MZN' => 0,
    'NAD' => 0,
    'NGN' => 0,
    'NIO' => 0,
    'NOK' => 0,
    'NPR' => 0,
    'NZD' => 0,
    'PAB' => 0,
    'PEN' => 0,
    'PGK' => 0,
    'PHP' => 0,
    'PKR' => 0,
    'PLN' => 0,
    'PYG' => 0,
    'QAR' => 0,
    'RHD' => 0,
    'RON' => 0,
    'RSD' => 0,
    'RUB' => 0,
    'SAR' => 0,
    'SBD' => 0,
    'SCR' => 0,
    'SDD' => 0,
    'SEK' => 0,
    'SGD' => 0,
    'SHP' => 0,
    'SLL' => 0,
    'SOS' => 0,
    'SRD' => 0,
    'SRG' => 0,
    'STD' => 0,
    'SYP' => 0,
    'SZL' => 0,
    'THB' => 0,
    'TND' => 0,
    'TOP' => 0,
    'TRY' => 0,
    'TTD' => 0,
    'TWD' => 0,
    'TZS' => 0,
    'UAH' => 0,
    'UGX' => 0,
    'USD' => 0,
    'UYU' => 0,
    'VEF' => 0,
    'VND' => 0,
    'VUV' => 0,
    'WST' => 0,
    'XAF' => 0,
    'XCD' => 0,
    'XOF' => 0,
    'XPF' => 0,
    'YER' => 0,
    'ZAR' => 0,
    'ZMK' => 0,
  );
  $export['commerce_enabled_currencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_multicurrency_conversion_settings';
  $strongarm->value = array(
    'USD' => array(
      'sync' => 0,
      'rates' => array(
        'EUR' => array(
          'sync' => 0,
          'rate' => '0.73616018845701',
        ),
      ),
    ),
    'EUR' => array(
      'rates' => array(
        'USD' => array(
          'rate' => '1.3584',
        ),
      ),
    ),
  );
  $export['commerce_multicurrency_conversion_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_multicurrency_sync_provider';
  $strongarm->value = 'ecb';
  $export['commerce_multicurrency_sync_provider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_multicurrency_use_cross_conversion';
  $strongarm->value = 1;
  $export['commerce_multicurrency_use_cross_conversion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'language' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_product_display';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_product_display';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_display';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_product_display';
  $strongarm->value = '0';
  $export['node_preview_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_product_display';
  $strongarm->value = 0;
  $export['node_submitted_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_product_display_pattern';
  $strongarm->value = 'product/[node:title]';
  $export['pathauto_node_product_display_pattern'] = $strongarm;

  return $export;
}
