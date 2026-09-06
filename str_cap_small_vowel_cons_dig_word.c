#include <stdio.h>

int main()
{
    char s[100];
    int i = 0, vowel = 0, consonant = 0, capital = 0, small = 0, word = 0, digit = 0, other = 0;

    printf("Enter a string: ");
    gets(s);

    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            consonant++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit++;
        }
        else if (s[i] == ' ')
        {
            word++;
        }
        else
        {
            other++;
        }

        i++;
    }

    if (i > 0)
    {
        word = word + 1;
    }

    printf("No of vowels= %d\n", vowel);
    printf("No of consonant= %d\n", consonant);
    printf("No of capital= %d\n", capital);
    printf("No of small= %d\n", small);
    printf("No of digit= %d\n", digit);
    printf("No of word= %d\n", word);
    printf("No of other= %d\n", other);

    return 0;
}
