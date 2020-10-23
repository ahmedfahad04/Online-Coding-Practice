#include <stdio.h>

int main()
{
	long long int i,j,a[100010],t,n,x,l=0;
	scanf("%lld", &t);
	
	while(t--)
	{
		scanf("%lld", &n);
	
		for(i=0;i<n;i++)
		scanf("%lld", &a[i]);
		
		for(j=n;j>0;j--)
		for(i=0;i<j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		}
		
	for(i=0;i<n;i=j)
    {
    	for(j=i+1; j<(n+1); j++)
    	{
    		if(a[i] == a[j]) continue;
    		else
    		{
    			l++;
    			break;
			}
		}
	}
	
	printf("%lld\n", l);
	l=0;
	
	}
	
}
