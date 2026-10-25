#include <stdio.h>
int result = 1;
void fact(int n);

int main()
{
    int n;
    scanf("%d", &n);
    fact(n);
    printf("%d", result);
    return 0;
}

void fact(int n)
{
    if (n == 0)
        return;
    else
    {
        result = result * n;
        fact(n - 1);
    }
}
