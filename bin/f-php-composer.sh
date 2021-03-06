#!/usr/bin/env bash
##  ------------------------------------------------------------------------  ##
##              f-php-composer.sh: PHP COMPOSER setup and update              ##
##  ------------------------------------------------------------------------  ##
##  Provides:
##    composer_setup()
##    composer_selfupdate()
##    composer_check()
##  ------------------------------------------------------------------------  ##

function composer_setup {
  SIGNATURE_EXPECTED=$(wget http://composer.github.io/installer.sig -O - -q)
  php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');"
  SIGNATURE_ACTUAL=$(php -r "echo hash_file('SHA384', 'composer-setup.php');")

  if [ "$SIGNATURE_EXPECTED" = "$SIGNATURE_ACTUAL" ]
  then
    info "[OK] Correct installer signature [$SIGNATURE_ACTUAL]"
    sudo php composer-setup.php --install-dir=/usr/local/bin --filename=composer
    RESULT=$?
    mv composer-setup.php composer-setup-DONE-$(date +"%s").php
    warn "FINISHED COMPOSER INSTALL"
    # exit $RESULT
  else
    >&2 fatal '[ERROR] Invalid installer signature'
    mv composer-setup.php composer-setup-INVALID-$(date +"%s").php
    exit 1
  fi
}


function composer_selfupdate {
  composer -v selfupdate;
  warn "FINISHED COMPOSER UPDATE to $(composer -V)";
}


function composer_check {
  _composer=`which composer 2>&1`;
  if [ $? -ne 0 ]; then
    error "Composer not found!";
    warn "Starting composer setup from [http://getcomposer.org/] ... ";
    composer_setup
    composer_selfupdate
    warn "FINISHED composer setup. Please run $0 again.";
    # exit 1
  fi
  warn "[OK] Installed PHP-Composer: $(composer -V)";
}

##  --------------------  EOF: f-php-composer.sh  --------------------------  ##
