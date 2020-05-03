<?php

/**
 * @file
 * Enables modules and site configuration for a Sereno Website site installation.
 */
 
use Symfony\Component\Yaml\Yaml;
use Drupal\Core\Form\FormStateInterface;
use Drupal\language\Entity\ConfigurableLanguage;

function sereno_website_starter_kit_form_install_configure_form_alter(&$form, FormStateInterface $form_state) {

  // Account information defaults
  $form['admin_account']['account']['name']['#default_value'] = 'sereno-admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'rod@sereno.co.uk';

  // Date/time settings
  $form['regional_settings']['site_default_country']['#default_value'] = 'GB';
  $form['regional_settings']['date_default_timezone']['#default_value'] = 'Europe/London';
  $form['admin_account']['account']['mail']['#default_value'] = 'rod@sereno.co.uk';
}







