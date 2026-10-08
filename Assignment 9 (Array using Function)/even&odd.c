#include <stdio.h>
void main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findOddEven(arr, n);
}
void findOddEven(int arr[], int n)
{
    printf("Even numbers: ");

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}

