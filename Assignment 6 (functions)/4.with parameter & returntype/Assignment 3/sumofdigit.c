#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sumFirstLast(n);
    printf("Sum of first and last digit = %d", result);
}
int sumFirstLast(int n)
{
    int first, last;

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    return first + last;
}

