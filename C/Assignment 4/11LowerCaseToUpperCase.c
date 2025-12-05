#include<stdio.h>

int main(){
    char str[30];
    int i, n = 0;
    printf("\nEnter the string\n");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    puts(str);
    return 0;
}