#include <stdio.h>
int main()
{
    char s[] = "Tanvir";
    int i = 0, length = 0;
    while (s[i] != '\0')
    {
        i++;
        length++;
    }
    printf("%d\n", length);
}
