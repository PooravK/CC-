#include<stdio.h>

int main(){
    int marks, grade;
    printf("Enter your marks:\n");
    scanf("%d", &marks);

    if (marks >= 9 && marks <= 10){
        printf("A");
    }
    else if (marks >= 7 && marks < 9){
        printf("B");
    }
    else if (marks >= 5 && marks < 7){
        printf("C");
    }
    else if (marks >= 3 && marks < 5){
        printf("D");
    }
    else if (marks < 3){
        printf("F");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}