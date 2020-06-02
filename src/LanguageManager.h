/* Language manager, a library for the ESP8266
 *
 * @author J DAPOT
 * @version 0.0.1
 * @license MIT
 */

#ifndef _LM_H_
#define _LM_H_

#include "map"

class LanguageManager{
    public:

    std::map<int, std::map<int,const char*>>* Dictionary;
    
    /* current Language
    */
    int CurrentLanguage;

    /* return message from msg id in current language */
    const char* Get(int msgId);

    /* return message for msg id in given language */
    const char* Get(int Lng,int msgId);    
};

#endif