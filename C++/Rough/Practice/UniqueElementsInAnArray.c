#include <stdio.h>

int main(){
    int a[5], b[5];
    printf("Enter an array:\n");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= 5; i++)
    {
        b[i] = a[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        if (b[4 -i] != a[i])
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
    
}