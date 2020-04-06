#include<stdio.h>
#include "SDl_Manager.h"
//#include <math.h>
//#define PI 3.14159265


int main(int argc, char *argv[]){


    SDL_Manager sdlManager;

    //appel fonction init SDL_Manager
    init_SdlManager(&sdlManager);



    SDL_Delay(5000);

     //appel de la fonction destruction des attributs SDL_Manager
    destroy_SdlManager(&sdlManager);


    quitSdl();







return 0;
}





