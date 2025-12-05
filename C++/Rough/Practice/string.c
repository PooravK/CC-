#include<stdio.h>
#include <string.h>

int main(){
    char str[14];
    printf("Enter something:\n");
    gets(str);
    printf("Entered string is:");
    puts(str);
    return 0;
}