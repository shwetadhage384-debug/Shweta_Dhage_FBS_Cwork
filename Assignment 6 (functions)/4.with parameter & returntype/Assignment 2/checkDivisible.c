#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkDivisible(n);

    if (result == 1)
        printf("Divisible by both");
    else if (result == 2)
        printf("Divisible by 3 but not by 5");
    else if (result == 3)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}
int checkDivisible(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        return 1;
    else if (n % 3 == 0)
        return 2;
    else if (n % 5 == 0)
        return 3;
    else
        return 4;
}

