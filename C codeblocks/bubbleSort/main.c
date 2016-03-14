#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, temp, sorted, arraySize = 10;
    int toSort[arraySize];

    printf("Unsorted list:\n");


    for (i=0; i < arraySize; i++){

            toSort[i] = rand();
            printf("Number %d: %d\n", i+1, toSort[i]);
    }



    while(1){

        sorted = 0;

        for(i =0; i<arraySize-1; i++){

            if(toSort[i] > toSort[i+1]){

                temp = toSort[i];
                toSort[i] = toSort[i+1];
                toSort[i+1] = temp;
                sorted = 1;
            }
        }

        if(sorted == 0){

                break;
        }

    }

    printf("Sorted list:\n");

    for (i=0; i < arraySize; i++){

            printf("Number %d: %d\n", i+1, toSort[i]);
    }


    return 0;
}
