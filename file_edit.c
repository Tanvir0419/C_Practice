#include <stdio.h>
int main()
{
    FILE *fp;
    char str[1000];
    int ch, i, j;

    fp = fopen("E:\\source.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    for (i = 0; (ch = fgetc(fp)) != EOF; i++)
    {
        str[i] = ch;
    }
    fclose(fp);

    fp = fopen("E:\\source.txt", "w");
    if (fp == NULL)
    {
        return 1;
    }

    for (j = 0; j < i; j++)
    {
        // if (isalnum(str[i])) to use this we have to use #include<ctype.h>
        if ((str[j] >= 'A' && str[j] <= 'Z') ||
            (str[j] >= 'a' && str[j] <= 'z') ||
            (str[j] >= '0' && str[j] <= '9'))
        {
            // fprintf(fp, "%c", str[j]);
            fputc(str[j], fp);
        }
    }
    fclose(fp);
    return 0;
}
