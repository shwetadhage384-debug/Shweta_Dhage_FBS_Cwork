#include<stdio.h>

void main()
{
	int n = 9;
	
	if(n % 3 == 0) 
	{
		if(n % 5 == 0)
		{
			printf("Divisible by both");
		}
	    else
	    {
		    printf("Divisible by 3 but not by 5");	
	    }
    }
	else
	{
		if(n % 5 == 0)
		{
			printf("Divisible by 5 but not by 3");
		}
		else
		{
			printf("Divisible by zero");
		}
	}
}