//Q 5.Write a menu driven program to take a number for user and perform operations as follows.

#include <stdio.h>
void main() 
{
    int n, choice, i, digit, reverse, sum, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            if(n % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            flag = 0;

            if(n <= 1)
                flag = 1;

            for(i = 2; i < n; i++) 
			{
                if(n % i == 0) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            reverse = 0;

            for(i = n; i > 0; i = i / 10) 
			{
                digit = i % 10;
                reverse = reverse * 10 + digit;
            }
            if(reverse == n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(n > 0)
                printf("Positive");
            else if(n < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            reverse = 0;

            for(i = n; i > 0; i = i / 10) 
			{
                digit = i % 10;
                reverse = reverse * 10 + digit;
            }
            printf("Reverse = %d", reverse);
            break;

        case 6:
            sum = 0;

            for(i = n; i > 0; i = i / 10) 
			{
                digit = i % 10;
                sum = sum + digit;
            }
            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}