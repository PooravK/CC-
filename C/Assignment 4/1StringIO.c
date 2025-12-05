#include<stdio.h>

int main(){
    char question[] = "Please enter your name: ";
    char greeting[] = "Hello, ";
    char yourName[80];
    printf("%s", question);
    scanf("%s", &yourName);
    printf("%s.......%s\n", greeting, yourName);
    return 0;
}