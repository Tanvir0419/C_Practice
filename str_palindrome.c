#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "madam";
    char s2[30];
    int i = 0, j, k = 0, length = 0;

    while (s1[i] != '\0')
    {
        i++;
        length++;
    }
    for (j = length - 1; j >= 0; j--)
    {
        s2[k] = s1[j];
        k++;
    }
    s2[k] = '\0';
    printf("%s\n", s2);
    int comp = strcmp(s1, s2);
    if (comp == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
}
