#include "SDl_Manager.h"
#include "SDL_Sprite.h"

/****************************************************************************************************
Description : Fonction qui efface l'ecran entre chaque nouvelle frame
Input : SDL_Manager *pSdlManager
Output : SDL_Manager->Renderer
Note ://
******************************************************************************************************/




void clearScreen(SDL_Manager *pSdlManager){



       SDL_SetRenderDrawColor(pSdlManager->pRenderer,70,187,217,255);
       SDL_RenderClear(pSdlManager->pRenderer);



}



/****************************************************************************************************
Description : Fonction d'affichage du rendu à l'écran
Input : SDL_Manager *pSdlManager
Output : SDL_Manager->Renderer
Note ://
******************************************************************************************************/


void display(SDL_Manager *pSdlManager){


    SDL_RenderPresent(pSdlManager->pRenderer);
    clearScreen(pSdlManager);

}
