#include <stdio.h>

//int is_prime(long long int x)
//{
//	long long int i,j,flag=0;
//	
//	for(i=2;i*i<x;i++)
//	{
//		if(x%i == 0)
//		{
//		    flag = 1;
//			break;
//		}
//	}
//	
//	return flag;
//}

int main()
{
	int t,e;
	scanf("%d",&t);
	
	for(e=1;e<=t;e++)
	{
		long long int p,l,x,i;
		scanf("%lld %lld", &p,&l);
		x = p-l;
		
		if(x<l ) printf("impossible");
		
		else if(l != 0)
		{
			printf("Case %d: ",e);
			for(i=l;i<=x;i++)
			{
				if(x%i == 0 && i>l) printf("%lld ", i);
				
			}
		}
		else if(l == 0)
		{
			printf("Case %d: ",e);
			for(i=1;i<=x;i++)
			{
				if(x%i == 0 && i>l) printf("%lld ", i);
			}
			
		}
		
		printf("\n");
		
	}
}


