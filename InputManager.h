#ifndef INPUTMANAGER_H_INCLUDED
#define INPUTMANAGER_H_INCLUDED
#include <SDL2/SDL.h>

typedef struct{

    SDL_Event event;
    SDL_KeyboardEvent key;
    SDL_MouseMotionEvent mouseEvent;
    SDL_QuitEvent QuitEvent;

}tEventType;



typedef enum eKeyMove{haut,bas,gauche,droite}eKeyMove;

typedef enum eKeyGameEvent{quit,start}eKeyGameEvent;

eKeyMove kMove;
eKeyGameEvent kGameEvent;



extern void initKeyGameEvent();
extern void handleEvent(tEventType *event);
extern void setGameEvent();

#endif // INPUTMANAGER_H_INCLUDED
