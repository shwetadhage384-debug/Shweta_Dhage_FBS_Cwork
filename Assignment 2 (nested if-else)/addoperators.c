#include<stdio.h>

void main()
{
	int a = 20, b = 25;
	char op;
	
	if ( op == '+');
	{
        printf("%d", a+b);
    }
    else
	{
        if (op == '-')
		{
            printf("%d", a-b);
        }
        else
		{
            if (op == '/')
			{
                printf("%d", a/b);
            }
            else
			{
                if (op == '*')
				{
                    printf("%d", a*b);
                }
                else
				{
                    if (op == '%')
					{
                        printf("%d", a%b);
                    }
                    else
					{
                        printf("Invalid operator");
                    }
                }
            }
        }
    }
}
