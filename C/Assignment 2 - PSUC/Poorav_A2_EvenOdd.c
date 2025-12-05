#include <stdio.h>

int main(){
    int a,x;
    printf("Enter a number:\n");
    scanf("%d", &a);
    x = a % 2;
    if (x == 0)
    printf("The number is even");
    else
    printf("The number is odd");

    return 0;
}