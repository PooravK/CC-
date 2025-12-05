#include<stdio.h>

int main(){
    int i, j, rows;
    printf("Please enter the number of rows:\n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 2 * i - 1; j >= i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}