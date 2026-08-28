#include <stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], n, sum = 0, diff = 0;
    printf("How many row and coloumn (NxN): ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nSum Matrix:\n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    printf("\nDifference Matrix:\n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
