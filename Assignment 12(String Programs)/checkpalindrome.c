#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}