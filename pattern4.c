/*
for  floyd's triangle
1
2 3
4 5 6
7 8 9 10
printf("%d",++count)
if 0 is needed then count++
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
            printf("%d ", row * col);
        }
        printf("\n");
    }
    return 0;
}
