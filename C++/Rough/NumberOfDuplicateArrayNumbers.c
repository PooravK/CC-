#include <stdio.h>

int main(){
  int a[5], b[5], count = 0;

  printf("Enter an array: \n");
  for (int i = 1; i <= 5; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter another array: \n");
  for (int i = 1; i <= 5; i++)
  {
    scanf("%d", &b[i]);
  }
  for (int j = 1; j <= 5; j++)
  {
    if (b[j] == a[j])
    {
        count++;
    }
  }
  
  printf("%d", count);
}