#include<stdio.h>

int main(){
    int i, j, rows, k;
    printf("Please enter number of rows = ");
    scanf("%d", &rows);
    k = 65;
    for(i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k);
        }
        printf("\n");
        k++;
    }
    return 0;
}