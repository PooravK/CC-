#include<stdio.h>

int main(){
    int j, prime = 1, n;
    scanf("%d", &n);
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1){
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
    }
    return 0;
}