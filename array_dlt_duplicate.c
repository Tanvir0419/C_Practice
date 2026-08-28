#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30, 30, 40, 50}, n = 6, p = -1;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[j] == arr[j + 1])
            {
                p = j;
            }
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
        printf("No duplicate found\n");
    }
    return 0;
}
