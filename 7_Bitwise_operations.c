#include <stdio.h>

int main()
{
    int x = 5, y = 11, z, p, q, r, s, t;
    z = x & y;
    printf("%d\n", z);
    p = x | y;
    printf("%d\n", p);
    q = x ^ y;
    printf("%d\n", q);
    r = ~x;
    printf("%d\n", r);
    s = x << 1;
    printf("%d\n", s);
    t = y >> 1;
    printf("%d\n", t);

    return 0;
}
