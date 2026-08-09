#include <stdio.h>
int main()
{
    int i, n = 7, t1 = 0, t2 = 1, next, sum = 0;
    for (i = 1; i <= n; i++)
    {
        printf("%d", t1);
        if (i == n)
        {
            printf("=");
        }
        else
        {
            printf("+");
        }
        sum = sum + t1;
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("%d\n", sum);
    return 0;
}
