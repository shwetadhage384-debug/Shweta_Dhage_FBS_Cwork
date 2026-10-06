#include <stdio.h>
void main()
{
    int n, choice;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        evenOdd(n);

    else if(choice == 2)
        prime(n);

    else if(choice == 3)
        palindrome(n);

    else if(choice == 4)
        positiveNegative(n);

    else if(choice == 5)
        reverseNumber(n);

    else if(choice == 6)
        sumDigits(n);

    else
        printf("Invalid Choice");

}
void evenOdd(int n)
{
    if(n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}
void prime(int n)
{
    int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
}
void palindrome(int n)
{
    int temp, digit, reverse = 0;

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(reverse == temp)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}
void positiveNegative(int n)
{
    if(n > 0)
        printf("Positive Number");
    else if(n < 0)
        printf("Negative Number");
    else
        printf("Zero");
}
void reverseNumber(int n)
{
    int digit, reverse = 0;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("Reverse = %d", reverse);
}
void sumDigits(int n)
{
    int digit, sum = 0;
    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("Sum of digits = %d", sum);
}

