#include <stdio.h>

int main()
{
    int n, min1, min2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (int k = 2; k <= n; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}