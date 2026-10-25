#include <stdio.h>
#include <math.h>

int isFun(int num);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (isFun(i))
            printf("%d ", i);
    }
    return 0;
}

int isFun(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
