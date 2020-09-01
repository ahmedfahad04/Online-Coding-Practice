#include <stdio.h>

int main()
{
    int a[2020],i,j,n,t,sum = 0,k=0,l=0;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum = sum + a[i];

            if(a[i]%2 == 0) k++;
            else l++;
        }

        
        //printf("**%d %d**\n",k,l);
        if(sum%2 != 0) printf("YES\n");
        else if (k == 0 || l == 0) printf("NO\n");
        else if (k > 0 && l > 0) printf("YES\n");
        else printf("NO\n");

        sum = 0;
        k = l = 0;
        
    }
    
}