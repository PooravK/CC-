#include <stdio.h>
#define PERIOD 10
#define PRINCIPAL 500.00

int main(){
    int year;
    float amount, value, inrate;
    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;
    while (year <= PERIOD){
        printf("Year = %2d and amount = %8.2f\n", year, amount);
        value = amount = amount + inrate * amount;
        year = year + 1;
        amount = value;
    }
    return 0;

}