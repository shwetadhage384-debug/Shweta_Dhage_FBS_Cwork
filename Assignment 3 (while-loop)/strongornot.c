//Q 8.Check the given number is Strong number or not. Input: n = 145

#include <stdio.h>
void main() 
{
    int n = 145, original, digit, fact, sum = 0, i;
    original = n;

    while(n > 0)
	{
        digit = n % 10;
        fact = 1;
        i = 1;

        while(i <= digit) 
		{
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == original)
        printf("Strong");
    else
        printf("Not Strong");
}