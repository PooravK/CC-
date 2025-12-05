#include <stdio.h>

int fn2d(int x[][10], int m, int n)
{
    int i, j, sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++) // Use 'n' for columns
        {
            sum += x[i][j];
        }
    }
    return sum;
}

int main()
{
    int i, j, a[10][10], m, n; // Correctly declare 'a' as a 2D array
    printf("Enter dimensions of the matrix: ");
    scanf("%d %d", &m, &n);

    if (m > 10 || n > 10)
    {
        printf("Error: Matrix dimensions cannot exceed 10x10.\n");
        return 1;
    }

    printf("Enter the elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Sum = %d\n", fn2d(a, m, n));

    return 0;
}
