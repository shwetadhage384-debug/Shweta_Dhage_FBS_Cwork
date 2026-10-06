#include <stdio.h>
void main()
{
    int result;

    result = checkArmstrong();

    if(result == 1)
        printf("Number is Armstrong");
    else
        printf("Number is Not Armstrong");
}
int checkArmstrong()
{
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

