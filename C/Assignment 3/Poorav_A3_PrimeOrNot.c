#include <stdio.h>

int main(){
    int n, a;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i = 2; i <= n-1; i++)
    {
        a = n % i;
        if (a != 0)
        {
            printf("prime");
            break;
        }
        else{
            printf("not prime");
            break;
        }
    }
    return 0;
}