#include<stdio.h>

int main(){
    int n, sum1 = 0, sum2 = 0;
    printf("Upto what term do you want to find the sum?\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i = i + 2)
    {
        sum1 = sum1 + i;
    }
    for (int j = 1; j <= n; j = j + 2)
    {
        sum2 = sum2 + j;
    }
    printf("Sum of even terms = %d\n", sum1);
    printf("Sum of odd terms = %d\n", sum2);

    return 0;
}