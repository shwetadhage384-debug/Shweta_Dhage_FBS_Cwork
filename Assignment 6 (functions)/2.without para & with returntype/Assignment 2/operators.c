#include <stdio.h>
void main()
{
    int result;

    result = calculator();

    printf("Result = %d", result);
}
int calculator()
{
    int a, b;
    char op;
    int result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, /, *, %%): ");
    scanf(" %c", &op);

    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '*')
        result = a * b;
    else if(op == '/')
        result = a / b;
    else if(op == '%')
        result = a % b;
    else
    {
        printf("Invalid operator");
        return 0;
    }
    return result;
}

