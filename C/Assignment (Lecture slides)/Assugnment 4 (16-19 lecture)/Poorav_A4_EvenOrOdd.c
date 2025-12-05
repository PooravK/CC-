#include<stdio.h>

int main(){
    int x;
    printf("Input an integer:\n");
    scanf("%d", &x);

    if ((x % 2) == 0)
    {
        printf("It is an even number\n");
    }
    if ((x % 2) == 1)
    {
        printf("It is an odd number\n");
    }
    return 0;
}