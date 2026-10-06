#include <stdio.h>
void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkArmstrong(n);

    if (result == 1)
        printf("%d is Armstrong Number", n);
    else
        printf("%d is Not Armstrong Number", n);
}
int checkArmstrong(int n)
{
    int original, digit, sum = 0;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if (sum == original)
        return 1;
    else
        return 0;
}

