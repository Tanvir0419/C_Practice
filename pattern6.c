/*
for triangle
if (row == n || col == 1 || row == col)
for cross
if (row == col || row + col == n + 1)
*/
#include <stdio.h>
int main()
{
    int col, row, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
