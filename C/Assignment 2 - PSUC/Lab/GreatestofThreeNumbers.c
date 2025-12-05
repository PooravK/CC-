#include <stdio.h>

int main(){
    int a, b, c;
    
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b){
        if (a > c){
            printf("A is the greatest");
        }
        else {
            printf("C is the greatest");
        }
    }
    else{
        if (b > c){
            printf("B is the greatest");
        }
        else{
            printf("C Is the greatest");
        }
    }
    return 0;
}