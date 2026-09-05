#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Tanvir";
    char s2[] = "Hossain";
    int result = strcmp(s1, s2);
    if (result == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
}
