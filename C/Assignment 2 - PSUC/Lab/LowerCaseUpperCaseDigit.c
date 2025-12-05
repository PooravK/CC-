#include <stdio.h>

int main(){
    char input;
    printf("Enter any charactor: \n");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z'){
        printf("Its a lower case charactor");
    }
    else if (input >= 'A' && input <= 'Z'){
        printf("Its a upper case charactor");
    }
    else if (input >= '0' && input <= '9'){
        printf("Its a single digit number");
    }
    else{
        printf("Its a special symbol");
    }
    return 0;
}