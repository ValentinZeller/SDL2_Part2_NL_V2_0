#include "InputManager.h"
#include <stdio.h>
#include <stdlib.h>

/****************************************************************************************************
Description : Fonction init input key evenements
Input :
Output :
Note ://
******************************************************************************************************/

 void initKeyGameEvent(tKeyEventType *keyEvent){


    keyEvent->kGameEvent=start;


}
/****************************************************************************************************
Description : Fonction set input key evenements
Input :
Output :
Note ://
******************************************************************************************************/
void setQuitEvent(tKeyEventType *keyEvent){

    keyEvent->kGameEvent=quit;


}

/****************************************************************************************************
Description : Fonction de recuperation des inputs et evenements
Input :
Output :
Note ://
******************************************************************************************************/
void InputEvent(tEventType *event,tKeyEventType *keyEvent){

    if(SDL_PollEvent(&event->event)){

            switch(event->event.type){
            case SDL_QUIT :setQuitEvent(keyEvent);break;
            default:break;


            }



    }

}
