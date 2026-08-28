#include <stdio.h>
int main()
{
    int arr[100], n, x, p = -1;
    printf("How many elements: ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Which element you want to find: ");
    scanf("%d", &x);

    for (int i = 0; i <= n - 1; i++)
    {
        if (x == arr[i])
        {
            p = i + 1;
            break;
        }
    }

    if (p != -1)
    {
        printf("Found in position %d\n", p);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
