#include <bits/stdc++.h>
#define MAX 10000000000
using namespace std;
unsigned long long int pflag[MAX],i,j,k,n;

int main()
{
	

	pflag[0] = pflag[1] = 1;
	for (i = 2; i<MAX; i++)
	{
		if(pflag[i] == 0)
		{
			for(j = i*i; j<MAX; j+=i)
			{
				pflag[j] = 1;
			}
		}
	}

	cin >> n;
	if(pflag[n] == 0) printf("prime");
	else printf("Not prime");
	/*
	if(pflag[n] == 0) cout<<1;
	else if(n%2 == 0) cout<<n/2;
	else
	{
		for(k = 3; k<10000000000; k++)
		{
			if(n%k == 0)
			{
				cout<<n/k;
				break;
			}
			
		}
		
	}
	*/
}