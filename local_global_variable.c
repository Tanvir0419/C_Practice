#include <stdio.h>
int a = 10; // global variable
int main()
{
    printf("inside the main function a=%d\n", a);
    display();
}
void display()
{
    printf("Inside the display function a=%d\n", a);
}
