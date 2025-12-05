#include <stdio.h>

int main(){
    float meter, kilometer;

    printf("Enter the distance in meters: \n");
    scanf("%f", &meter);
    kilometer = meter/1000;

    printf("Therefore the given distance in kilometers will be: %.3f KM", kilometer);
    return 0;
}