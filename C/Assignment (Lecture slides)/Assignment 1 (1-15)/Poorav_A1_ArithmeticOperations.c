#include <stdio.h>

int main(){
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;

    int result;

    result = a * b + c * d;
    printf("%d\n", result);
    result = a = (b + c * d);
    printf("%d\n", result);

    return 0;
}