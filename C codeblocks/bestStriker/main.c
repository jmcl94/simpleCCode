#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int i;
    char * player[] = {"Giroud", "Aguero", "Costa", "Sturridge", "Kane"};
    int gamesPlayed[5] = {34, 28, 31, 14, 36};
    int goalsScored[5] = {18, 15, 21, 10, 17};
    float gpg[5], bestGpg = 0.0;
    char * pBestStriker = "";

    for(i = 0; i < 5; i++){

        gpg[i] = (float)goalsScored[i] / (float)gamesPlayed[i];

        if (gpg[i] > bestGpg){
            bestGpg = gpg[i];
            pBestStriker = player[i];
        }

        printf("Player: %s \t Games played: %d \t Goals Scored: %d \t GPG: %.2f \n", player[i], gamesPlayed[i], goalsScored[i], gpg[i]);
    }

    printf("The best striker is %s \n", pBestStriker);


    return 0;
}
