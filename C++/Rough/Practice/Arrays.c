#include<stdio.h>

int main(){
    int original[5], reverse[5];

    printf("Enter an array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &original[i]);
    }
    printf("Entered array: ");
    for (int i = 0; i < 5; i ++)
    {
        printf("%d ", original[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        reverse[i] = original[4 - i];
    }
    printf("\nTherefore reversed array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", reverse[i]);
    }

    return 0;
}