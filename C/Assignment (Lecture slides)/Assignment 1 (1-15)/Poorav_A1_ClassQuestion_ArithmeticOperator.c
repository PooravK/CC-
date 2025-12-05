#include <stdio.h>

int main(){
    int a, b;
    printf("Enter your first number: \n");
    scanf("%d", &a);
    printf("Enter your second number: \n");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);

    return 0;
}