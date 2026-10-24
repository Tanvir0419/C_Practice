#include <stdio.h>
int main()
{
    FILE *fp;
    int n, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "w");
    printf("Enter numbers (-1 to stop):\n");
    scanf("%d", &n);

    while (n != -1)
    {
        fprintf(fp, "%d ", n);
        scanf("%d", &n);
    }
    fclose(fp);

    fp = fopen("numbers.txt", "r");
    // stops when there is no more integers
    while (fscanf(fp, "%d", &n) == 1)
    {
        sum = sum + n;
        count++;
    }
    fclose(fp);

    avg = (float)sum / count;
    printf("Average = %.2f", avg);
    return 0;
}
