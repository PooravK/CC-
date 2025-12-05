#include <stdio.h>

int main()
{
    float num1, num2;
    char symb;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("What operation do you want to perform: ");
    scanf(" %c", &symb);

    switch (symb)
    {
        case '+': printf("num1 + num2 = %.2f", num1 + num2);
         break;

        case '-': printf("num1 - num2 = %.2f", num1 - num2);
         break;

        case '*': printf("num1 * num2 = %.2f", num1 * num2);
         break;

        case '/': if (num2 == 0)
        {
            printf("Infinite");
            break;
        }

         printf("num1 / num2 = %.2f", num1 / num2);
         break;

        default: printf("Invalid operation");
         break;
        
    }
    return 0;
}