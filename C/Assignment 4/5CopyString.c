#include<stdio.h>
#include <string.h>

int main(){
    char str1[] = "Manipal University";
    char str2[80];
    int n = strlen(str1);
    int j;

    for (int j = 0; j < n; j++)
    {
        str2[j] = str1[j];
    }
    printf("%s", str2);

    return 0;
}