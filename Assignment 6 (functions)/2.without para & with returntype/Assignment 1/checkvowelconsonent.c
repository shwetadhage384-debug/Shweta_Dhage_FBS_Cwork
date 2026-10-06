#include <stdio.h>
void main()
{
    int result;

    result = checkVowel();

    if(result == 1)
        printf("Character is a Vowel");
    else
        printf("Character is a Consonant");
}
int checkVowel()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

