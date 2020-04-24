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
     SDL_Rect SpriteSize;

}SDL_Sprite;


extern void loadSprite(SDL_Sprite *pSprite,char *cpath);
extern void createSprite(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int w,int h);
extern void destroy_Sprite(SDL_Sprite *pSprite);
extern void updateSprite(void *a,int *nFrames);



//extern void SpriteToRender(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,int w,int h,int nScale);
//extern void tileMapping(SDL_Sprite *pSprite,SDL_Manager *pSdlManager,int nSrcRectX, int nSrcRectY,int nNbTotalframe,int nDestRectX,int nDestRectY,int w,int h,int nScale);

//extern void createTexture2(SDL_Sprite *pSprite,SDL_Manager *pSdlManager);


#endif // SDL_SPRITE_H_INCLUDED
