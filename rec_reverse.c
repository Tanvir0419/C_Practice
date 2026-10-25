#include <stdio.h>
int result = 0;
void reverse(int n);

int main()
{
    int n;
    scanf("%d", &n);
    reverse(n);
    printf("%d", result);
    return 0;
}

void reverse(int n)
{
    if (n == 0)
        return;
    else
    {
        result = result * 10 + n % 10;
        reverse(n / 10);
    }
}
