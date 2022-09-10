#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float avg;
    printf("Enter the marks in three subjects: \n");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    avg = total / 3.0;
    if (avg >= 60)
    {
        printf("Your grade is A \n");
    }
    else if (avg >= 35 && avg < 60)
    {
        printf("Your grade is B \n");
    }
    else
    {
        printf("Your grade is C \n");
    }

    return 0;
}
