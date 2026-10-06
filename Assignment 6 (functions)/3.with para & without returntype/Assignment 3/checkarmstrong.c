#include <stdio.h>
void main()
{
    int n = 153;

    checkArmstrong(n);
}
void checkArmstrong(int n)
{
    int temp, digit, sum = 0;

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if(sum == temp)
        printf("%d is an Armstrong Number", temp);
    else
        printf("%d is Not an Armstrong Number", temp);
}

