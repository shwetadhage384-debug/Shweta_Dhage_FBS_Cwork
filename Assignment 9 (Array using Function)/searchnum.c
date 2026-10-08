#include <stdio.h>
void main()
{
    int arr[100], n, key, result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    result = search(arr, n, key);

    if(result != -1)
        printf("Number found at position %d", result + 1);
    else
        printf("Number not found");
}

int search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

