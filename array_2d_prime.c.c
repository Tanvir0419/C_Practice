#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10][10], r, c, sum = 0;
    printf("Enter row and column: ");
    scanf("%d%d", &r, &c);

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            int count = 0;
            if (arr[i][j] <= 1)
            {
                count++;
            }

            else
            {
                for (int k = 2; k <= sqrt(arr[i][j]); k++)
                {
                    if (arr[i][j] % k == 0)
                    {
                        count++;
                        break;
                    }
                }
            }

            if (count == 0)
            {
                printf("%d is a prime number\n", arr[i][j]);
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum is %d\n", sum);
    return 0;
}
