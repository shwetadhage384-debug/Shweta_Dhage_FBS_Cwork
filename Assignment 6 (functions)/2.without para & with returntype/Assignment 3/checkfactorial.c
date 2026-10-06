#include <stdio.h>
void main()
{
    int result;

    result = factorial();

    printf("Factorial = %d", result);
}
int factorial()
{
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

