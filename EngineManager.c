#include "EngineManager.h"

/****************************************************************************************************
Description : Fonction init Engine Manager
Input :
Output :
Note ://
******************************************************************************************************/
void engineInitManager(tEngineManager *engine){

    init_SdlManager(&engine->sdlManager);
    clearScreen(&engine->sdlManager);

    ViewPortRect.w=VIEWPORTWIDTH;
    ViewPortRect.h=VIEWPORTHEIGHT;
    ViewPortRect.x=(WINDOWW/2)-(VIEWPORTWIDTH/2);
    ViewPortRect.y=(WINDOWH/2)-(VIEWPORTHEIGHT/2);

}


/****************************************************************************************************
Description : Fonction Engine build sprite
Input :
Output :
Note ://
******************************************************************************************************/

void engineBuildSprite(tEngineManager *engine, char *path){

     loadSprite(&engine->sprite,path);
     createSprite(&engine->sprite,&engine->sdlManager,0,0,144,124);
}

/****************************************************************************************************
Description : Fonction build viewport
Input :
Output :
Note ://
******************************************************************************************************/
void engineBuildViewport(tEngineManager *engine){

    setViewport(&engine->viewport,ViewPortRect,0);

}

/****************************************************************************************************
Description : Fonction sprite to viewport
Input :
Output :
Note ://
******************************************************************************************************/
void engineSpriteToViewPort(tEngineManager *engine){

    setTargetViewport(&engine->sprite,&engine->sdlManager,&engine->viewport);

}

/****************************************************************************************************
Description : Fonction display
Input :
Output :
Note ://
******************************************************************************************************/
void engineDisplay(tEngineManager *engine){

    display(&engine->sdlManager);
}


/****************************************************************************************************
Description : Fonction destroy instance sdl
Input :
Output :
Note ://
******************************************************************************************************/
void engineDestroySdlManager(tEngineManager *engine){

 destroy_SdlManager(&engine->sdlManager);

}

/****************************************************************************************************
Description : Fonction destroy instance sprite
Input :
Output :
Note ://
******************************************************************************************************/
void engineDestroySdlSprite(tEngineManager *engine){

 destroy_Sprite(&engine->sprite);

}


/****************************************************************************************************
Description : Fonction engine stop
Input :
Output :
Note ://
******************************************************************************************************/
void engineStop(){
     //appel de la fonction quitSDL
    quitSdl();
}
