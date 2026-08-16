#include <stdio.h>
int Strong(int num)
{
    int i, rem, temp, sum = 0;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        int fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    return sum == num;
}
int main()
{
    int num;
    scanf("%d", &num);
    if (Strong(num))
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }
    return 0;
}
