#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    if (age <= 12 || age >= 50)
    {
        printf("You're eligible for the offer \n");
    }
    else
    {
        printf("You're not eligible for the offer \n");
    }

    return 0;
}
