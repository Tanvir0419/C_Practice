#include <stdio.h>
int main()
{
    int n, i, arr[100];
    printf("Enter the total digit you want to see in series: ");
    scanf("%d", &n);

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i <= n - 1; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }

    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
