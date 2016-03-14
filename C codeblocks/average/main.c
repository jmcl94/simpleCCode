#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, howMany, total;
    float average = 0.0;
    int * pointsArray;

    puts("How many numbers do you want to average?");
    scanf(" %d", &howMany);

    pointsArray = (int *) malloc(howMany * sizeof(int));

    for (i=0; i < howMany; i++){

        printf("Enter number %d:", i+1);
        scanf(" %d", &pointsArray[i]);
        total += pointsArray[i];
    }

    average = (float)total / (float)howMany;

    printf("Total: %d\nAverage: %f", total, average);

    return 0;
}
