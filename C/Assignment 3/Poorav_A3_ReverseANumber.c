#include <stdio.h>

int main(){
    int n, lastDigit, second = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);

    while (n != 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        second = second * 10 + lastDigit;
        
    }
    printf("%d", second);
    return 0;
}