#include <stdio.h>

int add(int x, int y)
{
    int z;
    z = x + y;
}

int main()
{
    int sum, a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    sum = add(a, b);

    printf("The sum = %d", sum);
    return 0;
}