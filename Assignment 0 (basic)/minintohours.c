//Q 7.Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
void main()
{
	int minutes = 125, hours, remaining;
	
	hours = minutes / 60;
	remaining = minutes % 60;
	
	printf("Hours = %d\n", hours);
    printf("Remaining minutes = %d\n", remaining);
}