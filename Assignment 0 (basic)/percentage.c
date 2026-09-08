//Q 10.Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

#include<stdio.h>
void main()
{
	float S1=80, S2=75, S3=90, S4=85, S5=70, total, percentage;
	
	total = S1 + S2 + S3 + S4 + S5;
	percentage = total / 5;
	
	printf("Total Marks = %f\n", total);
    printf("Percentage = %f%%", percentage);
}