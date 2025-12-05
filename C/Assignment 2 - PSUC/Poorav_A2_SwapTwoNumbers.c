#include <stdio.h>

int main(){
    int a = 5, b = 6;

    printf("Swap of two numbers\n");
    a = a + b;
    printf("a = %d\n", a);
    b = a - b;
    printf("b  = %d\n", b);
    a = a - b;
    printf("a = %d\n", a);

    printf("Therefore Final a = %d and Final b = %d", a, b);

    return 0;
}