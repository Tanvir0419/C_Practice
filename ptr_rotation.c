#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &ptr[i]);
    }
    int first = *ptr;
    for (int i = 0; i < n - 1; i++)
    {
        ptr[i] = ptr[i + 1];
    }
    ptr[n - 1] = first;
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}
