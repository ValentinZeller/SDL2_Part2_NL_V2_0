
#include "SDL_Sprite.h"
#include <stdio.h>

/****************************************************************************************************
Description : Fonction de chargement du sprite(image) en memoire
Input : SDL_Sprite,char
Output : SDL_Sprite
Note ://
******************************************************************************************************/
void loadSprite(SDL_Sprite *pSprite,char *cpath){

    pSprite->psurface=IMG_Load(cpath);

    if(!pSprite->psurface){

        fprintf(stdout,"IMG not load : %s\n",IMG_GetError());
    }


}

/****************************************************************************************************
Description : Fonction de creation d'une texture a partir du sprite (Seul les textures sont manipulees)
Input : SDL_Sprite,SDL_Manager
Output : SDL_Sprite
Note ://
******************************************************************************************************/
void createSprite(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,
                    int w,int h){


    if(pSprite->psurface){
        pSprite->ptexture=SDL_CreateTextureFromSurface(pSdlManager->pRenderer,pSprite->psurface);
        SDL_FreeSurface(pSprite->psurface);
    }


    pSprite->SpriteSize.x=nSrcRectX;
    pSprite->SpriteSize.y=nSrcRectY;
    pSprite->SpriteSize.w=w;
    pSprite->SpriteSize.h=h;

}

/*void createTexture2(SDL_Sprite *pSprite,SDL_Manager *pSdlManager){


   pSprite->ptexture=SDL_CreateTexture(pSdlManager->pRenderer,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,1024,768);

}*/

/****************************************************************************************************
Description : Fonction de destruction des attributs de SDL_Sprite
Input : SDL_Sprite *pSprite
Output : SDL_Sprite *pSprite
Note ://
******************************************************************************************************/
extern void destroy_Sprite(SDL_Sprite *pSprite){

    if(pSprite->ptexture!=NULL){
        SDL_DestroyTexture(pSprite->ptexture);
        pSprite->ptexture=NULL;
        pSprite->psurface=NULL;
    }




}


/****************************************************************************************************
Description : Fonction d'affichage du sprite dans le rendu à l'écran
Input : SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,
                    int nScale
Output : SDL_Manager->Renderer
Note ://
******************************************************************************************************/


/*void SpriteToRender(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,
                    int w,int h,int nScale){

    SDL_Rect srcRect;
    SDL_Rect destRect;


    if(pSprite->ptexture){



       //Rect Source
       srcRect.x=nSrcRectX;
       srcRect.y=nSrcRectY;

       srcRect.w=w;
       srcRect.h=h;


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



    }


}*/

void updateSprite(void *a,int *nFrames){



     int *ad=a;
     if(*nFrames%2){
        *ad=50;
     }else{

        *ad=0;
     }
     (*nFrames)++;




}



/*void tileMapping(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,int w,int h,int nScale){

    SDL_Rect srcRect;
    SDL_Rect destRect;
    //Tilset 384*256
    //w=>12 tiles
    //h=>8 tiles
    int i,j;
    if(pSprite->ptexture){

       //Rect Source
       srcRect.x=nSrcRectX;
       srcRect.y=nSrcRectY;

       srcRect.w=w;
       srcRect.h=h;


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

       SDL_SetRenderDrawColor(pSdlManager->pRenderer,255,0,0,255);

       for(i=0;i<8;i++){
        for(j=0;j<12;j++){
            SDL_Rect rect = {32*j, 32*i, 32, 32};
            SDL_RenderDrawRect(pSdlManager->pRenderer, &rect);
        }
       }




        //TODO update renderer



    }




}
*/






