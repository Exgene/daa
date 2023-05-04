#include <stdio.h>
#include <stdlib.h>

int gcd(int m,int n)
{
    int rem=0;
    while(n!=0)
    {
        rem = m%n;
        m = n;
        n = rem;
    }
    return m;
}

int main()
{
    int m,n;
    printf("ENter the two numbers m and n:");
    scanf("%d %d",&m,&n);
    printf("The gdc of 2 numbers %d and %d = %d",m,n,gcd(m,n));
    return 0;
}
