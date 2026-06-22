#include <stdio.h>
#include <math.h>
int main()
{
    int i, num, count = 0, sum = 0;
    count = 0;
    if (num <= 1)
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
        printf("%d is a prime number", num);
        sum++;
        sum = sum + num;
    }
    printf("The sum of the prime number is:%d", sum);
}
