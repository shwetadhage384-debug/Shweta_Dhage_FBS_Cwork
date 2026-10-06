#include <stdio.h>
void main()
{
    int year, result;

    printf("Enter a year: ");
    scanf("%d", &year);

    result = checkLeapYear(year);

    if (result == 1)
        printf("%d is a Leap Year", year);
    else
        printf("%d is Not a Leap Year", year);
}
int checkLeapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

