#include <stdio.h>

int main()
{
    long int m,n,i,sum=0,a[1010],t;
    scanf("%ld",&t);

    while(t--)
    {
        scanf("%ld %ld", &n,&m);

        for(i=0;i<n;i++)
        {
            scanf("%ld", &a[i]);
            sum = sum + a[i];
        }
        
        
        if (sum >= m) printf("%ld\n",m);
        else if(sum < m) printf("%ld\n",sum);   

        sum = 0;     

    }
}