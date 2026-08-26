#include <stdio.h>
int main()
{
    int num[] = {5, 4, 3, 2, 1}, i, j, temp;
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4 - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
