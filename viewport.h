#ifndef VIEWPORT_H_INCLUDED
#define VIEWPORT_H_INCLUDED

#include <SDL2/SDL.h>
#include "SDL_Sprite.h"

typedef struct viewport{


    SDL_Rect RectViewPort;
    int nLayer;


}tViewPort;

 //Viewport


extern void setViewport(tViewPort *viewPort, SDL_Rect rect, int numLayer);
extern void setTargetViewport(SDL_Sprite *pSprite,SDL_Manager *pSdlManager, tViewPort* viewport);


#endif // VIEWPORT_H_INCLUDED
