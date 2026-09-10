//Q 5.Check the given number is Armstrong number or not.. Input: n = 153

#include<stdio.h>
void main()
{
	int n = 153, original, reminder, sum = 0;
	original = n;
	
	while(n > 0)
	{
		reminder = n % 10;
		sum = sum + (reminder * reminder * reminder);
		n = n / 10;
	}
	if(sum == original)
	    printf("Armstrong");
	else
	    printf("Not Armstrong");
}