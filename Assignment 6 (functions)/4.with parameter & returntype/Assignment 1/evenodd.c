#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkEvenOdd(n);

    if (result == 1)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
}
int checkEvenOdd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

