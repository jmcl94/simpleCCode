#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char password[20];
    int upperC = 0, num = 0, dollarSign = 0;
    printf("Enter a password include number, upper case letter and a dollar sign\n");
    scanf(" %20s", password);
    int i;
    for(i = 0; i < sizeof(password); i++){
            if (isalpha(password[i])){
                if (isupper(password[i])){
                    upperC++;
                    continue;
                }
            } else{

            if (isdigit(password[i])) {
                num++;
            } else if(password[i] == '$'){
                dollarSign++;
            }
            }
    }

    if (upperC>0 && num > 0 && dollarSign>0){
        printf("Password Valid");
    }else{
        printf("Password Invalid");
        }
    return 0;
}
