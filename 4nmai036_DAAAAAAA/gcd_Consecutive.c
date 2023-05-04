#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)
{   
    int min;
    if(m>n)
        min = n;
    else
        min = m;
        
    while(min!=0)
    {
        if(m%min == 0) 
            if(n%min == 0)
                return min;
            else
                min--;
        else
            min--;
    }
}

int main()
{
    int m,n;
    printf("Enter the numbers: ");
    scanf("%d %d",&m,&n);
    printf("GCD of %d and %d is %d",m,n,gcd(m,n));
    return 0;
}