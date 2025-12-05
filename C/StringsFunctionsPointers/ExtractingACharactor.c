#include<stdio.h>
#include <string.h>

int main(){
    char sent[100];
    int len;
    printf("Enter a sentence: ");
    gets(sent);
    len = strlen(sent);
    printf("%d\n", len);
    printf("%c\n", sent[len-1]);
    printf("%c\n", sent[0]);
    return 0;
}