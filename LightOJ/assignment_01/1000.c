#include <stdio.h>

int main()
{
	long long int a,b,t,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld", &a,&b);
		printf("Case %lld: %lld\n", i+1, a+b);
		
	}
	
}
