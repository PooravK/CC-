#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[50];
    printf("Enter a string1 : ");
    gets(str1);
    printf("Enter a string1 : ");
    gets(str2);

    puts(strcat(str1, str2));
    return 0;

}