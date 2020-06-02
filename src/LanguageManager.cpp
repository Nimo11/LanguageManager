/* Language manager, a library for the ESP8266
 * 
 * @author J DAPOT
 * @version 0.0.1
 * @license MIT
 */

#include "LanguageManager.h"


/* return message from msg id in current language */
const char * LanguageManager::Get(int msgId) {
    
    return (*Dictionary)[CurrentLanguage][msgId];
}

/* return message for msg id in given language */
const char * LanguageManager::Get(int Lng, int msgId) {
    return (*Dictionary)[CurrentLanguage][msgId];
}

