#include <stdio.h>

int main()
{
    float A = 5, B = 10, C = 4, D = 8, E = 2, finalAnswer;

    printf("Task: A + B * C/D - E\n");
    finalAnswer = A + B * C/D - E;
    printf("Step 1: B * C = %.2f\n", B * C);
    printf("Step 2: B * C/D = %.2f\n", B * C/D);
    printf("Step 3: A + B * C/D = %.2f\n", A + B * C/D);
    printf("Step 4: A + B * C/D - E = %.2f\n", A + B * C/D - E);
    printf("The final answer is: %.2f\n", finalAnswer);
    return 0;
}