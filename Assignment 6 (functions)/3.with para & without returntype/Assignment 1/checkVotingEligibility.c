#include <stdio.h>
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    checkVotingEligibility(age);
}
void checkVotingEligibility(int age)
{
    if(age >= 18)
        printf("Person is Eligible to Vote");
    else
        printf("Person is Not Eligible to Vote");
}

