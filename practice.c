#include <stdio.h>
struct DATE
{
    int day;
    int month;
    int year;
};
struct STUDENT
{
    int id;
    char name[50];
    struct DATE dob;
};

int main()
{
    struct STUDENT list[10];
    int oldest = 0;

    for (int i = 0; i <= 9; i++)
    {
        printf("Enter student id: ");
        scanf("%d", &list[i].id);
        printf("Enter name: ");
        scanf("%s", list[i].name);
        printf("Enter date of birth (DD MM YYYY): ");
        scanf("%d%d%d", &list[i].dob.day, &list[i].dob.month, &list[i].dob.year);
    }

    for (int i = 0; i <= 9; i++)
    {
        if (list[i].dob.year < list[oldest].dob.year)
        {
            oldest = i;
        }
        else if (list[i].dob.year == list[oldest].dob.year)
        {
            if (list[i].dob.month < list[oldest].dob.month)
            {
                oldest = i;
            }
            else if (list[i].dob.month == list[oldest].dob.month)
            {
                if (list[i].dob.day < list[oldest].dob.day)
                {
                    oldest = i;
                }
            }
        }
    }
    printf("\n");
    printf("The oldest student details:\n");
    printf("\n");
    printf("ID: %d\n", list[oldest].id);
    printf("Name: %s\n", list[oldest].name);
    printf("Date of Birth: %02d/%02d/%04d\n", list[oldest].dob.day, list[oldest].dob.month, list[oldest].dob.year);

    return 0;
}
