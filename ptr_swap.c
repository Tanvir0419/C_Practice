#include <stdio.h>
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int x = 5, y = 6;
    swap(&x, &y);
    printf("%d %d", x, y);
}
