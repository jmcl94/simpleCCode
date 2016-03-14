#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fnum, snum, ans;
    char op;

    printf("Enter first number\n");
    scanf(" %f", &fnum);

    printf("Enter math operation\n");
    scanf(" %c", &op, 1);

    while ((op != '+') && (op != '*') && (op != '/') && (op != '-'))
    {
        printf("Incorrect math operation enter again\n");
        scanf(" %c", &op);
    }

    printf("Enter second number\n");
    scanf(" %f", &snum);

    if (op == '+'){
        ans = fnum + snum;
    } else if(op == '-'){
        ans = fnum-snum;
    } else if (op == '*'){
        ans = fnum * snum;
    } else {
        ans = fnum / snum;
    }

    printf("Ans is %f", ans);

    return 0;
}
