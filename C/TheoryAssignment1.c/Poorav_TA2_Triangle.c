#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter sides a, b and c:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
        {
            printf("Yes triangle can be formed and it is equilateral");
        }
        else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            printf("Yes triangle can be formed and it is right angled");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Yes triangle can be formed and it is isoceles");
        }
    }
    else{
        printf("Triangle cannot be formed");
    }
    return 0;
}