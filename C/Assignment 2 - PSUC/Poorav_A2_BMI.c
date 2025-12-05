#include <stdio.h>

int main(){
    float weight, height, BMI;
    printf("Enter your weight in KG:\n");
    scanf("%f", &weight);
    printf("Enter your height in meters:\n");
    scanf("%f", &height);

    BMI = weight/(height * height);

    printf("Therefore BMI of given indivisual is: %f", BMI);
    return 0;
}