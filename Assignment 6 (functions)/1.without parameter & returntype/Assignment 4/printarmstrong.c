#include <stdio.h>
void main()
{
    printArmstrong();
}
void printArmstrong()
{
    int n, i, temp, rem, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}

