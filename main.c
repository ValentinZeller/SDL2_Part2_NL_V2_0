
#include<stdio.h>
#include "EngineManager.h"
#include "GameManager.h"



//Tilset 384*256
//w=>12 tiles
//h=>8 tiles



int main(int argc, char *argv[]){



    //SDL_Sprite sprite2;
    int nX=0;
    int nFrames=1;


    tEngineManager engine;

    //appel fonction init Engine
    engineInitManager(&engine);

    //construction du background
    char path[]="./Assets/Platformer_tilset/background/buildings-bg.png";
    engineBuildSprite(&engine, path);


    engineBuildViewport(&engine);

    engineSpriteToViewPort(&engine);

    //Création d'une texture qui sera l'emplacement du rendu
    //dans ce cas les éléments à afficher ne peuvent pas dépasser la taille de r2

    initManager(&gameManager);



    while(gameManager.eState==play){

        handleEvent(&gameManager);


        //TODO GameManagerUpdate + Engine update
        update(&nX,&nFrames);

        //SDL_Delay(200);
        engineDisplay(&engine);

    }

     //appel de la fonction destruction des attributs SDL_Manager
     engineDestroySdlManager(&engine);
    //appel de la fonction destruction sprite
     engineDestroySdlSprite(&engine);

    //Stop engine use
     engineStop();

    //Exit_Success
    stateQuitGame();







return 0;
}






