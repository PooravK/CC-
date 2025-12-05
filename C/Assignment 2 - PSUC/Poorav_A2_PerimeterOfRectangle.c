#include <stdio.h>

int main(){
    int l, b;

    printf("Enter length of rectangle:\n");
    scanf("%d", &l);

    printf("Enter breadth of rectangle:\n");
    scanf("%d", &b);

    printf("Therefore the perimeter of the given rectangle is: %d", 2 * (l + b));
    return 0;
}