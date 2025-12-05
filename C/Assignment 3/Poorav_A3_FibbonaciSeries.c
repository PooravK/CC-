#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;
    printf("enter the number of terms: \n");
    scanf("%d", &n);

    printf("Fibbonachi series: \n");

    for (int i = 0; i < n; ++i)
    {
        if (i <= 1){
         next = i;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);

    }

    return 0;
}