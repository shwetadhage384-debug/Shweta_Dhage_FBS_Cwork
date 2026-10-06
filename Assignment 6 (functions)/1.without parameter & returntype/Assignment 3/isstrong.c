#include <stdio.h>
void main() 
{
	isStrong();
}
void isStrong()
{
    int n, original, digit, fact, sum = 0, i;
    printf("Enter a number:");
	scanf("%d", &n);
	
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