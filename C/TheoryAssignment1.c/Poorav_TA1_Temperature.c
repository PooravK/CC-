#include<stdio.h>

int main(){
    float temp;
    printf("Enter temperature\n");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("Very cold weather");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold weather");
    }
    else
    {
        printf("Normal weather");
    }

    return 0;
}