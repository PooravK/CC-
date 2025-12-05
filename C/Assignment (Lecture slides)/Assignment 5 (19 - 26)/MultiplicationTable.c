#include<stdio.h>

int main(){
    int n, k, prod;
    printf("Enter a number and a term:\n");
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prod = i * j;
            printf("%d * %d = %d\t", j, i, prod);
        }
        printf("\n");
    }
    return 0;
}