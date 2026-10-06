//Q 5.Write a program to check whether a person is eligible to vote (age = 18).

#include <stdio.h>
void main()
{
    checkVotingEligibility();
}
void checkVotingEligibility()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Person is eligible to vote.");
    else
        printf("Person is not eligible to vote.");
}
