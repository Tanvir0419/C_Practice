#include <stdio.h>
int main()
{
    char choice;
    float celsius, farhenheit;

    printf("1 for Celsius to Fahrenheit\n");
    printf("2 for Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '1':
    {
        printf("Enter a Celsius temprature:");
        scanf("%f", &celsius);
        farhenheit = (celsius * 9 / 5) + 32;
        printf("The temprature in Fahrenheit is: %f\n", farhenheit);
        break;
    }
    case '2':
    {
        printf("Enter a Fahrenheit temprature:");
        scanf("%f", &farhenheit);
        celsius = (farhenheit - 32) * 5 / 9;
        printf("The temprature in Celsius is: %f\n", celsius);
        break;
    }
    default:
        printf("Invalid choice\n");
        break;
    }
}
