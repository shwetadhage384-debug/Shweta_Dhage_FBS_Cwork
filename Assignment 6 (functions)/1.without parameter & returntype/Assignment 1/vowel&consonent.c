//Q 4.Write a program to check whether a given character is a vowel or consonant.

#include <stdio.h>
void main()
{
    checkVowelConsonant();
}
void checkVowelConsonant()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a Vowel", ch);
    }
    else
    {
        printf("%c is a Consonant", ch);
    }
}

