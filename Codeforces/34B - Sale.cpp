#include <bits/stdc++.h>
#define ll long long
#define N 1000007
#define pb push_back
using namespace std;

int main()
{
	ll n,m,i,j,sum=0;
	vector<ll> v;
	cin >> n >> m;
	
	for(i=0;i<n;i++)
	{
		cin >> j;
		v.pb(j);
	}
	
	sort(v.begin(),v.end());
	//for(auto x: v)cout << x << " ";
	cout << endl;
	for(i=0;i<m;i++)
	{
		if(v[i]<=0)sum += abs(v[i]);
	}
	
	cout << sum;
	
	
	
}


