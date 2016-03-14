#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[20];
    char lname[20];
    int age;

    printf("What is your first name?\n");
    scanf("%s", fname);

    printf("What is your second name?\n");
    scanf("%s", lname);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hi %s %s, you were born %d years ago.", fname, lname, age);
    return 0;
}
