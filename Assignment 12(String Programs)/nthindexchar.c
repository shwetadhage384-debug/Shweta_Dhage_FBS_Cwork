#include <stdio.h>
void main()
{
    char str[100];
    int i, n;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter index to remove: ");
    scanf("%d", &n);

    for (i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }
    printf("New string = %s", str);
}