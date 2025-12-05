#include <stdio.h>

int main(){
    float c, f;

    printf("Input temperature in celcius:\n");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("Therefore the given temperature in celcius is: %f", f);

    return 0;
}