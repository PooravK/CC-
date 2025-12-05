#include <stdio.h>

int main(){

    int n, armstrong, lastDigit, b = 0,pn;

    printf("Enter the number you want to find the armstrong number of:\n");
    scanf("%d", &n);
    pn=n;
    while (n != 0){
        lastDigit = n % 10;
        n = n/10;
        armstrong = lastDigit * lastDigit * lastDigit;
        b = b + armstrong;
    }
    if(pn==b)
    {
    printf("Given number is an armstrong number");
    }
    else{
        printf("Given number is not an armstrong number");
    }

    return 0;
}

//153 is an armstrong number 