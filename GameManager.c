#include "GameManager.h"
#include <stdlib.h>

/****************************************************************************************************
Description : Fonction sate Game State
Input :
Output :
Note ://
******************************************************************************************************/

void seteGameState(tMananger *gameManager){

    if(gameManager->keyEvent.kGameEvent==quit){
        gameManager->eState=quitGame;
    }



}

/****************************************************************************************************
Description : Fonction init du manager
Input :
Output :
Note ://
******************************************************************************************************/
void initManager(tMananger *gameManager){

    initGameState(&gameManager->eState);
    initKeyGameEvent(&gameManager->keyEvent);


}


/****************************************************************************************************
Description : Fonction de Maj de instances manipulees par le gameManager
Input :
Output :
Note ://
******************************************************************************************************/


void update(){

    seteGameState(&gameManager);
   //TODO Test updateSprite()


}


/****************************************************************************************************
Description : Fonction d'execution de la methode exit() si condition remplie
Input :
Output :
Note ://
******************************************************************************************************/

void stateQuitGame(){

   if(gameManager.eState==quitGame){
        exit(EXIT_SUCCESS);
    }

}


void handleEvent(tMananger *gameManager){

    InputEvent(&gameManager->event,&gameManager->keyEvent);

}
