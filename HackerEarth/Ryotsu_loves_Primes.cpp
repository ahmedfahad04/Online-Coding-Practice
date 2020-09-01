#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;

int main()
{
	long  int i,j,t,n,k,x;
	vector<long  int > prime,a;
	prime.assign(MAX, 1);
	prime[0] = prime[1] = 0;
	
	for(i=2;i<MAX;i++)
	{
		if(prime[i] == 0) continue;
		else{
			for(j=2*i;j<=MAX;j+=i)
			prime[j] = 0;
		}
	}
	
	scanf("%ld", &t);
	
	while(t--)
	{
		long  sum=0;
		
		scanf("%ld %ld", &n,&k);
		
		for(i=0;i<n;i++)
		{
			scanf("%ld", &x);
			if(prime[x] == 1){
				
				a.push_back(x);
			} 
		}
		
		for(i=0;i<a.size();i++)
		{
			if((i+1)%k == 0){
			//	cout << a[i] << endl;
				sum+=a[i];
			} 
		}
		
		printf("%ld\n", sum);
		a.clear();
		
		
	}
	
}
