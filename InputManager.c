#include "InputManager.h"
#include <stdio.h>

/****************************************************************************************************
Description : Fonction init input key evenements
Input :
Output :
Note ://
******************************************************************************************************/

 void initKeyGameEvent(){

    kGameEvent=start;


}
/****************************************************************************************************
Description : Fonction set input key evenements
Input :
Output :
Note ://
******************************************************************************************************/
void setGameEvent(){

    kGameEvent=quit;


}

/****************************************************************************************************
Description : Fonction de recuperation des inputs event
Input :
Output :
Note ://
******************************************************************************************************/
void handleEvent(tEventType *event){

    if(SDL_PollEvent(&event->event)){

            switch(event->event.type){
            case SDL_QUIT :setGameEvent();break;
            default:break;


            }



    }

}
