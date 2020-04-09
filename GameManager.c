#include "GameManager.h"


void update(void *a,int *nFrames){



     int *ad=a;
     if(*nFrames%2){
        *ad=50;
     }else{
        *ad=0;
     }
     (*nFrames)++;


}

