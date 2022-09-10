#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the nth number of your choice: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of %d natural number is %d\n", n, sum);

    return 0;
}
