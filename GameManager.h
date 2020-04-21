#ifndef GAMEMANAGER_H_INCLUDED
#define GAMEMANAGER_H_INCLUDED

#include "SDL2/SDL.h"
#include "InputManager.h"

typedef enum gameState{play,pause,quitGame}gameState;

gameState eState;


extern void initGameState();
extern void setGameState(eKeyGameEvent kGameEvent);
extern void update(void *a,int *nFrames);

#endif // GAMEMANAGER_H_INCLUDED
