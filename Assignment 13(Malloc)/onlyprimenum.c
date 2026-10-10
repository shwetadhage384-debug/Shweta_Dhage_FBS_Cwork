#include <stdio.h>
void main()
{
    int *a, n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0)
        return 1;

    a = malloc(n * sizeof(int));
    if (a == NULL)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printPrimes(a, n);
    free(a);
}
int isPrime(int num)
{
    int i;

    if (num < 2)
        return 0;

    for (i = 2; i <= num / i; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void printPrimes(int *a, int n)
{
    int i;

    printf("Prime numbers: ");
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
            printf("%d ", a[i]);
    }
}
