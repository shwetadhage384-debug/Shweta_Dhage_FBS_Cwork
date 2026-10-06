#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkStrong(n);

    if (result == 1)
        printf("%d is Strong Number", n);
    else
        printf("%d is Not Strong Number", n);
}
int checkStrong(int n)
{
    int original, digit, sum = 0, i, fact;

    original = n;

    while (n > 0)
    {
        digit = n % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }
    if (sum == original)
        return 1;
    else
        return 0;
}

