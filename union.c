#include <stdio.h>
int main()
{
    int A[100], B[100], U[200];
    int n, m, i, j, k, duplicate;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        U[i] = A[i];
    }

    k = n;

    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &B[i]);

    for (i = 0; i < m; i++)
    {
        duplicate = 0;
        for (j = 0; j < k; j++)
        {
            if (B[i] == U[j])
                duplicate = 1;
        }
        if (duplicate == 0)
        {
            U[k] = B[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
        printf("%d ", U[i]);
    return 0;
}
