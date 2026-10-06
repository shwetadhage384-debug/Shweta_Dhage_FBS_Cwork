#include <stdio.h>
void main()
{
    int age, result;

    printf("Enter age: ");
    scanf("%d", &age);

    result = checkAge(age);

    if (result == 1)
        printf("Child");
    else if (result == 2)
        printf("Teenager");
    else if (result == 3)
        printf("Adult");
    else
        printf("Senior");
}
int checkAge(int age)
{
    if (age < 12)
        return 1;       // Child
    else if (age <= 19)
        return 2;       // Teenager
    else if (age <= 59)
        return 3;       // Adult
    else
        return 4;       // Senior
}

