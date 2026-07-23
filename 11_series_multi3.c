// 1+ 1/2+ 1/3+...+n
#include <stdio.h>
int main()
{
    double i, n, sum = 0;
    scanf("%lf", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / i;
        if (i == 1)
            printf("1 +");
        else if (i == n)
            printf("1/%.2lf", i);
        else
            printf("1/%.2lf +", i);
    }
    printf("= %.2lf\n", sum);
    return 0;
}
