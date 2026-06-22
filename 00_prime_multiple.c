#include <stdio.h>
#include <math.h>
int main()
{
    int i, num, count = 0;
    for (num = 1; num <= 100; num++)
    {
        count = 0;
        if (num < 1)
        {
            count++;
        }
        else
        {
            for (i = 2; i <= sqrt(num); i++)
            {
                if (num % i == 0)
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 0)
        {
            printf("%d is a prime number\n", num);
        }
    }
}
