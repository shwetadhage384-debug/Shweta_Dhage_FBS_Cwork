#include <stdio.h>
void main()
{
    int result;

    result = checkVote();

    if(result == 1)
        printf("Person is Eligible to Vote");
    else
        printf("Person is Not Eligible to Vote");
}
int checkVote()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        return 1;
    else
        return 0;
}

