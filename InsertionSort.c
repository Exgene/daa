#include <stdlib.h>
#include <stdio.h>

void insertSorting(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int cur = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > cur)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = cur;
    }
}

int main()
{
    int arr[] = {10, 30, 60, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertSorting(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
