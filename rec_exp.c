#include <stdio.h>
int result = 1;
void power(int x, int n);

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    power(x, n);
    printf("%d", result);
    return 0;
}

void power(int x, int n)
{
    if (n == 0)
        return;
    else
    {
        result = result * x;
        power(x, n - 1);
    }
}
