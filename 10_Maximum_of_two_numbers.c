#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers of your choice: \n");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("%d is maximum", x);
    }
    else
    {
        printf("%d is maximum", y);
    }

    return 0;
}
