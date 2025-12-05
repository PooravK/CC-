#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, r, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &col);
    printf("Enter elements in array a:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements in array b:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Multiplication of 2 matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            for (k = 0; k < col; k++)
            {
                c[i][j] = a[i][k] * b[k][j] + c[i][j]; 
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}