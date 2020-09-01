#include <stdio.h>
#include <math.h>
#define MAX 10000000

long long i,j,k,x,n,pflag[MAX];

int main()
{
	
	pflag[0] = pflag[1] = 1;
	
	for(i=2;i<MAX; i++)
	{
		if(pflag[i] == 0)
		{
			for(j = i*i; j<MAX; j+=i)
			pflag[j] = 1;
		}
		
	}
	
	scanf("%lld", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld", &x);
		
		if(x == 4) printf("YES\n");
		else if(x%2 == 0 ) printf("NO\n");
		else if(ceil(x/floor(sqrt(x))) == floor(sqrt(x)) && pflag[(int)sqrt(x)] == 0 ) printf("YES\n");
		else printf("NO\n");
	}	
	
}
