#include <stdio.h>
#include <stdlib.h>

void toh(int n, int source, int mid, int destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %d to %d\n", source, destination);
        return;
    }

    toh(n - 1, source, destination, mid);
    printf("Move disk %d from %d to %d\n", n, source, destination);
    toh(n - 1, mid, source, destination);
}

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve the problem:\n");
    toh(n, 1, 2, 3);
    return 0;
}