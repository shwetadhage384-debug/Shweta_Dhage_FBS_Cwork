#include <stdio.h>
void main()
{
    int n = 145;

    checkStrong(n);
}
void checkStrong(int n)
{
    int temp, digit, i, fact, sum = 0;

    temp = n;

    while(n > 0)
    {
        digit = n % 10;

        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == temp)
        printf("%d is a Strong Number", temp);
    else
        printf("%d is Not a Strong Number", temp);
}

