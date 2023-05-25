#include <stdlib.h>
#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fact(n - 1) + fact(n - 2);
}

int main()
{
    printf("Enter the value:");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("%d ", fact(i));
    return 0;
}