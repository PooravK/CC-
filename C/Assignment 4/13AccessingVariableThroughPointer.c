#include<stdio.h>

int main(){
    int var1 = 11;
    int var2 = 22;
    int *ptr;

    ptr = &var1;
    printf("%d", *ptr);

    ptr = &var2;
    printf("\n%d", *ptr);
    return 0;
}