#include<stdio.h>
#include <string.h>

int main(){
    char str1[50];
    char str2[50];
    int j;
    printf("Enter a string: ");
    gets(str1);
    int n = strlen(str1);
    for (j = 0; j < n; j++)
    {
        str2[j] = str1[j];
    }
    str2[j] = '\0';
    puts(str2);

    return 0;
}