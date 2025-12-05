#include <stdio.h>

int main()
{
    int x, y, t, *a, *b;
    a = &x;
    b = &y;
    printf("\nEnter values of a & b: ");
    scanf("%d %d", a, b);

    t = *a;
    *a = *b;
    *b = t;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}