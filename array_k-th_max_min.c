#include <stdio.h>
int main()
{
    int arr[100], n, x, temp;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i <= n - 1; i++) // sorting
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position of min-max you want to find: ");
    scanf("%d", &x);

    printf("Position %d minimum is: %d\n", x, arr[x - 1]);
    printf("Position %d maximum is: %d\n", x, arr[n - x]);
    return 0;
}
