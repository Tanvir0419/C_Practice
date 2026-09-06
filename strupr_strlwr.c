#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Tanvir Hossain";
    char s2[] = "Tanvir Hossain";

    strupr(s1);
    strlwr(s2);

    printf("%s\n", s1);
    printf("%s\n", s2);
}
