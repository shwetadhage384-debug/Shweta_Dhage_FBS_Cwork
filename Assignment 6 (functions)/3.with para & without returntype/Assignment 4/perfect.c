#include <stdio.h>
void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    perfect(n);
}
void perfect(int n)
{
    int i, j, sum;

    printf("Perfect numbers are: ");

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}

