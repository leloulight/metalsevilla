<?php
/**
 * @file
 * cronica.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cronica_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cronicas_de_conciertos';
  $view->description = 'Listados y bloques de crónicas de conciertos';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Crónicas de conciertos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anuncios';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Campo: Fotos */
  $handler->display->display_options['fields']['field_shared_rep_image']['id'] = 'field_shared_rep_image';
  $handler->display->display_options['fields']['field_shared_rep_image']['table'] = 'field_data_field_shared_rep_image';
  $handler->display->display_options['fields']['field_shared_rep_image']['field'] = 'field_shared_rep_image';
  $handler->display->display_options['fields']['field_shared_rep_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_rep_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_rep_image']['settings'] = array(
    'image_style' => 'img_logo_220',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_rep_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_image']['multi_type'] = 'ul';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Campo: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_shared_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="guionnoticias"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cronica' => 'cronica',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Crónicas de conciertos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Foto */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => 'img_logo_220',
    'image_link' => 'content',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="list-submitted">ENVIADO POR [name] EL [created]</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Campo: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['alter']['max_length'] = '450';
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="guionnoticias"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cronica' => 'cronica',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Campo: Estilo (field_shared_style) */
  $handler->display->display_options['filters']['field_shared_style_tid']['id'] = 'field_shared_style_tid';
  $handler->display->display_options['filters']['field_shared_style_tid']['table'] = 'field_data_field_shared_style';
  $handler->display->display_options['filters']['field_shared_style_tid']['field'] = 'field_shared_style_tid';
  $handler->display->display_options['filters']['field_shared_style_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_style_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['operator_id'] = 'field_shared_style_tid_op';
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['label'] = 'Estilo';
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['operator'] = 'field_shared_style_tid_op';
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['identifier'] = 'field_shared_style_tid';
  $handler->display->display_options['filters']['field_shared_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_style_tid']['vocabulary'] = 'estilo';
  $handler->display->display_options['filters']['field_shared_style_tid']['error_message'] = FALSE;
  /* Filter criterion: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator_id'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['label'] = 'Grupo';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['identifier'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Crónicas de conciertos de heavy metal o rock | www.metalsevilla.es',
    ),
    'description' => array(
      'value' => 'Aquí encontrarás las últimas crónicas de conciertos a los que hayamos asistido. ¿Quieres publicar tú una? ¡Regístrate, es muy fácil y rápido! ',
    ),
  );
  $handler->display->display_options['path'] = 'actualidad/cronicas';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cronica' => 'cronica',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'actualidad/cronicas/feed';
  $translatables['cronicas_de_conciertos'] = array(
    t('Master'),
    t('Anuncios'),
    t('more'),
    t('Filtrar'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('author'),
    t('<span class="guionnoticias"></span>'),
    t('Título'),
    t('Page'),
    t('Crónicas de conciertos'),
    t('<div class="list-submitted">ENVIADO POR [name] EL [created]</div>'),
    t('Estilo'),
    t('Grupo'),
    t('Feed'),
  );
  $export['cronicas_de_conciertos'] = $view;

  return $export;
}
