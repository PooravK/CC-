#include <stdio.h>

int main(){
    int firstNumber, secondNumber, firstDivision, secondDivision;
    printf("Enter first number:\n");
    scanf("%d", &firstNumber);
    printf("Enter second number:\n");
    scanf("%d", &secondNumber);

    for (int i = firstNumber-1; i >= 2; i--)
    {
        firstDivision = firstNumber % i;
        secondDivision = secondNumber % i;

        if (firstDivision == 0 && secondDivision == 0){
            printf("GCD of given two numbers = %d", i);
            break;
        }

    }
    return 0;
}