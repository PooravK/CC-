#include <stdio.h>

int main(){
    int n, lastDigit, sum = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);

    while (n != 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        sum = sum + lastDigit;
        
    }
    printf("%d", sum);
    return 0;
}