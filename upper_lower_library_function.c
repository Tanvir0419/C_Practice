#include <stdio.h>
int main()
{
    char upper, lower;
    printf("Enter any Uppercase letter:");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("The lowercase letter is:%c", lower);
    return 0;
}
