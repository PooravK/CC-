#include <stdio.h>

int main(){
    int a, c;
    char b;

    printf("Enter the operation you want to perform:\n");
    scanf("%d %c %d", &a, &b, &c);

    switch (b){
        case '+': printf("%d", a + c);
        break;
        case '-': printf("%d", a - c);
        break;
        case '*': printf("%d", a * c);
        break;
        case '/': printf("%d", a / c);
        break;
        default: printf("Invalid operation");
    }
    return 0;
}