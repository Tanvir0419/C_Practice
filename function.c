#include <stdio.h>
float power(float base, float exp);
int main()
{
    float base, exp;
    scanf("%f %f", &base, &exp);
    printf("%.2f\n", power(base, exp));
    return 0;
}

float power(float base, float exp)
{
    float result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}
