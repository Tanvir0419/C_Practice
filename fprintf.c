#include <stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;
    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your full name and age: ");
        scanf("%s%d", &name, &age);
        fprintf(file, "Name= %s, Age= %d\n", name, age);
        fclose(file);
    }
    return 0;
}
