#include <stdio.h>
void main()
{
    int result;

    result = sumFirstLast();

    printf("Sum of first and last digit = %d", result);
}
int sumFirstLast()
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;
    return first + last;
}

