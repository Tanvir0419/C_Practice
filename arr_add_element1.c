#include <stdio.h>
int main()
{
    int arr[100], n, p, x;
    printf("How many elements: ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Which element to add: ");
    scanf("%d", &x);

    printf("In which position you want to add new element: ");
    scanf("%d", &p);

    for (int i = n - 1; i >= p - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[p - 1] = x;
    n++;

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
