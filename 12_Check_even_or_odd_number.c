#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of your choice: \n");
  scanf("%d", &n);
  if(n % 2 == 0)
  {
    printf("The number you have entered is an even number");
  }
  else
  {
    printf("The number you have entered is a odd number");
  }
  
  return 0;
}
