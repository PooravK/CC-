#include<stdio.h>

int main(){
    int n, lastDigit, reverse;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}