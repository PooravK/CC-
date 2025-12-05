#include<stdio.h>

int main() {
    int n, lastDigit, decimal = 0, count = 0;

    printf("Enter a binary number:\n");
    scanf("%d", &n);

    while (n != 0) {
        lastDigit = n % 10;

        decimal = decimal + lastDigit * (1<<count);
        n = n / 10;
        count++;
    }

    printf("Count of binary digits: %d\n", count);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
