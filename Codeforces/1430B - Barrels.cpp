#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		ll n,k,i,j,sum;
		vector<ll> v;
		cin >> n >> k;
		
		for(i=0;i<n;i++) {
			cin >> j;
			v.pb(j);
		}
		sort(v.rbegin(),v.rend());
		sum = v[0];
		for(i=1;i<=k;i++)
		{
			sum += v[i];
		}
		
		cout << sum << endl;;
	}
}
