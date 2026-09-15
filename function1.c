#include <stdio.h>
int func(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num >>= 1;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", func(n));
}
