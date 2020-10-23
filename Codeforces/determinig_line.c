#include <stdio.h>

int main()
{
    int a[101]={},i,x,j,n,r;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&r);
        for(j=0;j<r;j++)
        {
            scanf("%d", &x);
            a[x]++;
        }

    }

    for(i=0;i<101;i++)
    {
        if(a[i] == n) printf("%d ", i);
        //printf("**%d**\n",a[i]);
    }
   

}