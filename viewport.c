
#include "viewport.h"


/****************************************************************************************************
Description : Fonction init SetViewPort
Input :
Output :
Note ://
******************************************************************************************************/
void setViewport(tViewPort *viewPort, SDL_Rect rect, int numLayer){


        viewPort->RectViewPort=rect;
        viewPort->nLayer=numLayer;



}

/****************************************************************************************************
Description : Fonction setTargetViewport
Input :
Output :
Note ://
******************************************************************************************************/

void setTargetViewport(SDL_Sprite *pSprite,SDL_Manager *pSdlManager, tViewPort* viewport){

    if( pSprite && pSdlManager && viewport){


        SDL_RenderCopy(pSdlManager->pRenderer, pSprite->ptexture, &pSprite->SpriteSize, &viewport->RectViewPort);


    }



}
