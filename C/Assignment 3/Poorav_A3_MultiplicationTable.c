#include <stdio.h>

int main()
{
    int number, terms, mult;

    printf("Enter a number:\n");
    scanf("%d", &number);
    printf("Upto what terms do you want the multiplication table for provided number:\n");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++)
    {
        mult = number * i;
        printf("%d x %d = %d\n", number, i, mult);
    }
    return 0;
}