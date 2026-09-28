#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[20] = "Tanvir Hossain";
    int length = strlen(name);
    file = fopen("test.txt", "w"); // a= add with existing file,  r= read, w= overwrite
    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened & written succesfully\n");
        for (int i = 0; i <= length - 1; i++)
        {
            fputc(name[i], file);
        }
        fclose(file);
    }
    return 0;
}
