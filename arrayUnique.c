#include <stdio.h>

int isUnique(int arr[], int size)
{
    // Compare each element with the rest of the array
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                return 0; // Not unique
        }
    }
    return 1; // Unique
}

int main()
{
    int arr[100];
    int size;

    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int unique = isUnique(arr, size);

    if (unique)
    {
        printf("The array contains unique elements.\n");
    }
    else
    {
        printf("The array contains duplicate elements.\n");
    }

    return 0;
}
