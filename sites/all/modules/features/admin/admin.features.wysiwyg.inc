<?php
/**
 * @file
 * admin.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function admin_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtred_html
  $profiles['filtred_html'] = array(
    'format' => 'filtred_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'image' => 1,
          'formatselect' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'advimage' => array(
          'advimage' => 1,
        ),
        'advlink' => array(
          'advlink' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
        ),
        'searchreplace' => array(
          'search' => 1,
          'replace' => 1,
        ),
        'advlist' => array(
          'advlist' => 1,
        ),
        'wordcount' => array(
          'wordcount' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'video_filter' => array(
          'video_filter' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'h3,h4,h5,h6,p',
      'css_setting' => 'self',
      'css_path' => '/sites/all/themes/gui/esadhar/css/wysiwyg.css',
      'css_classes' => '',
      'buttonorder' => 'fullscreen,separator,bold,italic,underline,separator,formatselect,separator,bullist,numlist,advlist,separator,link,advlink,linkit,unlink,separator,image,advimage,video_filter,separator,cut,copy,paste,pastetext,search,replace,wordcount,separator,undo,redo,separator,break,imce,strikethrough',
    ),
  );

  return $profiles;
}
