//Q 2.Write a C program to find the area of a circle.
#include<stdio.h>

void main()
{
	float radius = 5, area;
	float pi = 3.14;
	
	area = pi * radius * radius;
	
	printf("Area of Circle = %f", area);
}