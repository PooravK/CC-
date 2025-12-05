#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks:\n");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 91){
        printf("A+");
    }
    else if (marks <= 90 && marks >= 81){
        printf("A");
    }
    else if (marks <= 80 && marks >= 61){
        printf("B");
    }
    else if (marks <= 60 && marks >= 41){
        printf("C");
    }
    else if (marks <= 40 && marks >= 31){
        printf("D");
    }
    else {
        printf("FAIL");
    }
    return 0;
}