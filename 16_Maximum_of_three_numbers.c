#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers of your choice: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the maximum among the three number \n", a);
    }
    else if (b > c)
    {
        printf("%d is the maximum among the three number \n", b);
    }
    else
    {
        printf("%d is the maximum among the three number \n", c);
    }

    return 0;
}
