
#include<stdio.h>
#include "SDl_Manager.h"
#include "SDL_Sprite.h"
#include "SDL_Display.h"
#include "GameManager.h"




int main(int argc, char *argv[]){


    SDL_Manager sdlManager;
    SDL_Sprite sprite;
    int nX=0;
    int nFrames=1;
    tEventType event;

    //appel fonction init SDL_Manager
    init_SdlManager(&sdlManager);
    clearScreen(&sdlManager);

    loadSprite(&sprite,"./Assets/Goku.png");
    createTexture(&sprite,&sdlManager);

    initGameState();

    while(1){

    handleEvent(&event);

    if(nFrames%2){
        //TODO refactoring SpriteToRender
        SpriteToRender(&sprite,&sdlManager,nX,794,2,(WINDOWW/2)-270,(WINDOWH/2)-355,48,98,10);

    }else{
         //TODO refactoring SpriteToRender
        SpriteToRender(&sprite,&sdlManager,nX,794,2,(WINDOWW/2)-270,(WINDOWH/2)-355,70,98,10);
    }

    printf("x : %d",nX);

    update(&nX,&nFrames);
    SDL_Delay(200);
    display(&sdlManager);


    }


     //appel de la fonction destruction des attributs SDL_Manager
    destroy_SdlManager(&sdlManager);
    //appel de la fonction destruction sprite
    destroy_Sprite(&sprite);


    //appel de la fonction quitSDL
    quitSdl();







return 0;
}






