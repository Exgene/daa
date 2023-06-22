#include <stdio.h>

int Bsearch(int arr[], int l, int r, int key)
{
    if (r >= l)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            return Bsearch(arr, l, mid - 1, key);
        else
            return Bsearch(arr, mid + 1, r, key);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("%d", Bsearch(arr, 0, 5, 50));
    return 0;
}