//Q 2.Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
void main()
{
	int num, first, last;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    first = num / 100;
    last = num % 10;

    if (first == last)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is Not Palindrome");
    }
}