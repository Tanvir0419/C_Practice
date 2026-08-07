#include <stdio.h>
int main()
{
    float s = 0, y, d;
    float bonus_rate = 0;

    printf("Enter salary,year & designation 1 for Manager and 2 for Staff : ");
    scanf("%f%f%f", &s, &y, &d);
    if (d == 1)
    {
        bonus_rate = 0.02;
    }
    if (s > 50000)
    {
        if (y > 5)
        {
            bonus_rate = bonus_rate + 0.10;
        }
        else
        {
            bonus_rate = bonus_rate + 0.05;
        }
    }
    else
    {
        if (y > 5)
        {
            bonus_rate = bonus_rate + 0.15;
        }
        else
        {
            bonus_rate = bonus_rate + 0.08;
        }
    }
    s = s + (bonus_rate * s);
    printf("%f", s);
    return 0;
}
