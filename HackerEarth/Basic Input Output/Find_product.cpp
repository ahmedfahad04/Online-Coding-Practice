#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ll n,ans=1,i;

	cin >> n;
	
	vector<ll> v;
	
	v.resize(n);
	
	for(ll &x: v) cin >> x;
	
	for(i=0;i<n;i++)
	{
		ans = (ans*v[i])%(1000000007);
	}
	
	cout << ans;
	
	
	
	
}
