#include <stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10] = 0, r1, r2, c1, c2;
    printf("Enter row and column for 1st matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter row and column for 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Invalid\n");
        return 0;
    }

    printf("\nEnter elements for 1st matrix\n");
    for (int i = 0; i <= r1 - 1; i++)
    {
        for (int j = 0; j <= c1 - 1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements for 2nd matrix\n");
    for (int i = 0; i <= r2 - 1; i++)
    {
        for (int j = 0; j <= c2 - 1; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMultiplication matrix\n");
    for (int i = 0; i <= r1 - 1; i++)
    {
        for (int j = 0; j <= c2 - 1; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k <= c1 - 1; k++)
            {
                mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
            }
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
