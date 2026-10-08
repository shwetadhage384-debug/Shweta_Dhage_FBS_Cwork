#include <stdio.h>
void main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printPrime(arr, n);
}

int isPrime(int num)
{
    if(num < 2)
        return 0;

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

void printPrime(int arr[], int n)
{
    printf("Prime numbers: ");

    for(int i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
}

