#include <stdio.h>
void main()
{
    float salary;

    salary = calculateSalary();

    printf("Total Salary = %f", salary);
}
float calculateSalary()
{
    float basic, da, ta, hra, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    total = basic + da + ta + hra;

    return total;
}

