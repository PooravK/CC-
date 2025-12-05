#include<stdio.h>

int main(){
    int *p, sum = 0, i = 0;
    int x[5] = {5, 9, 6, 3, 7};
    p = x;

    while(i < 5)
    {
        sum += *p;
        i++;
        p++;
    }
    printf("Sum of elements = %d", sum);
    return 0;
}