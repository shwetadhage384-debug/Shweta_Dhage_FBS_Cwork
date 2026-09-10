//Q 6.Check the given number is Perfect number or not. Input: n = 28

#include<stdio.h>
void main()
{
	int n = 28, i = 1, sum = 0;
	
	while(i < n)
	{
		if(n%i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}