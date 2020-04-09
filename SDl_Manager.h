#ifndef SDL_MANAGER_H_INCLUDED
#define SDL_MANAGER_H_INCLUDED


#include "SDL2/SDL.h"

#define WINDOWH 768
#define WINDOWW 1024



/****************************************************************************************************
Description : Structure SDL_Manager, Manager des instances Window et Renderer
Note : Copyright Lehmann Nicolas
******************************************************************************************************/



typedef struct SDL_Manager{

     SDL_Window *pWindow;
     SDL_Renderer *pRenderer;


}SDL_Manager;


extern int init_SdlManager(SDL_Manager *pSdlManager);
extern int destroy_SdlManager(SDL_Manager *pSdlManager);
extern void quitSdl();


#endif // SDL_MANAGER_H_INCLUDED
