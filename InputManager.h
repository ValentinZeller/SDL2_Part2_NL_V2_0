#ifndef INPUTMANAGER_H_INCLUDED
#define INPUTMANAGER_H_INCLUDED
#include <SDL2/SDL.h>

typedef struct{

    SDL_Event event;
    /*SDL_KeyboardEvent key;
    SDL_MouseMotionEvent mouseEvent;
    SDL_QuitEvent QuitEvent;*/

}tEventType;



typedef enum eKeyMove{haut,bas,gauche,droite}eKeyMove;

typedef enum eKeyGameEvent{quit,start}eKeyGameEvent;


typedef struct{

    eKeyMove kMove;
    eKeyGameEvent kGameEvent;


}tKeyEventType;



extern void initKeyGameEvent(tKeyEventType *keyEvent);
extern void InputEvent(tEventType *event,tKeyEventType *keyEvent);
extern void setQuitEvent(tKeyEventType *keyEvent);

#endif // INPUTMANAGER_H_INCLUDED
