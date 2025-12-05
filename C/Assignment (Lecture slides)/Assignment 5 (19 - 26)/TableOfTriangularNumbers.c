#include<stdio.h>

int main(){
    int n, triangularNumber = 0;

    printf("Table of triangular numbers\n\n");
    printf("Sum from 1 to n\n");

    for (n = 1; n <= 10; n++)
    {
        triangularNumber += n;
        printf("The %dth triangular numnber is %d\n", n, triangularNumber);
    }
    return 0;
}