#include<stdio.h>

int main(){
    char sent[100];
    int i = 0, count = 0;
    printf("Enter sentence: ");
    gets(sent);
    puts(sent);
    while (sent[i] != '\0')
    {
        count++;
        i++;
    }
    printf("\nNumber of charactors in string = %d", count);
    return 0;
}