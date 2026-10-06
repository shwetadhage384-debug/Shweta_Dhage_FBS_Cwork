#include <stdio.h>
void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    strong(n);
}
void strong(int n)
{
    int i, temp, digit, j, fact, sum;

    printf("Strong numbers are: ");

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;

            fact = 1;

            for(j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
            temp = temp / 10;
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}
