#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkPerfect(n);

    if (result == 1)
        printf("%d is Perfect Number", n);
    else
        printf("%d is Not Perfect Number", n);
}
int checkPerfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

