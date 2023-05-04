#include <stdio.h>
#include <stdio.h>lib.h>
#include <math.h>

int main()
{
    int n=25;
    int a[n-2];
    for(int i=2;i<=n;i++)
    {
        a[i-2]=i;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=0;j<=n;j++)
        {
            if (a[j]==0)
                continue;
            if (a[j]==i)
                continue;
            if(a[j]%i==0)
                a[j]=0;    
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
            printf("%d ",a[i]);
    }

    return 0;
}