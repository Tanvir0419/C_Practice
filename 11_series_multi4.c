// 1-2+3-4+5-6+....
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = (sum + pow(-1, i + 1) * i);
    }
    printf("%d", sum);
    return 0;
}

/* another efficient way
for (i = 1; i <= n; i++)
{
    if (i % 2 != 0) {
        sum = sum + i;  // Add odd numbers (1, 3, 5...)
    } else {
        sum = sum - i;  // Subtract even numbers (2, 4, 6...)
    }
}
*/
