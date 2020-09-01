#include <stdio.h>

int main()
{
    int a[150],i,n,j,k;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(j=n;j>0;j--)
    {
        for(i=0;i<j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                k = a[i];
                a[i] = a[i+1];
                a[i+1]= k;

            }
        }
    }

    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}