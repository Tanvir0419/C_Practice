/*
print row for
    1
    2 2
    3 3 3
print col%2 for
    1
    1 0
    1 0 1
print col+64 for
    A
    A B
    A B C
print col+96 for
    a
    a b
    a b c
*/
#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}
