#include<stdio.h>

/*int main(){
    int n, lastDigit, decimal = 0, count = 0;
    printf("Enter a binary number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        lastDigit = n % 10;
        if (lastDigit == 0)
        {
            decimal = lastDigit * 2 * 0;
        }
        else{
             while (n != 0){
             n = n / 10;
             count = count + 1;
             decimal = decimal + lastDigit * 2 * count;
            }
        }
    }
    printf("%d\n", count);
    printf("%d", decimal);
    return 0;
}*/


#include<stdio.h>

int main(){
    int n, lastDigit, decimal = 0, count = 0;
    printf("Enter a binary number:\n");
    scanf("%d", &n);

    while (n != 0){
        lastDigit = n % 10;
        decimal = decimal + lastDigit * count;
        n = n/10;
        count++;
    }
    printf("%d", count);
    printf("%d", decimal);
}