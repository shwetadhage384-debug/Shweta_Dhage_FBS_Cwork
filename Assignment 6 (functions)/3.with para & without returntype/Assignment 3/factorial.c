#include <stdio.h>
void main()
{
    int n = 5;
    factorial(n);
}
void factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
}

