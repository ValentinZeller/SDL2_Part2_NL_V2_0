
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
void createTexture(SDL_Sprite *pSprite,SDL_Manager *pSdlManager){


    if(pSprite->psurface){
        pSprite->ptexture=SDL_CreateTextureFromSurface(pSdlManager->pRenderer,pSprite->psurface);
        SDL_FreeSurface(pSprite->psurface);
    }

}

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
    }



}
