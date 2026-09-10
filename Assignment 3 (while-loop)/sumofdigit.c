//Q 10.Find Sum of first and last digit of given number. Input: n = 12345

#include<stdio.h>
void main() 
{
    int n = 12345, first, last, sum;
    last = n % 10;

    while(n >= 10) 
	{
        n = n / 10;
    }

    first = n;
    sum = first + last;

    printf("Sum = %d", sum);
}