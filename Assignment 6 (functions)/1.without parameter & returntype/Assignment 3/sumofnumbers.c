#include<stdio.h>
void main()
{
	sumofNumbers();
}
void sumofNumbers()
{
	int start = 1, end = 5, sum = 0;
	
	while(start <= end)
	{
		sum = sum + start;
		start++;
	}
	printf("Sum = %d",sum);
}