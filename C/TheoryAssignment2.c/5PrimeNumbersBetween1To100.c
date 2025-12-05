#include<stdio.h>

int main(){

    for (int i = 1; i <= 100; i++)
    {
        int prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
         printf("%d ", i);
    }
    return 0;
}