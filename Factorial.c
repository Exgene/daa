#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (n * fact(n - 1));
}

int main()
{
    int n;
    printf("ENter the value:");
    scanf("%d", &n);
    printf("%d!->%d", n, fact(n));
}