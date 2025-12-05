#include<stdio.h>

int main(){
    int arr[5] = {31, 54, 77, 52, 93};
    int j;

    for (j = 0; j < 5; j++)
    {
        printf("%d ", *(arr+j));
    }
    return 0;
}