#include <stdio.h>
int main()
{
    int num[] = {1, 4, 3, 2, 1}, n, i, found = 0;
    printf("Searching number: ");
    scanf("%d", &n);
    for (i = 0; i <= 4; i++)
    {
        if (n == num[i])
        {
            printf("Found in %d position\n", i);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Not Found\n");
    }
    return 0;
}
