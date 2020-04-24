#include "SDl_Manager.h"
#include <stdio.h>

/****************************************************************************************************
Description : Fonction d'initialisation des attributs de l'instance SDL_Manager
Input : SDL_Manager
Output : SDL_Manager
Note ://
******************************************************************************************************/
int init_SdlManager(SDL_Manager *pSdlManager){


//initialisation de SDL
    if(SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
            //Creer le pointeur sur la reference de la fenetre Win32
            pSdlManager->pWindow=SDL_CreateWindow("SDL_Application",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WINDOWW,WINDOWH
                                     ,SDL_WINDOW_SHOWN);
            //Si la fenetre creee
            if(pSdlManager->pWindow!=NULL){
                //Creation du rendu encapsule dans la fenetre pointee par pWindow
                pSdlManager->pRenderer=SDL_CreateRenderer(pSdlManager->pWindow,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

            }



    }else{

        printf("SDL_INIT failed: %s\n",SDL_GetError());


        return 0;
    }

    return 1;
}

/****************************************************************************************************
Description : Fonction de destruction des attributs de l'instance SDL_Manager
Input : SDL_Manager
Output : SDL_Manager
Note ://
******************************************************************************************************/
int destroy_SdlManager(SDL_Manager *pSdlManager){


    if(pSdlManager!=NULL){
         if(pSdlManager->pRenderer!=NULL && pSdlManager->pWindow!=NULL){

            SDL_DestroyRenderer(pSdlManager->pRenderer);
            SDL_DestroyWindow(pSdlManager->pWindow);
            pSdlManager->pRenderer=NULL;
            pSdlManager->pWindow=NULL;

            return 1;
        }
    }


    return 0;




}
/****************************************************************************************************
Description : Fonction quit SDL, stop l'utilisation de la lib SDL
Input : SDL_Manager
Output : SDL_Manager
Note ://
******************************************************************************************************/

void quitSdl(){

    SDL_Quit();

}
