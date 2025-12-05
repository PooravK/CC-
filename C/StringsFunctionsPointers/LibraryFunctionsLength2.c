#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    printf("Enter name: ");
    gets(str1);

    printf("Enter surname: ");
    gets(str2);
    strcat(str1, str2);
    printf("%s ", str1);

    return 0;
}