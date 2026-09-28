#include <stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age, number, num;
    file = fopen("test.txt", "a");

    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter total number of students: ");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {
            printf("Enter student name: ");
            scanf("%s", &name);
            printf("Enter Student age: ");
            scanf("%d", &age);
            printf("Enter student number: ");
            scanf("%d", &number);

            fprintf(file, "\n%s\t\t%d\t%d\n", name, age, number);
        }
    }
    return 0;
}
