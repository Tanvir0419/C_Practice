#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30, 20, 40, 20, 50}, n = 7, i, j, max = arr[0], min = arr[0], count, max_count = 0, mode;
    float median;
    // Max & MIn
    for (i = 0; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    // Mode
    for (i = 0; i <= n - 1; i++)
    {
        count = 0;
        for (j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count > max_count)
            {
                max_count = count;
                mode = arr[i];
            }
        }
    }
    // Sort for median
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if ((n - 1) % 2 == 0)
    {
        median = arr[n / 2];
    }
    else
    {
        median = (float)(arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    printf("%d is max\n", max);
    printf("%d is min\n", min);
    printf("%d is mode\n", mode);
    printf("%.2f is median\n", median);
    return 0;
}
