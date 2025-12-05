#include <stdio.h>
#define PI 3.1415926536

int main(){
    const double cPI = PI;

    printf("Defined constant PI: %f\n", PI);
    printf("Memory constant cPI: %f\n", PI);
    printf("Literal constant: %f\n", 3.1415926536);
    return 0;

}