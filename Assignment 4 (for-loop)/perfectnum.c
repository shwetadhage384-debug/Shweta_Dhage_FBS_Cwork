//Q 3.Print perfect numbers in the given range 1 to n.

#include <stdio.h>
void main() 
{
    int n = 500, i, j, sum;
    printf("Perfect numbers are: ");

    for(i = 1; i <= n; i++) 
	{
        sum = 0;

        for(j = 1; j < i; j++) 
		{
            if(i % j == 0) 
			{
                sum = sum + j;
            }
        }
        if(sum == i) 
		{
            printf("%d ", i);
        }
    }
}