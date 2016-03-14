#include <stdio.h>
#include <stdlib.h>

int main()
{
    char guess[1];
    int roll = 0, newRoll, i, points = 0, tries =0;

    for (i=0; i<3; i++){
        roll = ((rand()%6) +1);
        printf("%d \n", roll);
    }

    while(points<10){

        do{
            printf("Next roll? (H)i/(L)ow/(S)ame\n");
            scanf(" %c", guess);
        } while (guess == 'H' || guess == 'L' || guess == 'S');

        newRoll = ((rand()%6) +1);
        printf("%d \n", newRoll);

        if(newRoll<roll && guess[0] == 'L')
        {
            printf("Guessed correctly\n");
            points++;
        }else if(newRoll>roll && guess[0] == 'H')
        {
            printf("Guessed correctly\n");
            points++;
        }else if (newRoll==roll && guess[0] == 'S')
        {
            printf("Guessed correctly\n");
            points += 2;
        }else
        {
            printf("Wrong\n");
        }
        printf("Points: %d\n", points);
        roll = newRoll;
        tries++;
    }
    printf("You got %.2f%%  of your guesses correct!\n", ((((float)points)/((float)tries))*100));

    return 0;
}
