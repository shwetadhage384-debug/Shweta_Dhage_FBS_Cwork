#include <stdio.h>
void main()
{
    int result;

    result = checkStrong();

    if(result == 1)
        printf("Number is Strong");
    else
        printf("Number is Not Strong");
}
int checkStrong()
{
    int n, original, digit, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;

        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == original)
        return 1;
    else
        return 0;
}
