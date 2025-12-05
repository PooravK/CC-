#include <stdio.h>
#include <string.h>

int main()
{
    char sent[100];
    int len;
    printf("Enter sentence:\n");
    gets(sent);
    len = strlen(sent);
    printf("%d", len);
    printf("%c\n", sent[len-1]);
    printf("%c\n", sent[10]);

    return 0;
}