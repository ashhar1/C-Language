#include <stdio.h>

int main()
{
    printf("Menu\n");
    printf("1. Add\n2. Subtract\n3. Multiplication\n4. Division\n");
    int option;
    printf("Enter your choice :\n");
    scanf("%d", &option);
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        printf("Invalid option chosen\n");
    }
    printf("Result for your option chosen is: %d", c);

    return 0;
}
