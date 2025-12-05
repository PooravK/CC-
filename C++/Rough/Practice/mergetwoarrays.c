#include<stdio.h>

int main(){

    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 0};
    int c[10];

    for (int i = 0, j = 0, k = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[j++];
        }
        else
        {
            c[i] = b[k++];
        }
    }

    return 0;
}