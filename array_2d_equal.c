#include <stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], r1, c1, r2, c2, equal = 1;

    printf("Enter the number of r1 & c1: ");
    scanf("%d%d", &r1, &c1);
    for (int i = 0; i <= r1 - 1; i++)
    {
        for (int j = 0; j <= c1 - 1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of r2 & c2: ");
    scanf("%d%d", &r2, &c2);
    for (int i = 0; i <= r2 - 1; i++)
    {
        for (int j = 0; j <= c2 - 1; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (r1 != r2 || c1 != c2)
    {
        equal = 0;
    }
    else
    {
        for (int i = 0; i <= r2 - 1; i++)
        {
            for (int j = 0; j <= c2 - 1; j++)
            {
                if (mat1[i][j] != mat2[i][j])
                {
                    equal = 0;
                    break;
                }
            }
            if (equal == 0)
            {
                break;
            }
        }
    }
    if (equal == 1)
    {
        printf("Matrices are equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
    return 0;
}
