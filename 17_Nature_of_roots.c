#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the three coefficients of quadratic equation:  \n");
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        printf("The roots are real and equal\n");
    }
    else if (d > 0)
    {
        printf("The roots are real and unequal\n");
    }
    else
    {
        printf("The roots are imaginary\n");
    }

    return 0;
}
