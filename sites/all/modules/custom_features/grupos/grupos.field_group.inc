<?php
/**
 * @file
 * grupos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function grupos_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|grupo_artista|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grupo_artista';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacto',
    'weight' => '7',
    'children' => array(
      0 => 'field_shared_phone',
      1 => 'field_shared_web',
      2 => 'field_shared_twitter',
      3 => 'field_shared_facebook',
      4 => 'field_shared_googleplus',
      5 => 'field_shared_flickr',
      6 => 'field_shared_youtube',
      7 => 'field_shared_myspace',
      8 => 'field_shared_email',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Contacto',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_contact|node|grupo_artista|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_maindata|node|grupo_artista|form';
  $field_group->group_name = 'group_shared_maindata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grupo_artista';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos',
    'weight' => '1',
    'children' => array(
      0 => 'field_bio',
      1 => 'field_shared_image',
      2 => 'field_shared_logo',
      3 => 'field_shared_phone',
      4 => 'field_shared_web',
      5 => 'field_shared_twitter',
      6 => 'field_shared_facebook',
      7 => 'field_shared_googleplus',
      8 => 'field_shared_youtube',
      9 => 'field_shared_myspace',
      10 => 'field_activity',
      11 => 'field_shared_email',
      12 => 'field_user_member',
      13 => 'field_member',
      14 => 'field_shared_spotify',
      15 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shared_maindata|node|grupo_artista|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_settings|node|grupo_artista|form';
  $field_group->group_name = 'group_shared_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grupo_artista';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorías',
    'weight' => '0',
    'children' => array(
      0 => 'field_shared_style',
      1 => 'field_shared_state',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shared_settings|node|grupo_artista|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_specifications|node|grupo_artista|default';
  $field_group->group_name = 'group_specifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grupo_artista';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Especificaciones del grupo',
    'weight' => '2',
    'children' => array(
      0 => 'field_shared_style',
      1 => 'field_shared_state',
      2 => 'field_activity',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_specifications|node|grupo_artista|default'] = $field_group;

  return $export;
}
