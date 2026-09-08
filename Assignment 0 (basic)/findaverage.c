//Q5. write a c program to input five numbers and find their average.
#include<stdio.h>

void main()
{
	float a,b,c,d,e,average;
	
	printf("Enter Five Numbers: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	
	average = (a + b + c + d + e) / 5;
	
	printf("Average = %f",average);
}