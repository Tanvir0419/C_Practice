#include <stdio.h>
#include <math.h>
int main()
{
    int i, num, count = 0;
    printf("Enter a number to check:");
    scanf("%d", &num);
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
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
}
