#include <stdio.h>

int main()
{
  int hour;
  printf("Enter the hour according to 24-hour format: \n");
  scanf("%d", &hour);
  if (hour >= 9 && hour <= 18)
  {
    printf("It's working hour");
  }
  else
  {
    printf("It's leisure hour");
  }
  
 return 0;
}
