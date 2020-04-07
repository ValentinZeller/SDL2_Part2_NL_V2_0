#ifndef SDL_SPRITE_H_INCLUDED
#define SDL_SPRITE_H_INCLUDED
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDl_Manager.h"


/****************************************************************************************************
Description : Structure SDL_Sprite, gestion de sprite dans le projet SDL2
Note : Copyright Lehmann Nicolas
******************************************************************************************************/


typedef struct SDL_Sprite{

     SDL_Texture *ptexture;
     SDL_Surface *psurface;

}SDL_Sprite;


extern void loadSprite(SDL_Sprite *pSprite,char *cpath);
extern void createTexture(SDL_Sprite *pSprite,SDL_Manager *pSdlManager);
extern void destroy_Sprite(SDL_Sprite *pSprite);




#endif // SDL_SPRITE_H_INCLUDED
