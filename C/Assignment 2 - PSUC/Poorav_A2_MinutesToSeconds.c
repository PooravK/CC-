#include <stdio.h>

int main(){
    float min, sec;

    printf("Input time in minutes: \n");
    scanf("%f", &min);
    
    sec = min * 60;

    printf("Therefore the given time in seconds will be %f", sec);
    return 0;

}