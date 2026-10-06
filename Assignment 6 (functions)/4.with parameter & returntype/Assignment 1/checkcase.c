#include <stdio.h>
void main()
{
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = checkCase(ch);

    if (result == 1)
        printf("%c is Uppercase", ch);
    else if (result == 2)
        printf("%c is Lowercase", ch);
    else
        printf("%c is not an alphabet", ch);
}
int checkCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else if (ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}

