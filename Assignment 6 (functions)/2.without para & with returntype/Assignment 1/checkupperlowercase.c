#include <stdio.h>
void main()
{
    int result;

    result = checkCase();

    if(result == 1)
        printf("Character is Uppercase");
    else
        printf("Character is Lowercase");
}
int checkCase()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

