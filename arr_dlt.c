#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30, 40, 50}, n = 5, p = -1, x;
    printf("Which element to delete: ");
    scanf("%d", &x);

    for (int i = 0; i <= n - 1; i++)
    {
        if (x == arr[i])
        {
            p = i;
        }
    }

    if (p != -1)
    {
        for (int i = p; i <= n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        for (int i = 0; i <= n - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}
