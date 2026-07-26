#include <stdio.h>
double calculatepower(double base, double exp);
int main()
{
    double base, exp, result;
    scanf("%lf %lf", &base, &exp);
    result = calculatepower(base, exp);
    printf("%.2lf\n", result);
    return 0;
}

double calculatepower(double base, double exp)
{
    double result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}
