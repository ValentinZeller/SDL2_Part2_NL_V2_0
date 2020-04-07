#include "SDl_Manager.h"
#include "SDL_Sprite.h"

/****************************************************************************************************
Description : Fonction d'affichage du sprite dans le rendu à l'écran
Input : SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,
                    int nScale
Output : SDL_Manager->Renderer
Note ://
******************************************************************************************************/

void displaySprite(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,
                    int nScale){

    SDL_Rect srcRect;
    SDL_Rect destRect;


    if(pSprite->ptexture){

       //Rect Source
       srcRect.x=nSrcRectX;
       srcRect.y=nSrcRectY;
       if(nNbTotalframe>0){
        srcRect.w=pSprite->psurface->w/nNbTotalframe;
        srcRect.h=pSprite->psurface->h;
       }


       //Rect Dest
       destRect.x=nDestRectX;
       destRect.y=nDestRectY;

       if(nScale>0){
        destRect.w=srcRect.w*nScale;
        destRect.h=srcRect.h*nScale;

       }else{

        destRect.w=srcRect.w;
        destRect.h=srcRect.h;
       }



        //TODO update renderer
       SDL_RenderClear(pSdlManager->pRenderer);
       SDL_RenderCopy(pSdlManager->pRenderer, pSprite->ptexture, &srcRect, &destRect);



       SDL_RenderPresent(pSdlManager->pRenderer);


    }




}
