<?php


use Drupal\views\ViewExecutable;
use Drupal\views\Plugin\views\query\QueryPluginBase;

/**
 * Implements hook_views_query_alter().
 * Rod Tatham, Sereno :: 2020-03-27 - fix ye sort order of the view, so that if
 * you choose future or past events, the sort order matches the criteria
 *
 */
function srn_flotsam_and_jetsam_views_query_alter(ViewExecutable $view, QueryPluginBase $query) {

  // which view again?

  //  var_dump('gorky');
  //  kint($view->id());
  //  kint($view->name);

  if ($view->id() == 'what_s_on') {
//    $form_choice = $view->exposed_raw_input['field_date_value'];
    //
    //      if($form_choice=="2") { // user has chosen to look at past events
    //        $view->query->orderby[0]['field']='field_date_value';
    //        $view->query->orderby[0]['direction']='DESC';
    //      }
    //      else { // either no sort, or user has chosen future events
    //        $view->query->orderby[0]['field']='field_date_value';
    //        $view->query->orderby[0]['direction']='ASC';
    //      }

    #  kint($view);

    //$dog =    $view->getExposedInput();
    if(!is_null($view->exposed_raw_input['field_date_range_value'])) {
      $form_choice = $view->exposed_raw_input['field_date_range_value'];
    }
    else {
      $form_choice = '';
    }

    if($form_choice=="1") { // user has chosen to look at past events
      $query->addOrderBy(
        NULL,
        NULL,
        'desc',
        'node__field_date_range.field_date_range_value'
      );
    }
    elseif($form_choice=="2") { // the default - user has chosen to look at future events
      $query->addOrderBy(
        NULL,
        NULL,
        'asc',
        'node__field_date_range.field_date_range_value'
      );
    }
    else { // either no sort, or user has chosen all events
      $query->addOrderBy(
        NULL,
        NULL,
        'desc',
        'node__field_date_range.field_date_range_value'
      );
    }
  }
}