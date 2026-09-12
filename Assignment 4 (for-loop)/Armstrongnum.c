//Q 1.Print armstrong numbers in the given range 1 to n.

#include <stdio.h>
void main() 
{
    int n = 1000, num, digit, sum;

    printf("Armstrong numbers are: ");

    for(int i = 1; i <= n; i++) 
	{
        num = i;
        sum = 0;
        
        while(num > 0) 
		{
            digit = num % 10;
            sum = sum + (digit * digit * digit);
            num = num / 10;
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }
}