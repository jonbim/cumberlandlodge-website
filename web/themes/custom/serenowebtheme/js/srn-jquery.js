/**
 * @file
 * All the custom jQuery from Sereno for this theme.
 */

(function ($, Drupal, drupalSettings) {

  'use strict';

  /**
   * attaches striping to the events listing.
	 */
/*
  Drupal.behaviors.jsRolloverTile = {

    attach: function (context, settings) {

			$('.tile').on("mouseover", function(){
				$(this).append('<div class="srn-overlay"></div>')
			})
			$('.tile').on("mouseout", function(){
				$('.srn-overlay', this).remove();

			})
    }
  }
*/


  /**
   * attaches striping to the events listing.
   */
/*  Drupal.behaviors.jsColourStripeEvents = {

    attach: function (context, settings) {

			$(".event-list li:even").addClass('even');
			$(".event-list li:odd").addClass('odd');

    }
  };

  /**
   * attaches striping to the alerts listing.
   */
/*  Drupal.behaviors.jsColourStripeAlerts = {

    attach: function (context, settings) {

			$(".alert-list li:even").addClass('even');
			$(".alert-list li:odd").addClass('odd');
    }
  }; */

   /**
   * changes the first breadcrumb to a glyphicon.
   */
  Drupal.behaviors.jsPutHouseIconInBreadcrumb = {
    attach: function (context, settings) {

			$("ol.breadcrumb li:nth-child(1)")
				.replaceWith('<!-- injected via srn-jquery.js --><li><a href="/"><span class="glyphicon glyphicon-home" aria-hidden="true"></span></a></li><!-- /injected via srn-jquery.js -->');

    }
  };

})(jQuery, Drupal, drupalSettings);
