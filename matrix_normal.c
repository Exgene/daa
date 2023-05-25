#include <stdio.h>
#include <stdlib.h>

void input(int a[][10], int r, int c)
{
    printf("Enter array Elements");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void show(int a[][10], int r, int c)
{
    printf("Array Elements are:");
    for (int i = 0; i < r; i++)
    {
        printf("\n");
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}

void multiply(int a[][10], int b[][10], int c[][10], int r1, int r2, int c1, int c2)
{
    int i, j, k = 0;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            c[i][j] = 0;
            for (k = 0; k < r1; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int arr1[10][10], arr2[10][10], mul[10][10];
    int c1, c2, r1, r2;

    printf("Enter the row and columns for matrix 1:");
    scanf("%d %d", &r1, &c1);

    printf("Enter the row and columns for matrix 2:");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Illegal Multiplication\n");
        exit(0);
    }

    input(arr1, r1, c1);
    input(arr2, r2, c2);
    multiply(arr1, arr2, mul, r1, r2, c1, c2);
    show(mul, r1, c2);
    return 0;
}