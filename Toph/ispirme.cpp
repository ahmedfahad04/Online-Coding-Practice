#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100000


int main()
{
	vector<ll> prime;
	prime.assign(MAX,1);
	prime[0]=prime[1]=0;
	
	int i,j,k;
	for(i=2;i<MAX;i++)
	{
		if(prime[i] == 0) continue;
		else{
			for(j=2*i;j<=MAX;j+=i)
			prime[j] = 0;
		}
	}
	
	cin >> k;
	
	if(prime[k]) cout << "Yes";
	else cout << "No";
}
