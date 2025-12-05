#include <stdio.h>

void fnOpr (int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    if (a > b)
    {
        *diff = a - b;
    }
    else{
        *diff = b - a;
    }
}
int main()
{
    int x, y, s, d;
    printf("Enter the values: \n");
    scanf("%d %d", &x, &y);
    fnOpr(x, y, &s, &d);

    printf("results are sum = %d, diff = %d", s, d);

    return 0;
}