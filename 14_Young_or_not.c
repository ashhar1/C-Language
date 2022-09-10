#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    if (age >= 12 && age <= 50)
    {
        printf("You're a young person \n");
    }
    else
    {
        printf("You're not a young person \n");
    }

    return 0;
}
