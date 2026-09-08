//Q 8.Write a C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>
void main()
{
	int Length = 7, Width = 3, Perimeter;
	
	Perimeter = 2 * (Length + Width);
	
	printf("Perimeter of Rectangle = %d", Perimeter);
}