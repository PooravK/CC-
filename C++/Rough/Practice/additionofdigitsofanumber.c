#include <stdio.h>

int main(){
    int n, sum = 0, lastDigit;
    printf("Enter a number you want to find sum of digits of:\n");
    scanf("%d", &n);
    while (n != 0){
        lastDigit = n % 10;
        n = n/10;
        sum = sum + lastDigit;
    }
    printf("Sum = %d", sum);
    return 0;
}