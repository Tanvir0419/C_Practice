#include <stdio.h>
int main()
{
    char s1[50] = "Tanvir ";
    char s2[] = "Hossain";
    int i = 0, j = 0, length = 0;
    while (s1[i] != '\0')
    {
        i++;
        length++;
    }
    while (s2[j] != '\0')
    {
        s1[length + j] = s2[j];
        j++;
    }
    printf("%s", s1);
}
