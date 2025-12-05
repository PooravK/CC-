#include <stdio.h>
#define PI 3.14

int main(){

    float r;
    printf("Enter value of radius:\n");
    scanf("%f", &r);

    printf("Therefore area of the circle = %f", PI * r * r);
    return 0;
}