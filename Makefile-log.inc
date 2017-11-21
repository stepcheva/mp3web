##  ------------------------------------------------------------------------  ##
##                                Build Project                               ##
##  ------------------------------------------------------------------------  ##

## .EXPORT_ALL_VARIABLES:

##  ------------------------------------------------------------------------  ##

.PHONY: state;

state:
	@ echo "\n";
	@ echo "ENVIRONMENT VARS:";
	@ echo "\t DT \t\t = \t ${DT}";
	@ echo "\t APP_NAME \t = \t ${APP_NAME}";
	@ echo "\t REPO_HOST \t = \t ${REPO_HOST}";
	@ echo "\t REPO_USER \t = \t ${REPO_USER}";
	@ echo "\t REPO_URL \t = \t ${REPO_URL}";
	@ echo "\t GIT_COMMIT \t = \t ${GIT_COMMIT}";
	@ echo "\t APP_DEBUG \t = \t ${APP_DEBUG}";
	@ echo "\t APP_REPO \t = \t ${APP_REPO}";
	@ echo "\t APP_BRANCH \t = \t ${APP_BRANCH}";
	@ echo "\t APP_ENV \t = \t ${APP_ENV}";
	@ echo "\t APP_SRC \t = \t ${APP_SRC}";
	@ echo "\t APP_BUILD \t = \t ${APP_BUILD}";
	@ echo "\t APP_DIST \t = \t ${APP_DIST}";
	@ echo "\t APP_DIRS \t = \t ${APP_DIRS}";
	@ echo "\t GIT_REPO \t = \t ${GIT_REPO}";
	@ echo "\t WD \t\t = \t ${WD}";
	@ echo "\t DIR_ENGINE \t = \t ${DIR_ENGINE}";
	@ echo "\t DIR_SRC \t = \t ${DIR_SRC}";
	@ echo "\t DIR_BUILD \t = \t ${DIR_BUILD}";
	@ echo "\t DIR_DIST \t = \t ${DIR_DIST}";
	@ echo "\t DIR_WEB \t = \t ${DIR_WEB}";
	@ echo "\n";

##  ------------------------------------------------------------------------  ##