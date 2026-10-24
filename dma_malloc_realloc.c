#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, *temp;
    int i, j, t;

    a = (int *)malloc(5 * sizeof(int));
    if (a == NULL)
    {
        return 1;
    }

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    temp = (int *)realloc(a, 10 * sizeof(int));
    if (temp == NULL)
    {
        free(a);
        return 1;
    }
    a = temp;

    printf("Enter 5 more integers:\n");
    for (i = 5; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Sorted numbers: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}
