#include <stdio.h>
void main()
{
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = checkVowel(ch);

    if (result == 1)
        printf("%c is a Vowel", ch);
    else
        printf("%c is a Consonant", ch);
}
int checkVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

