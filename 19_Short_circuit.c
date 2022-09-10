#include <stdio.h>

int main()
{
    int a = 10, b = 11, i = 5, j = 6;
    if (a > b && ++i < b)
    {
    }
    printf("%d\n", i);
    if (a < b || ++j > b)
    {
    }
    printf("%d\n", j);
    return 0;
}
