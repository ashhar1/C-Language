#include <stdio.h>

int main()
{
    // while loop
    int n, i = 1;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("Hello ");
        i++;
    }
    printf("\n");
    // do while loop
    int num, j = 1;
    printf("Enter the value of num: \n");
    scanf("%d", &num);
    do
    {
        printf("World ");
        j++;
    } while (j <= num);
    printf("\n");
    // for loop
    int number;
    printf("Enter the value of number: \n");
    scanf("%d", &number);
    for (int k = 1; k <= number; k++)
    {
        printf("Bye ");
    }

    return 0;
}
