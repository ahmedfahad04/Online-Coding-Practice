#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;


long int add(long int num)
{
	int i,j,sum=0;
	//cin >> num;
	
	
	for(;num!=0;)
	{
		j = num%10;
		sum += j;
		num/=10;
		//cout << j << " ";		
	}
	
	return sum;
}

int main()
{
	
	
	long int t;
	
	cin >> t;
	
	while(t--){
		long int i,j,count=0,l,r,sum=0;
		vector<long int> prime;
	prime.assign(MAX, 1);
	
	prime[0] = prime[1] = 0;
	
	cin >> l >> r;
	
	//algorithm
	for(i=2;i<=MAX;i++)
	{
		if(prime[i] == 0) continue;
		else{
			for(j=2*i;j<=r;j+=i)
			prime[j] = 0;
		}
	}
	
	
	for(i=0;i<=1r;i++)
	{
		if(prime[i] == 1 && i >= l && prime[add(i)] == 1)
		{
			count++;
			cout << i << endl;
		}
	}
	
//	&& prime[add(i)] == 1
	cout << count << endl;
	
	}
	
	
}

