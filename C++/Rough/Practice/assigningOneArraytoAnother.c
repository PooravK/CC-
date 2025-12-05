#include<stdio.h>

int main(){
    int a[5], b[5];
    printf("Enter elements in array 1\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n", a[j]);
    }
    for (int k = 0; k < 5; k++)
    {
        b[k] = a[k];
    }
    printf("Elements of array b\n");
    for (int l = 0; l < 5; l++)
    {
        printf("%d", b[l]);
    }
    return 0;
}