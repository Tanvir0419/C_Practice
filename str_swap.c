#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50] = "Tanvir ";
    char s2[50] = "Hossain ";
    char temp[50];

    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);

    printf("%s", s1);
    printf("%s", s2);
}
