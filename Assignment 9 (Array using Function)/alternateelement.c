#include <stdio.h>
void main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printAlternate(arr, n);
}
void printAlternate(int arr[], int n)
{
    printf("Alternate elements: ");

    for(int i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}

