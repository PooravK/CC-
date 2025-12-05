#include<stdio.h>

int main(){
    char str[100];
    int i = 0, count = 1;
    printf("Enter any string: ");
    gets(str);
    
    while(str[i] != '\0')
    {
        if (str[i] == ' ' && str[i+1] != ' ')
        {
            count++;
        }
         i++;
    }
    printf("Number of words are %d", count);

    return 0;
}