#include <stdio.h>

int main()
{
    int arr[10][10], n, max, min, max2;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    min = arr[0][0];

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    max2 = min;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] > max2 && arr[i][j] < max)
            {
                max2 = arr[i][j];
            }
        }
    }
    printf("2nd Max: %d\n", max2);

    return 0;
}
