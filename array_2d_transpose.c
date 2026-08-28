#include <stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10],n;
    printf("Enter the number of row and coloumn (NxN): ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nTranspose matrix\n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            mat2[i][j] = mat1[j][i];
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
