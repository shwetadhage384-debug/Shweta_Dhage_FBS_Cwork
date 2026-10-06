#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkPrime(n);

    if (result == 1)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);
}
int checkPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

