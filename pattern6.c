#include <stdio.h>
int main()
{
    int n, col, row;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++) // space
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++) // digit
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
