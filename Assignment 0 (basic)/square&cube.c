//Q 6. Write a C program to find the square and cube of a given number.

#include<stdio.h>
void main()
{
	int n = 7, square, cube;
	
	square = n * n;
	cube = n * n * n;
	
	printf("Square = %d\n", square);
	printf("Cube = %d\n", cube);
}