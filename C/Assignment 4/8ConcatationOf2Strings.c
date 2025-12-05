#include <stdio.h>
#include <string.h>
int main()
{
    char s1[40], s2[50];
    printf("\nEnter 1st string");
    gets(s1);
    printf("\nEnter 2nd string\n");
    gets(s2);
    strcat(s1, s2);
    printf("\nConcatation string is ");
    printf("%s", s1);

    return 0;
}