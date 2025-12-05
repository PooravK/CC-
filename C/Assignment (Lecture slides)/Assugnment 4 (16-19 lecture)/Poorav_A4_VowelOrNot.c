#include<stdio.h>

int main(){
    char ch;
    printf("Enter an alphabet:\n");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
         printf("Vowel");
         break;
        case 'e':
         printf("Vowel");
         break;
        case 'i':
         printf("Vowel");
         break;
        case 'o':
         printf("Vowel");
         break;
        case 'u':
         printf("Vowel");
         break;
        default:
         printf("Not a vowel");
         break;
    }
    return 0;
}