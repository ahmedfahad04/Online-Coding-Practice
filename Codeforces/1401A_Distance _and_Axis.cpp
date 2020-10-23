#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,k,i,j;
		cin >> n >> k;
		
		if(n <= k) cout << k-n << endl;
		else if((n%2==0 && k%2 == 0) || (n&1 && k&1)) cout << 0 << endl;
		else cout << 1 << endl;
	}
}


