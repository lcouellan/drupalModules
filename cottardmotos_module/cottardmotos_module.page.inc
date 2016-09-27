<?php

function cottardmotos_module_accueil() {
  $content = (object) array();
  $content->cottardbike = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","3")))));
  $content->cottardmotos = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","4")))));
  $content->cottardoccasions = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","5")))));
  $content->maxxes = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","6")))));
  $content->actualites = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("views","actualites-block")))));
  $content->galerie_photos = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","7")))));
  $content->recherche_rapide = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","8")))));
  $content->nos_selections = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","9")))));
  $content->services = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","10")))));
  $content->reprises = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","11")))));
  $content->preparations = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","12")))));
  $content->pub = drupal_render(_block_get_renderable_array(_block_render_blocks(array(block_load("block","3")))));
  $render = array(
		  "#theme"=>"page_accueil",
		  "#element"=>$content,
		  );
  return $render;
}
?>