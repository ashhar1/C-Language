#include <stdio.h>
#include <limits.h>

int main()
{
    char x = 127;
    x++;
    printf("%d\n", (int)x);

    char y = -128;
    y--;
    printf("%d\n", (int)y);

    int z = INT_MAX;
    z++;
    printf("%d\n", z);
    return 0;
}
