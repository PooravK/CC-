#include<stdio.h>

int main(){
    int n;
    int sum;
    sum = 0;

    for (n = 1; n <= 100; n++)
    {
        sum = sum + n;
    }
    printf("%d", sum);
    return 0;
}