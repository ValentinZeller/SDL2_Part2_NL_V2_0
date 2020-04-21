#include "GameManager.h"
#include <stdlib.h>


/****************************************************************************************************
Description : Fonction init GameState
Input :
Output :
Note ://
******************************************************************************************************/
void initGameState(){

    eState=play;
    initKeyGameEvent();

}
/****************************************************************************************************
Description : Fonction sate Game State
Input :
Output :
Note ://
******************************************************************************************************/

void setGameState(eKeyGameEvent kGameEvent){

    if(kGameEvent==quit){
        eState=quitGame;
    }


}

/****************************************************************************************************
Description : Fonction de Maj de instances manipuler par le gameManager
Input :
Output :
Note ://
******************************************************************************************************/
void update(void *a,int *nFrames){



     int *ad=a;
     if(*nFrames%2){
        *ad=50;
     }else{

        *ad=0;
     }
     (*nFrames)++;

    setGameState(kGameEvent);
    if(eState==quitGame){
        exit(EXIT_SUCCESS);
    }


}

