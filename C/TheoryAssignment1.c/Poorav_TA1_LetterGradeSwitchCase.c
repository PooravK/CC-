#include<stdio.h>

int main(){
    int marks, grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks){
        case 10:
        case 9:
         printf("A");
         break;
        case 8:
        case 7:
         printf("B");
         break;
        case 6:
        case 5:
         printf("C");
         break;
        case 4:
        case 3:
         printf("D");
         break;
        default: printf("F");
    }
    return 0;
}