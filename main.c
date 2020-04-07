#include<stdio.h>
#include "SDl_Manager.h"
#include "SDL_Sprite.h"
#include "SDL_Display.h"
//#include <math.h>
//#define PI 3.14159265


int main(int argc, char *argv[]){


    SDL_Manager sdlManager;
    SDL_Sprite sprite;

    //appel fonction init SDL_Manager
    init_SdlManager(&sdlManager);

    loadSprite(&sprite,"./Assets/Knight/noBKG_KnightAttack_strip.png");
    createTexture(&sprite,&sdlManager);


    displaySprite(&sprite,&sdlManager,0,0,22,100,100,4);



    SDL_Delay(10000);

     //appel de la fonction destruction des attributs SDL_Manager
    destroy_SdlManager(&sdlManager);
    //appel de la fonction destruction sprite
    destroy_Sprite(&sprite);



    quitSdl();







return 0;
}





