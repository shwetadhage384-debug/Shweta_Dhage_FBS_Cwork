#include<stdio.h>

void main()
{
	int s1=4, s2=5, s3=6;
	
	if(s1==s2 && s2==s3)
	{
		printf("Equilateral Triangle");	
	}
	else if(s1==s2 || s2==s3 || s1==s3)
	{
		printf("Isosceles Triangle");
	}
	else
	{
		printf("Scalene Triangle");
	}
}