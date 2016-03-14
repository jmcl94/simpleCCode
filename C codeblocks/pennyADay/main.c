#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    float penny = 0.01;
    //int day;

    //for (day = 1; day < 31; day++){
    //    penny *= 2;
    //}

    penny *= pow(2, 30); //31 days

    printf("Would you rather? \n1) Take 1 Million Pounds today? \nOR \n"
           "2) Take a penny an double it for a month?\n");

    int option;
    scanf(" %d", &option);

    printf("%.2f", ((option == 2) ? penny : 1000000.00) );

    return 0;
}
