#include <stdio.h>

int main(){
    char input;
    printf("Enter an alphabet:\n");
    scanf("%c", &input);

    switch (input){
        case 'a': printf("Vowel");
        break;
        case 'e': printf("Vowel");
        break;
        case 'i': printf("Vowel");
        break;
        case 'o': printf("Vowel");
        break;
        case 'u': printf("Vowel");
        break;
        case 'A': printf("Vowel");
        break;
        case 'E': printf("Vowel");
        break;
        case 'I': printf("Vowel");
        break;
        case 'O': printf("Vowel");
        break;
        case 'U': printf("Vowel");
        break;
        default: printf("Not a vowel");
    }
    return 0;
}