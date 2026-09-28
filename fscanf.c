#include <stdio.h>
int main()
{
    FILE *file;
    char name[20];
    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened\n");
        fscanf(file, "%s", &name);
        printf("%s\n", name);
        fclose(file);
    }
    return 0;
}
