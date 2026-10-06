//Q 4.check result
#include <stdio.h>
void main()
{
    checkResult();
}
void checkResult()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        printf("Distinction");
    else if (marks > 65)
        printf("First Class");
    else if (marks > 55)
        printf("Second Class");
    else if (marks >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}

