#include <stdio.h>

int main()
{
    int n, lastDigit, reversed = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    while (n != 0)
    {
        lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n/10;
    }
    printf("Reversed number is: %d", reversed);
    return 0;
}