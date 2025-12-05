#include <stdio.h>

int main(){
    int n, initialNumber, lastDigit, second = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);

    initialNumber = n;

    while (n != 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        second = second * 10 + lastDigit;
        
    }
    if (initialNumber == second)
    {
        printf("Given number is a palindrome number");
    }
    else{
        printf("It is not a palindrome number");
    }
    return 0;
}