#include "SDl_Manager.h"
#include "SDL_Sprite.h"

/****************************************************************************************************
Description : Fonction d'affichage du sprite dans le rendu à l'écran
Input : SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,
                    int nScale
Output : SDL_Manager->Renderer
Note ://
******************************************************************************************************/




void clearScreen(SDL_Manager *pSdlManager){



       SDL_SetRenderDrawColor(pSdlManager->pRenderer,70,187,217,255);
       SDL_RenderClear(pSdlManager->pRenderer);



}




void display(SDL_Manager *pSdlManager){


    SDL_RenderPresent(pSdlManager->pRenderer);
    clearScreen(pSdlManager);

}
