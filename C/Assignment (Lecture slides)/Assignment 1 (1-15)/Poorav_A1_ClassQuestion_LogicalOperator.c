#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter your first, second and third number: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d > %d && %d > %d is %d\n", a, c, b, c, a > c && b > c);
    printf("%d < %d && %d > %d is %d\n", a, c, b, c, a < c && b > c);
    printf("%d > %d && %d < %d is %d\n", a, c, b, c, a > c && b < c);
    printf("%d < %d && %d < %d is %d\n", a, c, b, c, a < c && b < c);

    printf("%d > %d || %d > %d is %d\n", a, c, b, c, a > c || b > c);
    printf("%d < %d || %d > %d is %d\n", a, c, b, c, a > c || b > c);
    printf("%d > %d || %d < %d is %d\n", a, c, b, c, a > c || b > c);
    printf("%d < %d || %d < %d is %d\n", a, c, b, c, a > c || b > c);

    printf("%d > %d != %d > %d is %d\n", a, c, b, c, a > c != b > c);
    printf("%d < %d != %d > %d is %d\n", a, c, b, c, a < c != b > c);
    printf("%d > %d != %d < %d is %d\n", a, c, b, c, a > c != b < c);
    printf("%d < %d != %d < %d is %d\n", a, c, b, c, a < c != b < c);

    return 0;
}