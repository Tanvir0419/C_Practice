#include <stdio.h>
int main()
{
    int arr[100], n, f, position = -1;
    printf("How many elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Which element you want to find: ");
    scanf("%d", &f);

    for (int i = 0; i < n; i++)
    {
        if (f == arr[i])
        {
            position = i + 1;
            break;
        }
    }

    if (position != -1)
    {
        printf("Found in position %d\n", position);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
