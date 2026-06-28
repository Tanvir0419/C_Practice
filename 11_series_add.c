#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the last number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("1+2+3+4+.....+%d=%d", n, sum);
}
