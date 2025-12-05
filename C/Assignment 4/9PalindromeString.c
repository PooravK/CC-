#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    int i, j, n, flag = 1;
    printf("Enter the string: ");
    gets(str);

    n = strlen(str);
    for (i = 0; i < n/2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
            
        }
    }
    if (flag == 1)
     printf("Palindrome string");
    else
     printf("Not a palindrome");

    return 0;
}