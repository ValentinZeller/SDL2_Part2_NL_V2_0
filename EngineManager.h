#ifndef ENGINEMANAGER_H_INCLUDED
#define ENGINEMANAGER_H_INCLUDED

#include "SDl_Manager.h"
#include "SDL_Sprite.h"
#include "SDL_Display.h"
#include "viewport.h"

#define VIEWPORTWIDTH 640
#define VIEWPORTHEIGHT 480

typedef struct EngineManager{

    SDL_Manager sdlManager;
    SDL_Sprite sprite;
    tViewPort viewport;


}tEngineManager;

SDL_Rect ViewPortRect;


extern void engineInitManager(tEngineManager *engine);
extern void engineBuildSprite(tEngineManager *engine, char *path);
extern void engineBuildViewport(tEngineManager *engine);
extern void engineSpriteToViewPort(tEngineManager *engine);
extern void engineDisplay(tEngineManager *engine);
extern void engineDestroySdlManager(tEngineManager *engine);
extern void engineDestroySdlSprite(tEngineManager *engine);
extern void engineStop();





#endif // ENGINEMANAGER_H_INCLUDED
