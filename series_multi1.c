// 1^3 X 3^3 X 5^3 X....X n^3
#include <stdio.h>
int main()
{
    int i, sum = 1, n;
    printf("Enter the last number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum * i * i * i;
    }
    printf("Sum=%d", sum);
}
