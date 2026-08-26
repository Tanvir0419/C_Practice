#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30, 40, 50}, x, p, n = 5;
    printf("Which element to add: ");
    scanf("%d", &x);
    p = n + 1; // if the new element is bigger than all other element then it will move to last position
    for (int i = 0; i <= 4; i++)
    {
        if (x < arr[i])
        {
            p = i + 1;
            break;
        }
    }

    for (int i = n - 1; i >= p - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[p - 1] = x;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
