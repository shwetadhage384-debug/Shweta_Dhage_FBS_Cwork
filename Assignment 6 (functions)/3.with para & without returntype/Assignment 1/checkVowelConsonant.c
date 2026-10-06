#include <stdio.h>
void main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    checkVowelConsonant(ch);
}
void checkVowelConsonant(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Character is Consonant");
    }
}

