#include<stdio.h>
/*
int main(){
    int a[6] = {1, 2, 3, 4, 5, 6};
    int b[6];

    for (int i = 0; i < 6; i++)
    {
        b[(i % 2 == 0)?i + 1:i - 1] = a[i];
    }
    for (int j = 0; j < 6; j++)
    {
        printf("%d", b[j]);
    }
    return 0;
}*/

int main(){
    int a[6] = {1, 2, 3, 4, 5, 6};
    int b[6];

    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            b[i + 1] = a[i];
        }
        else{
            b[i - 1] = a[i];
        }
    }
    for (int j = 0; j < 6; j++)
    {
        printf("%d", b[j]);
    }
    return 0;
}