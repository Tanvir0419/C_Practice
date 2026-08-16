#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks entered.");
    else if (marks >= 80 && marks <= 100)
        printf("Grade A+");
    else if (marks >= 70 && marks < 80)
        printf("Grade A");
    else if (marks >= 60 && marks < 70)
        printf("Grade A-");
    else if (marks >= 50 && marks < 60)
        printf("Grade B");
    else if (marks >= 40 && marks < 50)
        printf("Grade C");
    else
        printf("Grade F");
}
