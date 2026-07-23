// 0 1 1 2 3 5 ....
#include <stdio.h>
int main()
{
    int i, n, f = 0, s = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n == 1)
        printf("0");
    else if (n >= 2)
        printf("0 1 ");
    for (i = 3; i <= n; i++)
    {
        next = f + s;
        printf("%d ", next);
        f = s;
        s = next;
    }
    return 0;
}
