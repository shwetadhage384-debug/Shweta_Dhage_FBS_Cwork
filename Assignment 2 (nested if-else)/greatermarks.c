#include<stdio.h>

void main()
{
	int marks = 86;
	
	if(marks >= 75)
	{
		printf("Distinction");	
	}
	else
	{
		if(marks >= 65)
		{
			printf("First class");
		}
		else
		{
			if(marks >= 55)
			{
				printf("Second Class");
			}
			else
			{
				if(marks >= 40)
				{
					printf("Pass");
				}
				else
				{
					if(marks < 40)
					{
						printf("Fail");
					}
					
				}
			}
		}
	}
}