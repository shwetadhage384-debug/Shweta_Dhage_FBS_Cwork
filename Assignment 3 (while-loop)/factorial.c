//Q 7.Find factorial of given number. Input: n = 5

#include<stdio.h>
void main()
{
	int n = 5, i = 1, fact = 1;
	
	while(i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("Factorial = %d", fact);
}