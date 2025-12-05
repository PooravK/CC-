#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    num1 > num2 && num1 > num3? printf("%d is the greatest", num1):
    num2 > num1 && num2 > num3? printf("%d is the greatest", num2):
    printf("%d is the greatest", num3);

    return 0;

}