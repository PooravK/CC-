#include<stdio.h>

int change(int *p)
{
    *p = *p + 10;
    return 0;
}

int main()
{
    int x = 20;
    change(&x);
    printf("x after change = %d", x);

    return 0;
}