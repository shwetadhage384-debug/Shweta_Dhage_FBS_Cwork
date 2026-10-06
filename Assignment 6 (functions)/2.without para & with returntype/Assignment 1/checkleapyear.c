#include <stdio.h>
void main()
{
    int result;
    result = leapYear();

    if(result == 1)
        printf("Year is a Leap Year");
    else
        printf("Year is Not a Leap Year");

}
int leapYear()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

