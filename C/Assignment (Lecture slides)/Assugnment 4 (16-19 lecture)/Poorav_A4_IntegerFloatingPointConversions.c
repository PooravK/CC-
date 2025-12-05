#include<stdio.h>

int main(){
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    i1 = f1;
    printf("Float assigned to int produces");
    printf("%d\n", i1);
    f2 = i2;
    printf("int assigned to float produces");
    printf("%f\n", f2);
    i1 = i2/100;
    printf("Integer divided by 100 produces");
    printf("%d\n", i1);
    f1 = i2/100.0;
    printf("Integer divided by 100.0 produces");
    printf("%f\n", f1);
    return 0;
}