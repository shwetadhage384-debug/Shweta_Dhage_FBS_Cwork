//Q 1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>
void main()
{
    calculator();
}
void calculator()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, /, *, %%): ");
    scanf(" %c", &op);

    if (op == '+')
        printf("Addition = %d", a + b);
    else if (op == '-')
        printf("Subtraction = %d", a - b);
    else if (op == '*')
        printf("Multiplication = %d", a * b);
    else if (op == '/')
    {
        if (b != 0)
            printf("Division = %d", a / b);
        else
            printf("Division by zero is not possible.");
    }
    else if (op == '%')
    {
        if (b != 0)
            printf("Modulus = %d", a % b);
        else
            printf("Modulus by zero is not possible.");
    }
    else
        printf("Invalid operator.");
}

