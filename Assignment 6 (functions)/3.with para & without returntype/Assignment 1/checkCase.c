#include <stdio.h>
void main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    checkCase(ch);
}
void checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("Character is Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Character is Lowercase");
    else
        printf("Character is not an alphabet");
}

