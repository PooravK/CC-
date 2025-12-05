#include <stdio.h>

int main(){
    float hrs, min;

    printf("Enter the time in hours: \n");
    scanf("%f", &hrs);

    min = hrs * 60;

    printf("Therefore the given time in minutes will be: %f", min);
    return 0;
}