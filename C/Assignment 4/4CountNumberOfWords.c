#include<stdio.h>

int main(){
    const int max = 100;
    char sent[max];
    int i = 0, count = 1;

    printf("Enter sentence\n");
    gets(sent);
    printf("\n");

    while (sent[i] != '\0')
    {
        if (sent[i] == ' ' && sent[i + 1] != ' ')
         count++;
        i++;
    }
    printf("Number of words = %d", count);
    return 0;
}