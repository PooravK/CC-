
#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int SE = 4;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == SE)
        {
            printf("\nElement found at position %d!", i);
            break;
        }
    }
    return 0;
}