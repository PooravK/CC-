#include ,stdio.h>

int main(){
    int a = 6, b = 14;
    int x = 23, y = 10;
    int m = 12, n = 10;
    int k = 8;

    printf("The output of the bitwise AND operator is %d\n", a & b);
    printf("The output of the bitwise XOR operator is %d\n", m ^ n);
    printf("The output of the bitwise OR operator is %d\n", x | y);
    printf("The output of the bitwise COMP operator is %d\n", ~k);

    return 0;
}