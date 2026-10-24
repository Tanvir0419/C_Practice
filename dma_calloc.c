#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float *marks, sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = (float *)calloc(n, sizeof(float));

    if (marks == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }

    avg = sum / n;
    printf("Average marks = %.2f", avg);
    free(marks);
    return 0;
}
