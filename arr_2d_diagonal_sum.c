#include <stdio.h>
int main()
{
    int arr[10][10], row, col, n, left_sum = 0, right_sum = 0;
    printf("Enter the size of the matrix(N X N,max 10): ");
    scanf("%d", &n);
    printf("Enter a %dX%d matrix: \n", n, n);

    for (row = 0; row <= n - 1; row++)
    {
        for (col = 0; col <= n - 1; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }

    // left
    for (row = 0; row <= n - 1; row++)
    {
        for (col = 0; col <= n - 1; col++)
        {
            if (row == col)
            {
                left_sum = left_sum + arr[row][col];
            }
        }
    }
    printf("sum of left diagonal= %d\n", left_sum);

    // right
    for (row = 0; row <= n - 1; row++)
    {
        for (col = 0; col <= n - 1; col++)
        {
            if (row + col == n - 1)
            {
                right_sum = right_sum + arr[row][col];
            }
        }
    }
    printf("sum of right diagonal= %d\n", right_sum);
    return 0;
}
