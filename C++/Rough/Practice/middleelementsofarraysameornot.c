#include<stdio.h>

int main(){
    int a[5], b[5];
    printf("\nEnter your array 1:\n");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d", a[j]);
    }
    printf("\nEnter your array 2\n");

    for (int k = 0; k < 5; k++)
    {
        scanf("%d", &b[k]);
    }
    for (int l = 0; l < 5; l++)
    {
        printf("%d", b[l]);
    }
    for (int m = 0; m < 5; m++)
    {
        if (b[2] == a[2]){
            printf("\nMiddle values are same");
            break;
        }
        else{
            printf("\nMiddle values are not same");
            break;
        }
    }
    return 0;
}