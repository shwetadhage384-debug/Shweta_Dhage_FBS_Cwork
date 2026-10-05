#include <stdio.h>
void main()
{
    int arr[5] = {10, 15, 20, 25, 30};
    int i;

    printf("Even numbers: ");
    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    
    printf("\nOdd numbers: ");
    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}