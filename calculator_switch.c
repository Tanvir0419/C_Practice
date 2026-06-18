#include <stdio.h>
int main()
{
    double num1, num2;
    char operator;
    printf("Enter a operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two numbers:");
    scanf("%lf %lf", &num1, &num2);
    switch (operator)
    {
    case '+':
        printf("The sum is: %lf\n", num1 + num2);
        break;
    case '-':
        printf("The difference is: %lf\n", num1 - num2);
        break;
    case '*':
        printf("The product is: %lf\n", num1 * num2);
        break;
    case '/':
        printf("The quotient is: %lf\n", num1 / num2);
        break;
    default:
        printf("Invalid operator.\n");
    }
}
