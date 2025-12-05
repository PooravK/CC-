#include<stdio.h>
/*
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

*/

int main()
{
    char alphabets[50] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int n;
    printf("Enter a position: ");
    scanf("%d", &n);

    for (int i = 0; i < 50; i++)
    {
        if (i == (n-1))
        {
            printf("The alphabet at given position is: %c", alphabets[i]);
            break;
        }
    }
    return 0;
}