#include<stdio.h>

int main(){
    char ch;
    printf("Enter a charactor\n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z'){
       printf("Lower case charactor\n");
    }
    else if (ch >= 'A' && ch <= 'Z'){
       printf("Upper case charactor\n");
    }
    else if (ch >= '0' && ch <= '9'){
       printf("Digit charactor\n");
    }
    else{
       printf("special charactor\n");
    }
    return 0;
}