//Q 4.Print strong numbers in the given range 1 to n.

#include <stdio.h>
void main() 
{
    int n = 500, i, j, digit, fact, sum;
    printf("Strong numbers are: ");

    for(i = 1; i <= n; i++) 
	{
        int num = i;
        sum = 0;

        while(num > 0) 
		{
            digit = num % 10;
            fact = 1;

            for(j = 1; j <= digit; j++) 
			{
                fact = fact * j;
            }
            sum = sum + fact;
            num = num / 10;
        }
        if(sum == i) 
		{
            printf("%d ", i);
        }
    }
}