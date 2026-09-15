#include <stdio.h>
void process(int n, int *count, int *reverse);
int main()
{
    int n;
    scanf("%d", &n);
    int count, reverse;
    process(n, &count, &reverse);
    printf("%d %d", count, reverse);
    return 0;
}
void process(int n, int *count, int *reverse)
{
    *count = 0, *reverse = 0;
    while (n > 0)
    {
        *reverse = (*reverse * 10) + (n % 10);
        (*count)++;
        n /= 10;
    }
}
