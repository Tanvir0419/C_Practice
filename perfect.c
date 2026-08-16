#include <stdio.h>
int perfect(int n);
int main()
{
    int num;
    scanf("%d", &num);
    if (perfect(num))
    {
        printf("perfect number\n");
    }
    else
    {
        printf("Not a perfect number\n");
    }
    return 0;
}
int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}
