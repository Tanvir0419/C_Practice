#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for (row = 1; row <= n; row++) // descending
    {
        for (col = 1; col <= n - row; col++) // space before
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++) // letter after space
        {
            printf("%d", col);
        }
        printf("\n");
    }
    for (row = n - 1; row >= 1; row--) // ascending
    {
        for (col = 1; col <= n - row; col++) // space before
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++) // letter after space
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
