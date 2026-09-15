#include <stdio.h>
void changevalue(int *p);
int main()
{
    int num = 1;
    changevalue(&num);
    printf("%d", num);
}
void changevalue(int *p)
{
    *p = 2;
}
