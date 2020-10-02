#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
	ll n,i,k,j,len=0;
	vector<ll> v,ans;
	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> j;
		v.pb(j);
	}

	for(i=0; i<n-1; i++)
	{
		if(v[i]<v[i+1]) len++;
		else ans.pb(len+1), len= 0;
	}
	
	ans.pb(len+1);
	sort(ans.rbegin(),ans.rend());


	cout << ans[0];


}


