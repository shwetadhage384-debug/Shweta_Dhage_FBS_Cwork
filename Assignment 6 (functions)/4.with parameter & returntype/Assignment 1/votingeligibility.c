#include <stdio.h>
void main()
{
    int age, result;

    printf("Enter your age: ");
    scanf("%d", &age);

    result = checkVotingEligibility(age);

    if (result == 1)
        printf("Person is Eligible to Vote");
    else
        printf("Person is Not Eligible to Vote");
}
int checkVotingEligibility(int age)
{
    if (age >= 18)
        return 1;
    else
        return 0;
}

