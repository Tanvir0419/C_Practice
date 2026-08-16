#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }
    printf("Reverse number is %d\n", sum);
    if (num == sum)
        printf("This is a palindrome number");
    else
        printf("This is not a palindrome number");
}
