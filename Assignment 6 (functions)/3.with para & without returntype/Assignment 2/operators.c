#include <stdio.h>
void main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,*,/,%): ");
    scanf(" %c", &op);

    calculate(a, b, op);
}
void calculate(int a, int b, char op)
{
    if(op == '+')
        printf("Addition = %d", a + b);
    else if(op == '-')
        printf("Subtraction = %d", a - b);
    else if(op == '*')
        printf("Multiplication = %d", a * b);
    else if(op == '/')
    {
        if(b != 0)
            printf("Division = %d", a / b);
        else
            printf("Cannot divide by zero");
    }
    else if(op == '%')
    {
        if(b != 0)
            printf("Modulus = %d", a % b);
        else
            printf("Cannot divide by zero");
    }
    else
        printf("Invalid operator");
}

