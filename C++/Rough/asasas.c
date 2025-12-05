#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i = 0;

    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            i++;
        }
        else{
            printf("Strings are not equal");
            break;
        }
    }

    
    
    return 0;

}