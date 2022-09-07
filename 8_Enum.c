#include <stdio.h>

enum day {mon, tues, wed, thurs, fri, sat, sun};
enum dept {cse = 1, ece, it, civil = 7, mech};

int main()
{
    enum day d;
    d = tues;
    printf("%d\n", d);
  
    enum dept dp;
    dp = ece;
    printf("%d\n", dp);
  
    dp = mech;
    printf("%d\n", dp);

    return 0;
}
