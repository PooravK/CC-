#include<stdio.h>

void main(){
    int a[10][10], b[10][10], c[10][10], i, j, r, col, k;
    printf("Enter number of rows:\n");
    scanf("%d", &r);
    printf("Enter number of column:\n");
    scanf("%d", &col);
    printf("Enter elements in array a");

    for (int i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++){
        scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Multiplication of two matrix:\n");

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
            printf("|%d| ", c[i][j]);
        }
        printf("\n");
    }
}