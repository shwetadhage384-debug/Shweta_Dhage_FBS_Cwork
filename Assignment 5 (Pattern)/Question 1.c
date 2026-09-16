//Q 1.Print a solid square pattern Input: n = 4

#include<stdio.h>
void main()
{
	int n = 4, row, col;
	
	for(int row = 1; row <= n; row++)
	{
		for(int col = 1; col <= n; col++)
		    printf("* ");
		printf("\n");
	}	
}