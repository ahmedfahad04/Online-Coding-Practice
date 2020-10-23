#include <bits/stdc++.h>
#define ll long long int
#define MAX 1010
using namespace std;


int main()
{
	//a = 12
	//b = 1 2 3 4 6 12 (6)
	int i,j;
	vector<int> prime;
	prime.assign(MAX,1);
	prime[0] = prime[1] = 0;
	
	for(i=2;i<=MAX;i++)
	{
		if(prime[i] == 0) continue;
		else{
			for(j = 2*i;j<=MAX;j+=i)
			prime[j] = 0;
		}
	}
	
	for(i = 0;i<1000;i++)
	{
		if(prime[i]) cout << i << endl;
	}
	
	return 0;
	//cout << isprime(5);
}
