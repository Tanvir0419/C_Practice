#include <stdio.h>
int main()
{
    FILE *file;
    char name[20];
    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your full name: ");
        gets(name);
        fputs(name, file);
        fclose(file);
    }
    return 0;
}
