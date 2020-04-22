#ifndef GAMEMANAGER_H_INCLUDED
#define GAMEMANAGER_H_INCLUDED

#include "SDL2/SDL.h"
#include "InputManager.h"
#include "GameState.h"




typedef struct {

    eGameState eState;
    tKeyEventType keyEvent;
    tEventType event;


}tMananger;

tMananger gameManager;


extern void initManager(tMananger *gameManager);
extern void seteGameState(tMananger *gameManager);
extern void handleEvent(tMananger *gameManager);
extern void update();
extern void stateQuitGame();

#endif // GAMEMANAGER_H_INCLUDED
