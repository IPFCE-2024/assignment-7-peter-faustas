#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>
#define pi 3.14159265358979323846

int main (void){ // c) De cases som fejler skyldes en meget lille difference, som er pga. vores indtastede pi.
                // vi har udgangspunkt i "const double precision = 0.0001;" og den viser fejl, hvis den ligger udenfor det.
                //Vi kan så se at jo lavere værdier vi arbejder med, jo mere præcision bliver der. Så vores cases virker bedre jo lavere værdierne er.
    if (taylor_sine(pi, 8) == sin(pi))
    {
        printf("Test succeded\n");
    }
    else
        printf("Test failed\n, it needs to be");

    if (taylor_sine(pi/2.0, 10) == sin(pi/2.0) )
    {
        printf("Test succeded\n");
    }
    else
        printf("Test failed\n");

    if (taylor_sine(0, 1) == sin(0))
    {
        printf("Test succeded\n");
    }
    else
        printf("Test failed\n");

    if (taylor_sine(0, 100) == sin(0))
    {
        printf("Test succeded\n");
    }
    else
        printf("Test failed\n");
    
}