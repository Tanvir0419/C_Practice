#include <stdio.h>
int main()
{
    FILE *file;
    char ch[100];
    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened\n");

        while (fgets(ch, 100, file) != NULL)
        {
            printf("%s\n", ch);
        }
        fclose(file);
    }
    return 0;
}
