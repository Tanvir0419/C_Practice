#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("The character is a capital letter.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("The character is a small letter.\n");
    else
        printf("The character is neither a capital nor a small letter.\n");
}
