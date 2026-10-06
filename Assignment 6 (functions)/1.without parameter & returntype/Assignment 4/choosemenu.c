#include <stdio.h>
void main()
{
    menu();
}
void menu()
{
    int n, choice, i, count, temp, rem, reverse, sum;

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

    if (choice == 1)
    {
        if (n % 2 == 0)
            printf("%d is Even", n);
        else
            printf("%d is Odd", n);
    }
    else
    {
        if (choice == 2)
        {
            count = 0;

            for (i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    count++;
            }

            if (count == 2)
                printf("%d is Prime", n);
            else
                printf("%d is Not Prime", n);
        }
        else
        {
            if (choice == 3)
            {
                temp = n;
                reverse = 0;

                while (temp != 0)
                {
                    rem = temp % 10;
                    reverse = reverse * 10 + rem;
                    temp = temp / 10;
                }

                if (n == reverse)
                    printf("%d is Palindrome", n);
                else
                    printf("%d is Not Palindrome", n);
            }
            else
            {
                if (choice == 4)
                {
                    if (n > 0)
                        printf("%d is Positive", n);
                    else
                    {
                        if (n < 0)
                            printf("%d is Negative", n);
                        else
                            printf("Number is Zero");
                    }
                }
                else
                {
                    if (choice == 5)
                    {
                        temp = n;
                        reverse = 0;

                        while (temp != 0)
                        {
                            rem = temp % 10;
                            reverse = reverse * 10 + rem;
                            temp = temp / 10;
                        }

                        printf("Reverse = %d", reverse);
                    }
                    else
                    {
                        if (choice == 6)
                        {
                            temp = n;
                            sum = 0;

                            while (temp != 0)
                            {
                                rem = temp % 10;
                                sum = sum + rem;
                                temp = temp / 10;
                            }

                            printf("Sum of digits = %d", sum);
                        }
                        else
                        {
                            printf("Invalid Choice");
                        }
                    }
                }
            }
        }
    }
}

