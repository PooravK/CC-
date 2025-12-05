#include<stdio.h>

int main(){
    int initialNumber, count = 0, lastDigit;
    printf("Enter a number:\n");
    scanf("%d", &initialNumber);

    while (initialNumber != 0)
    {
        initialNumber = initialNumber / 10;
        count = count + 1;

    }
    printf("%d\n", count);
    return 0;
}