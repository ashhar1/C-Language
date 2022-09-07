#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter the number: \n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of first %d natural number is: %d", n, sum);

    return 0;
}
