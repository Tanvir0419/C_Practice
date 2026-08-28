#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30, 20, 40, 20, 50}, n = 7, max = arr[0], min = arr[0], count, max_count = 0, mode, temp;
    float median;

    // Max & MIn
    for (int i = 0; i <= n - 1; i++)
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
    printf("%d is max\n", max);
    printf("%d is min\n", min);

    // Mode
    for (int i = 0; i <= n - 1; i++)
    {
        count = 0;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            mode = arr[i];
        }
    }
    printf("%d is mode\n", mode);

    // Sort for median
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
    if ((n - 1) % 2 == 0) // n is odd
    {
        median = arr[n / 2];
    }
    else
    {
        median = (arr[n / 2] + arr[n / 2 - 1]) / 2.0; // n is even
    }
    printf("%.2f is median\n", median);
    return 0;
}
