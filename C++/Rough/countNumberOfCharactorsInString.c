#include<stdio.h>

int main(){
    char str[50];
    int count = 0, i = 0;

    printf("Enter any string: ");
    gets(str);
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Total number of charactors are: %d", count);
    return 0;
}