#include <stdio.h>
int main()
{
    int a = 1, b = 2, sum = 0, n1, n2;
    printf("Enter n1 and n2:");
    scanf("%d%d", &n1, &n2);
    while (a <= n1 && b <= n2)
    {
        sum = sum + a * b;
        a++;
        b++;
    }
    printf("1*2+2*3+3*4+....+%d*%d=%d", n1, n2, sum);
}
