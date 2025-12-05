#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int n1, n2, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum += add(n1, n2);

    printf("\nSum = %d", sum);
    return 0;
}