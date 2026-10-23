#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], w[20][20];
    int word = 0, letter = 0;
    int count, max = 0, pos = 0;

    printf("Enter a sentence: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            w[word][letter] = s[i];
            letter++;
        }
        else if (letter > 0)
        {
            w[word][letter] = '\0';
            word++;
            letter = 0;
        }
    }

    if (letter > 0)
    {
        w[word][letter] = '\0';
        word++;
    }

    for (int i = 0; i < word; i++)
    {
        count = 0;
        for (int j = 0; j < word; j++)
        {
            if (strcmp(w[i], w[j]) == 0)
            {
                count++;
            }
        }

        if (count > max)
        {
            max = count;
            pos = i;
        }
    }

    printf("Most frequent word: %s\n", w[pos]);
    return 0;
}
