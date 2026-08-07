#include <stdio.h>
int main()
{
    float u, e, sum = 0;
    printf("Enter Total used unit: ");
    scanf("%f", &u);
    if (u <= 100)
    {
        sum = u * 5;
    }
    else if (u <= 300)
    {
        sum = 100 * 5 + (u - 100) * 7;
    }
    else
    {
        sum = 100 * 5 + 200 * 7 + (u - 300) * 10;
    }
    if (sum > 2000)
    {
        sum = sum + sum * .1;
    }
    printf("%f\n", sum);
    return 0;
}
