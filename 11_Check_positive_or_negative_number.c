#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of your choice: \n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("It is a positive number");
    }
    else
    {
        printf("It is a negative number");
    }

    return 0;
}
