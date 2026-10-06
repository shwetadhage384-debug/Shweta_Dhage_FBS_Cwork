#include <stdio.h>
void main()
{
    int n = 7;

    checkPrime(n);
}
void checkPrime(int n)
{
    int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);
}

