#include <stdio.h>
int main()
{
    int arr[10][10], row, col, n;
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
    for (row = 0; row <= n - 1; row++)
    {
        int sum = 0;
        for (col = 0; col <= n - 1; col++)
        {
            sum = sum + arr[row][col];
        }
        printf("sum of row %d= %d\n", row + 1, sum);
    }
    for (col = 0; col <= n - 1; col++)
    {
        int sum = 0;
        for (row = 0; row <= n - 1; row++)
        {
            sum = sum + arr[row][col];
        }
        printf("sum of column %d= %d\n", col + 1, sum);
    }
    return 0;
}
