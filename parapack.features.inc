<?php
/**
 * @file
 * parapack.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function parapack_paragraphs_info() {
  $items = array(
    'zp_attachments' => array(
      'name' => 'Документы',
      'bundle' => 'zp_attachments',
      'locked' => '1',
    ),
    'zp_images' => array(
      'name' => 'Картинки',
      'bundle' => 'zp_images',
      'locked' => '1',
    ),
    'zp_linked_image' => array(
      'name' => 'Linked Image',
      'bundle' => 'zp_linked_image',
      'locked' => '1',
    ),
    'zp_links' => array(
      'name' => 'Ссылки',
      'bundle' => 'zp_links',
      'locked' => '1',
    ),
    'zp_text' => array(
      'name' => 'Текст',
      'bundle' => 'zp_text',
      'locked' => '1',
    ),
    'zp_video' => array(
      'name' => 'Video',
      'bundle' => 'zp_video',
      'locked' => '1',
    ),
  );
  return $items;
}
