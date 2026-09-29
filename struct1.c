#include <stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct person person[4];

    for (int i = 0; i <= 4 - 1; i++)
    {
        printf("Enter name, age and salary for person %d: ", i + 1);
        scanf("%s%d%f", &person[i].name, &person[i].age, &person[i].salary);
    }

    for (int i = 0; i <= 4 - 1; i++)
    {
        printf("Information for person %d: ", i + 1);
        printf("Name= %s, Age= %d, Salary= %.2f\n", person[i].name, person[i].age, person[i].salary);
    }
    return 0;
}
