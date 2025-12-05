#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100];
    char sen1[100];

    printf("Enter ");
    gets(sen);

    strcpy(sen1, sen);

    printf("%s\n", sen1);

    printf("Length of the string is %d", strlen(sen));

    return 0;
}