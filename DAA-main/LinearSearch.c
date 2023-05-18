#include <stdlib.h>
#include <stdio.h>

int LSearch(int *arr1, int ele)
{
    for(int i=0;i<=sizeof(arr1);i++)
    {
        if(arr1[i]==ele)
        {
            printf("Found");
            return i;
        }
    }
    printf("Not Found!");
    return -1;
}

int main()
{
    int ele,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int *arr1 = (int *)malloc(sizeof(int)*n);
    printf("Enter the array Elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the search Element\n");
    scanf("%d",&ele);
    int res = LSearch(&arr1[0],ele);
    if(res>=0)
        printf(" in Index Location: %d",res);
    return 0;
}