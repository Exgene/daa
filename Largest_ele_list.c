#include <stdio.h>
#include <stdlib.h>

int largest(int *arr, int n)
{
    int large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    return large;
}

int main()
{
    int n, *arr;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", arr[0]);
    printf("\nLargest Element in the given array:%d", largest(&arr[0], n));
}