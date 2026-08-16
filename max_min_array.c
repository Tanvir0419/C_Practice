#include <stdio.h>
int main()
{
    int number[] = {5, 6, 7, 8, 9, 69};
    int lengthofArray = sizeof(number) / sizeof(number[0]);
    int max = number[0];
    int min = number[0];
    for (int i = 1; i < lengthofArray; i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
        if (min > number[i])
        {
            min = number[i];
        }
    }
    printf("%d is max\n", max);
    printf("%d is min\n", min);
    return 0;
}
