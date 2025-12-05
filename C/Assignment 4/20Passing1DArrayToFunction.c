#include <stdio.h>

int fnSum(int a[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (sum);
}

int main()
{
    int n, a[20], x, y, i;
    printf("Enter the limit\n");
    scanf("%d", &n);
    printf("Enter the values \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The sum of array elements is = %d", fnSum(a, n));
    return 0;
}